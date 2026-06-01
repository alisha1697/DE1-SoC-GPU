// =============================================================================
// scheduler.sv  (parameterized BRAM latency, multi-block capable)
//
// Main FSM for one core.
//
//   for k = 0..N-1:
//       for t = 0..thread_count-1:
//           WAIT   → drive thread t's addr_A/B (via MUX in core.sv)
//                    sit for BRAM_LATENCY cycles for data to arrive
//           FMA    → BRAM data on bus; pulse data_valid[t] + fma_en[t]
//   for t = 0..thread_count-1:
//           WRITE  → drive thread t's addr_C + result, pulse mem_write_en
//
// Two changes from previous version:
//   1. BRAM_LATENCY parameter — handle 1-cycle (no output reg) or 2-cycle
//      (output reg enabled, as in MATRIX_A.v from Quartus). A small wait
//      counter holds WAIT state for the right number of cycles.
//   2. DONE → IDLE transition on start. Lets the core run more than one
//      block per simulation without a full reset.
// =============================================================================
module scheduler #(
    parameter THREADS_PER_CORE = 2,
    parameter BRAM_LATENCY     = 2,      // 1 or 2 (set to 2 for MATRIX_A/B/C as generated)
    parameter TSEL             = (THREADS_PER_CORE == 1) ? 1 : $clog2(THREADS_PER_CORE),
    parameter WAIT_W           = (BRAM_LATENCY <= 1) ? 1 : $clog2(BRAM_LATENCY)
)(
    input  logic                              clk,
    input  logic                              rst,
    input  logic                              start,

    // Kernel parameters
    input  logic [7:0]                        N,
    input  logic [7:0]                        thread_count,

    // To core
    output logic [TSEL-1:0]                   t_select,
    output logic [THREADS_PER_CORE-1:0]       data_valid,
    output logic [THREADS_PER_CORE-1:0]       fma_en,
    output logic [7:0]                        k,
    output logic                              mem_write_en,

    // Status / debug
    output logic [3:0]                        state,
    output logic                              done
);

    // State encoding
    localparam [3:0] IDLE    = 4'b0000;
    localparam [3:0] INIT    = 4'b0001;
    localparam [3:0] WAIT    = 4'b0010;   // hold address for BRAM_LATENCY cycles
    localparam [3:0] FMA     = 4'b0011;
    localparam [3:0] NEXT_T  = 4'b0100;
    localparam [3:0] NEXT_K  = 4'b0101;
    localparam [3:0] WRITE   = 4'b0110;
    localparam [3:0] NEXT_W  = 4'b0111;
    localparam [3:0] DONE    = 4'b1000;

    // Counters
    logic [7:0]         t_cnt;
    logic [7:0]         k_cnt;
    logic [WAIT_W-1:0]  wait_cnt;

    wire is_last_thread = (t_cnt == thread_count - 8'd1);
    wire is_last_k      = (k_cnt == N - 8'd1);
    wire wait_done      = (wait_cnt == (BRAM_LATENCY - 1));

    // FSM
    always_ff @(posedge clk) begin
        if (rst) begin
            state        <= IDLE;
            t_cnt        <= 0;
            k_cnt        <= 0;
            wait_cnt     <= 0;
            done         <= 1'b0;
            data_valid   <= 0;
            fma_en       <= 0;
            mem_write_en <= 1'b0;
        end else begin
            // Default: deassert one-cycle pulses
            data_valid   <= 0;
            fma_en       <= 0;
            mem_write_en <= 1'b0;

            case (state)
                IDLE: begin
                    done <= 1'b0;
                    if (start) state <= INIT;
                end

                INIT: begin
                    t_cnt    <= 0;
                    k_cnt    <= 0;
                    wait_cnt <= 0;
                    state    <= WAIT;
                end

                // Hold address on BRAM input for BRAM_LATENCY cycles.
                WAIT: begin
                    if (wait_done) begin
                        wait_cnt <= 0;
                        state    <= FMA;
                    end else begin
                        wait_cnt <= wait_cnt + 1'b1;
                    end
                end

                FMA: begin
                    data_valid[t_cnt[TSEL-1:0]] <= 1'b1;
                    fma_en    [t_cnt[TSEL-1:0]] <= 1'b1;
                    state                       <= NEXT_T;
                end

                NEXT_T: begin
                    if (is_last_thread) begin
                        t_cnt <= 0;
                        state <= NEXT_K;
                    end else begin
                        t_cnt <= t_cnt + 8'd1;
                        state <= WAIT;
                    end
                end

                NEXT_K: begin
                    if (is_last_k) begin
                        t_cnt <= 0;
                        state <= WRITE;
                    end else begin
                        k_cnt <= k_cnt + 8'd1;
                        state <= WAIT;
                    end
                end

                WRITE: begin
                    mem_write_en <= 1'b1;
                    state        <= NEXT_W;
                end

                NEXT_W: begin
                    if (is_last_thread) begin
                        state <= DONE;
                    end else begin
                        t_cnt <= t_cnt + 8'd1;
                        state <= WRITE;
                    end
                end

                // Hold done high. If a new start arrives, allow re-entry
                // into INIT to run another block. This is the multi-block fix.
                DONE: begin
                    done <= 1'b1;
                    if (start) begin
                        done  <= 1'b0;
                        state <= INIT;
                    end
                end

                default: state <= IDLE;
            endcase
        end
    end

    // Combinational outputs
    assign t_select = t_cnt[TSEL-1:0];
    assign k        = k_cnt;

endmodule
