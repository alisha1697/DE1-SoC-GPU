// =============================================================================
// scheduler.sv  (handshake-driven memory access, multi-block capable)
//
// Main FSM for one core.
//
//   for k = 0..N-1:
//       for t = 0..thread_count-1:
//           WAIT   → assert mem_read_valid; wait for arbiter grant (mem_read_ready)
//           FMA    → BRAM data on bus next cycle; pulse data_valid[t] + fma_en[t]
//   for t = 0..thread_count-1:
//           WRITE  → assert mem_write_valid; wait for arbiter grant (mem_write_ready)
//
// Notes:
//   - The mem_controller arbitrates between cores. Each core stalls in WAIT
//     until it wins read arbitration, then proceeds to FMA the cycle after.
//   - Same handshake pattern for the WRITE state.
//   - DONE → INIT transition on start lets the core run more than one block
//     per simulation without a full reset.
// =============================================================================
module scheduler #(
    parameter THREADS_PER_CORE = 2,
    parameter TSEL             = (THREADS_PER_CORE == 1) ? 1 : $clog2(THREADS_PER_CORE)
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

    // Memory read handshake: scheduler requests a read, arbiter grants it
    output logic                              mem_read_valid,
    input  logic                              mem_read_ready,

    // Memory write handshake: scheduler requests a write, arbiter grants it
    output logic                              mem_write_valid,
    input  logic                              mem_write_ready,

    // Status / debug
    output logic [3:0]                        state,
    output logic                              done
);

    // State encoding
    localparam [3:0] IDLE    = 4'b0000;
    localparam [3:0] INIT    = 4'b0001;
    localparam [3:0] WAIT    = 4'b0010;   // hold read request until arbiter grants
    localparam [3:0] FMA     = 4'b0011;
    localparam [3:0] NEXT_T  = 4'b0100;
    localparam [3:0] NEXT_K  = 4'b0101;
    localparam [3:0] WRITE   = 4'b0110;   // hold write request until arbiter grants
    localparam [3:0] NEXT_W  = 4'b0111;
    localparam [3:0] DONE    = 4'b1000;

    // Counters
    logic [7:0] t_cnt;
    logic [7:0] k_cnt;

    wire is_last_thread = (t_cnt == thread_count - 8'd1);
    wire is_last_k      = (k_cnt == N - 8'd1);

    // FSM
    always_ff @(posedge clk) begin
        if (rst) begin
            state        <= IDLE;
            t_cnt        <= 0;
            k_cnt        <= 0;
            done         <= 1'b0;
            data_valid   <= 0;
            fma_en       <= 0;
        end else begin
            // Default: deassert one-cycle pulses every cycle
            data_valid   <= 0;
            fma_en       <= 0;
            case (state)
                IDLE: begin
                    done <= 1'b0;
                    if (start) state <= INIT;
                end

                INIT: begin
                    t_cnt <= 0;
                    k_cnt <= 0;
                    state <= WAIT;
                end

                // WAIT: hold mem_read_valid (driven combinationally below)
                // until the arbiter grants us via mem_read_ready. Then move to
                // FMA; data will be on the bus that cycle (1-cycle BRAM latency
                // after the grant).
                WAIT: begin
                    if (mem_read_ready) state <= FMA;
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

                // WRITE: hold mem_write_valid until the arbiter grants us
                // via mem_write_ready. Then advance to NEXT_W.
                WRITE: begin
                    if (mem_write_ready) state <= NEXT_W;
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

    // Read valid: asserted whenever we're sitting in WAIT
    assign mem_read_valid  = (state == WAIT);

    // Write valid: asserted whenever we're sitting in WRITE
    assign mem_write_valid = (state == WRITE);

endmodule
