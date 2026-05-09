// =============================================================================
// scheduler.sv  (1-cycle BRAM latency)
//
// Main FSM for one core. 
//
//   for k = 0..N-1:
//       for t = 0..thread_count-1:
//           ISSUE  → drive thread t's addr_A and addr_B (via MUX in core.sv)
//           FMA    → BRAM data is on the bus; pulse data_valid[t] + fma_en[t]
//   for t = 0..thread_count-1:
//           WRITE  → drive thread t's addr_C and result, pulse mem_write_en
//
// Threads compute their own addresses (addr_A/B/C). Scheduler picks which
// thread's address bus reaches the BRAM via t_select.
// =============================================================================
module scheduler #(
    parameter THREADS_PER_CORE = 2,
    parameter TSEL            = (THREADS_PER_CORE == 1) ? 1 : $clog2(THREADS_PER_CORE)
)(
    input  logic                              clk,
    input  logic                              rst,
    input  logic                              start,

    // Kernel parameters
    input  logic [7:0]                        N,
    input  logic [7:0]                        thread_count,

    // To core: which thread's address bus drives the BRAMs this cycle
    output logic [TSEL-1:0]                   t_select,

    // To threads: per-thread one-cycle pulses
    output logic [THREADS_PER_CORE-1:0]       data_valid,
    output logic [THREADS_PER_CORE-1:0]       fma_en,
    output logic [7:0]                        k,

    // memory write 
    output logic                              mem_write_en,

    
    output logic                              done
);


    // State encoding bits
    localparam [3:0] IDLE    = 4'b0000;  // wait for start
    localparam [3:0] INIT    = 4'b0001;  // reset counters
    localparam [3:0] WAIT   = 4'b0010;   // wait one cycle for addresses to propagate to BRAM and data to come back
    localparam [3:0] FMA     = 4'b0011;  // BRAM data on bus, pulse fma_en[t]
    localparam [3:0] NEXT_T  = 4'b0100;  // advance t or move to NEXT_K
    localparam [3:0] NEXT_K  = 4'b0101;  // advance k or move to write phase
    localparam [3:0] WRITE   = 4'b0110;  // pulse mem_write_en for thread[t]
    localparam [3:0] NEXT_W  = 4'b0111;  // advance t in write phase, or DONE
    localparam [3:0] DONE    = 4'b1000;  // hold done high

    logic [3:0] state;

    // Counters
    logic [7:0] t_cnt;
    logic [7:0] k_cnt;

    wire is_last_thread = (t_cnt == thread_count - 8'd1); //used to terminate the loop  
    wire is_last_k      = (k_cnt == N - 8'd1);



    // FSM
    always_ff @(posedge clk) begin
        if (rst) begin
            state        <= IDLE;
            t_cnt        <= '0;
            k_cnt        <= '0;
            done         <= 1'b0;
            data_valid   <= '0;
            fma_en       <= '0;
            mem_write_en <= 1'b0;
        end else begin
            // Default: deassert one-cycle pulses every cycle
            data_valid   <= '0;
            fma_en       <= '0;
            mem_write_en <= 1'b0;

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

                WAIT: begin
                    state <= FMA;
                end

                FMA: begin
                    data_valid[t_cnt[TSEL-1:0]] <= 1'b1;
                    fma_en    [t_cnt[TSEL-1:0]] <= 1'b1;
                    state                        <= NEXT_T;
                end

                NEXT_T: begin
                    if (is_last_thread) begin
                        t_cnt <= '0;
                        state <= NEXT_K;
                    end else begin
                        t_cnt <= t_cnt + 8'd1;
                        state <= WAIT;
                    end
                end

                NEXT_K: begin
                    if (is_last_k) begin
                        t_cnt <= '0;
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

                DONE: begin
                    done <= 1'b1;
                end

                default: state <= IDLE;
            endcase
        end
    end

    // Combinational outputs
    assign t_select = t_cnt[TSEL-1:0];
    assign k        = k_cnt;

endmodule
