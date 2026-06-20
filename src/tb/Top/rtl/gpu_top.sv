// =============================================================================
// gpu_top.sv — Top-Level GPU Module (per-core memory ports)
//
// Each core has its own A read, B read, and C write port exposed externally.
// No arbitration inside — cores access memory in parallel without contention
// because each has its own port.
// =============================================================================

module gpu_top #(
    parameter DATA_WIDTH       = 16,
    parameter ADDR_WIDTH       = 16,
    parameter NUM_CORES        = 2,
    parameter THREADS_PER_CORE = 2
)(
    input  logic                   clk,
    input  logic                   rst,
    input  logic                   start,
    input  logic [7:0]             N,
    input  logic [ADDR_WIDTH-1:0]  base_addr_A,
    input  logic [ADDR_WIDTH-1:0]  base_addr_B,
    input  logic [ADDR_WIDTH-1:0]  base_addr_C,

    // Per-core memory ports
    output logic [ADDR_WIDTH-1:0]  bram_a_addr    [NUM_CORES-1:0],
    input  logic [DATA_WIDTH-1:0]  bram_a_rd_data [NUM_CORES-1:0],

    output logic [ADDR_WIDTH-1:0]  bram_b_addr    [NUM_CORES-1:0],
    input  logic [DATA_WIDTH-1:0]  bram_b_rd_data [NUM_CORES-1:0],

    output logic [ADDR_WIDTH-1:0]  bram_c_addr    [NUM_CORES-1:0],
    output logic [DATA_WIDTH-1:0]  bram_c_wr_data [NUM_CORES-1:0],
    output logic [NUM_CORES-1:0]   bram_c_wr_en,

    output logic                   done
);

    // Dispatcher <-> Cores wires
    logic [NUM_CORES-1:0]  core_valid;
    logic [NUM_CORES-1:0]  core_start;
    logic [NUM_CORES-1:0]  core_ready;
    logic [NUM_CORES-1:0]  core_done;
    logic [15:0]           core_thread_id    [NUM_CORES-1:0];
    logic [15:0]           core_thread_count [NUM_CORES-1:0];

    // Dispatcher
    dispatcher #(
        .NUM_CORES        (NUM_CORES),
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) u_dispatcher (
        .clk               (clk),
        .rst               (rst),
        .start             (start),
        .N                 (N),
        .core_done         (core_done),
        .core_ready        (core_ready),
        .core_valid        (core_valid),
        .core_start        (core_start),
        .core_thread_id    (core_thread_id),
        .core_thread_count (core_thread_count),
        .done              (done)
    );

    // Cores
    genvar c;
    generate
        for (c = 0; c < NUM_CORES; c++) begin : gen_cores
            logic [7:0] tcount_byte;
            assign tcount_byte = core_thread_count[c][7:0];

            core #(
                .DATA_WIDTH       (DATA_WIDTH),
                .ADDR_WIDTH       (ADDR_WIDTH),
                .THREADS_PER_CORE (THREADS_PER_CORE)
            ) u_core (
                .clk             (clk),
                .rst             (rst),
                .valid           (core_valid[c]),
                .ready           (core_ready[c]),
                .start           (core_start[c]),
                .thread_id_start (core_thread_id[c]),
                .thread_count    (tcount_byte),
                .N               (N),
                .base_addr_A     (base_addr_A),
                .base_addr_B     (base_addr_B),
                .base_addr_C     (base_addr_C),

                .addr_A_out      (bram_a_addr[c]),
                .matrix_a_data   (bram_a_rd_data[c]),
                .addr_B_out      (bram_b_addr[c]),
                .matrix_b_data   (bram_b_rd_data[c]),
                .addr_C_out      (bram_c_addr[c]),
                .wdata_C_out     (bram_c_wr_data[c]),
                .we_C            (bram_c_wr_en[c]),

        