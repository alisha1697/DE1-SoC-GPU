// =============================================================================
// gpu_top.sv — Top-Level GPU Module
//
// Instantiates and wires together all subsystems:
//   1. dispatcher   — splits N² threads across cores in waves
//   2. core[0..N]   — each core runs a block of threads with a scheduler
//   3. mem_controller — round-robin BRAM arbiter, one read port + one write port
//
// This module contains NO logic. All behaviour lives in the submodules above.
// =============================================================================

module gpu_top #(
    parameter DATA_WIDTH       = 16,
    parameter ADDR_WIDTH       = 16,
    parameter NUM_CORES        = 2,
    parameter THREADS_PER_CORE = 2
)(
    input  logic clk,
    input  logic rst,
    input  logic start,
    input  logic [7:0] N,
    input  logic [ADDR_WIDTH-1:0] base_addr_A, base_addr_B, base_addr_C,

    // BRAM Port A (read) — wired to Quartus dual-port BRAM IP
    input  logic [DATA_WIDTH-1:0] ram_rd_data_a,
    output logic [ADDR_WIDTH-1:0] ram_addr_a,
    output logic                  ram_rd_en_a,

    // BRAM Port B (write) — wired to Quartus dual-port BRAM IP
    output logic                  ram_wr_en_b,
    output logic [ADDR_WIDTH-1:0] ram_addr_b,
    output logic [DATA_WIDTH-1:0] ram_wr_data_b,

    output logic done
);

    // ─────────────────────────────────────────────────────────────────────────
    // Internal wires: dispatcher ↔ cores
    // ─────────────────────────────────────────────────────────────────────────
    logic [NUM_CORES-1:0] core_valid;
    logic [NUM_CORES-1:0] core_start;
    logic [NUM_CORES-1:0] core_ready;
    logic [NUM_CORES-1:0] core_done;
    logic [15:0]          core_thread_id_start [NUM_CORES-1:0];
    logic [15:0]          core_thread_count    [NUM_CORES-1:0];

    // ─────────────────────────────────────────────────────────────────────────
    // Internal wires: cores ↔ mem_controller
    // ─────────────────────────────────────────────────────────────────────────
    logic [NUM_CORES-1:0]  core_mem_read_valid;
    logic [NUM_CORES-1:0]  core_mem_read_ready;
    logic [ADDR_WIDTH-1:0] core_mem_read_addr  [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0] core_mem_read_data  [NUM_CORES-1:0];

    logic [NUM_CORES-1:0]  core_mem_write_valid;
    logic [NUM_CORES-1:0]  core_mem_write_ready;
    logic [ADDR_WIDTH-1:0] core_mem_write_addr [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0] core_mem_write_data [NUM_CORES-1:0];

    // ─────────────────────────────────────────────────────────────────────────
    // 1. Dispatcher
    // ─────────────────────────────────────────────────────────────────────────
    dispatcher #(
        .NUM_CORES        (NUM_CORES),
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) u_dispatcher (
        .clk                  (clk),
        .rst                  (rst),
        .start                (start),
        .N                    (N),
        .core_done            (core_done),
        .core_ready           (core_ready),
        .core_valid           (core_valid),
        .core_start           (core_start),
        .core_thread_id_start (core_thread_id_start),
        .core_thread_count    (core_thread_count),
        .done                 (done)
    );

    // ─────────────────────────────────────────────────────────────────────────
    // 2. Core instances
    // ─────────────────────────────────────────────────────────────────────────
    genvar c;
    generate
        for (c = 0; c < NUM_CORES; c++) begin : gen_cores
            core #(
                .DATA_WIDTH       (DATA_WIDTH),
                .ADDR_WIDTH       (ADDR_WIDTH),
                .THREADS_PER_CORE (THREADS_PER_CORE)
            ) u_core (
                .clk             (clk),
                .rst             (rst),
                .start           (core_start[c]),
                .dispatch_valid  (core_valid[c]),
                .N               (N),
                .thread_id_start (core_thread_id_start[c]),
                .thread_count    (core_thread_count[c]),
                .base_addr_A     (base_addr_A),
                .base_addr_B     (base_addr_B),
                .base_addr_C     (base_addr_C),
                .dispatch_ready  (core_ready[c]),
                .done            (core_done[c]),
                .mem_read_valid  (core_mem_read_valid[c]),
                .mem_read_ready  (core_mem_read_ready[c]),
                .mem_read_addr   (core_mem_read_addr[c]),
                .mem_read_data   (core_mem_read_data[c]),
                .mem_write_valid (core_mem_write_valid[c]),
                .mem_write_ready (core_mem_write_ready[c]),
                .mem_write_addr  (core_mem_write_addr[c]),
                .mem_write_data  (core_mem_write_data[c])
            );
        end
    endgenerate

    // ─────────────────────────────────────────────────────────────────────────
    // 3. Memory Controller
    // ─────────────────────────────────────────────────────────────────────────
    mem_controller #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .NUM_CORES  (NUM_CORES)
    ) u_mem_controller (
        .clk             (clk),
        .rst             (rst),
        .core_read_valid (core_mem_read_valid),
        .core_read_addr  (core_mem_read_addr),
        .core_read_ready (core_mem_read_ready),
        .core_read_data  (core_mem_read_data),
        .core_write_valid(core_mem_write_valid),
        .core_write_addr (core_mem_write_addr),
        .core_write_data (core_mem_write_data),
        .core_write_ready(core_mem_write_ready),
        .ram_addr_a      (ram_addr_a),
        .ram_rd_en_a     (ram_rd_en_a),
        .ram_rd_data_a   (ram_rd_data_a),
        .ram_addr_b      (ram_addr_b),
        .ram_wr_data_b   (ram_wr_data_b),
        .ram_wr_en_b     (ram_wr_en_b)
    );

endmodule
