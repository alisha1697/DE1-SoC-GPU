// core.sv
//
// One compute core. Receives a block of work from the dispatcher via
// valid/ready handshake + start pulse, runs the kernel via the scheduler,
// reports done.
//
// Internal pieces:
//   - 1x scheduler   (the kernel FSM)
//   - N x thread     (one per THREADS_PER_CORE, each contains an FMA)
//   - Address MUXes  (pick t_select's thread address each cycle)
//
// Memory interface (split A/B/C ports — assumes Option 3 banked memory):
//   - addr_A_out / matrix_a_data   : A read port
//   - addr_B_out / matrix_b_data   : B read port
//   - addr_C_out / wdata_C / we_C  : C write port
//
// Dispatcher interface:
//   valid: dispatcher has a block ready for this core
//   ready: core is idle and can accept a block
//   start: 1-cycle pulse — kicks off the kernel
//   thread_id_start, thread_count: block parameters
//
// NOTE on multi-block execution:
//   The scheduler stays in DONE state after finishing a block until reset.
//   For the core to run multiple blocks, the scheduler needs a DONE→IDLE
//   transition (e.g., `if (start) state <= INIT` inside DONE). Without it,
//   only the first block dispatched to each core will run.

`timescale 1ns/1ns

module core #(
    parameter DATA_WIDTH       = 16,
    parameter ADDR_WIDTH       = 16,
    parameter THREADS_PER_CORE = 2,
    parameter TSEL = (THREADS_PER_CORE == 1) ? 1 : $clog2(THREADS_PER_CORE)
)(
    input  logic                    clk,
    input  logic                    rst,

    // Dispatcher handshake
    input  logic                    valid,
    output logic                    ready,
    input  logic                    start,
    input  logic [15:0]             thread_id_start,
    input  logic [7:0]              thread_count,

    // Kernel parameters (broadcast from gpu_top)
    input  logic [7:0]              N,
    input  logic [ADDR_WIDTH-1:0]   base_addr_A,
    input  logic [ADDR_WIDTH-1:0]   base_addr_B,
    input  logic [ADDR_WIDTH-1:0]   base_addr_C,

    // Memory: A read port
    output logic [ADDR_WIDTH-1:0]   addr_A_out,
    input  logic [DATA_WIDTH-1:0]   matrix_a_data,

    // Memory: B read port 
    output logic [ADDR_WIDTH-1:0]   addr_B_out,
    input  logic [DATA_WIDTH-1:0]   matrix_b_data,

    // Memory: C write port 
    output logic [ADDR_WIDTH-1:0]   addr_C_out,
    output logic [DATA_WIDTH-1:0]   wdata_C_out,
    output logic                    we_C,

    //  Status back to dispatcher 
    output logic                    done
);

    // The core is "ready" when not currently running a block.
    logic busy;
    always_ff @(posedge clk) begin
        if (rst)          busy <= 1'b0;
        else if (start)   busy <= 1'b1;   // dispatcher kicked us off
        else if (done)    busy <= 1'b0;   // kernel finished
    end
    assign ready = !busy; //valid ready handshake 

    // The dispatcher's `valid` is observed but not directly used here —
    // the actual "go" signal is `start` which the dispatcher pulses
    // exactly once when the handshake completes.
    /* verilator lint_off UNUSED */
    logic unused_valid;
    assign unused_valid = valid;
    /* verilator lint_on UNUSED */


    // Wires from scheduler
    logic [TSEL-1:0]                 t_select;
    logic [THREADS_PER_CORE-1:0]     data_valid;
    logic [THREADS_PER_CORE-1:0]     fma_en;
    logic [7:0]                      k;
    logic                            mem_write_en;
    

    scheduler #(
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) sched_inst (
        .clk          (clk),
        .rst          (rst),
        .start        (start),
        .N            (N),
        .thread_count (thread_count),
        .t_select     (t_select),
        .data_valid   (data_valid),
        .fma_en       (fma_en),
        .k            (k),
        .mem_write_en (mem_write_en),
        .state        (/* unused */),
        .done         (done)
    );

    // Per-thread output arrays (filled by thread instances
    logic [ADDR_WIDTH-1:0]  thread_addr_A [THREADS_PER_CORE];
    logic [ADDR_WIDTH-1:0]  thread_addr_B [THREADS_PER_CORE];
    logic [ADDR_WIDTH-1:0]  thread_addr_C [THREADS_PER_CORE];
    logic [DATA_WIDTH-1:0]  thread_result [THREADS_PER_CORE];

    // ─────────────────────────────────────────────
    // Threads (generate loop)
    //   - Each thread gets a unique thread_id = thread_id_start + i
    //   - en = (i < thread_count) — disables threads beyond the block size
    //   - All threads share the data buses (matrix_a_data, matrix_b_data)
    // ─────────────────────────────────────────────
    genvar i;
    generate
        for (i = 0; i < THREADS_PER_CORE; i = i + 1) begin : g_threads
            thread #(
                .DATA_WIDTH (DATA_WIDTH),
                .ADDR_WIDTH (ADDR_WIDTH)
            ) th (
                .clk         (clk),
                .rst         (rst),
                .en          (i < thread_count),
                .N           (N),
                .k           (k),
                .thread_id   (thread_id_start + 16'(i)),
                .base_addr_A (base_addr_A),
                .base_addr_B (base_addr_B),
                .base_addr_C (base_addr_C),
                .data_valid  (data_valid[i]),
                .a_val       (matrix_a_data),
                .b_val       (matrix_b_data),
                .data_ready  (),                  // unused
                .addr_A      (thread_addr_A[i]),
                .addr_B      (thread_addr_B[i]),
                .addr_C      (thread_addr_C[i]),
                .result      (thread_result[i])
            );
        end
    endgenerate

    // Address MUXes — pick t_select's thread address for each port
    //   - A and B are driven in parallel (separate ports, no MUX needed
    //     between them, just per-thread selection)
    //   - C write port driven only when scheduler's mem_write_en is high
    assign addr_A_out  = thread_addr_A[t_select];
    assign addr_B_out  = thread_addr_B[t_select];
    assign addr_C_out  = thread_addr_C[t_select];
    assign wdata_C_out = thread_result[t_select];
    assign we_C        = mem_write_en;

endmodule