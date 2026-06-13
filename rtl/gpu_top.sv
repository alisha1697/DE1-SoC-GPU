// =============================================================================
// gpu_top.sv — Top-Level GPU Module
//
// Instantiates and wires together all subsystems:
//   1. dispatcher     — splits N² threads across cores in waves
//   2. core[0..N]     — each core runs a block of threads with a scheduler
//   3. mem_controller — round-robin arbiter for two separate BRAMs:
//                         BRAM_A (read-only, holds input matrices A & B)
//                         BRAM_C (write-only, holds output matrix C)
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

    // BRAM_A — read-only (holds input matrices A & B)
    input  logic [DATA_WIDTH-1:0] bram_a_rd_data,
    output logic [ADDR_WIDTH-1:0] bram_a_addr,
    output logic                  bram_a_rd_en,

    // BRAM_C — write-only (holds output matrix C)
    output logic                  bram_c_wr_en,
    output logic [ADDR_WIDTH-1:0] bram_c_addr,
    output logic [DATA_WIDTH-1:0] bram_c_wr_data,

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
    // 3. Memory Controller — arbitrates two separate BRAMs
    // ─────────────────────────────────────────────────────────────────────────
    mem_controller #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .NUM_CORES  (NUM_CORES)
    ) u_mem_controller (
        .clk              (clk),
        .rst              (rst),
        .core_read_valid  (core_mem_read_valid),
        .core_read_addr   (core_mem_read_addr),
        .core_read_ready  (core_mem_read_ready),
        .core_read_data   (core_mem_read_data),
        .core_write_valid (core_mem_write_valid),
        .core_write_addr  (core_mem_write_addr),
        .core_write_data  (core_mem_write_data),
        .core_write_ready (core_mem_write_ready),
        // BRAM_A (read-only)
        .bram_a_addr      (bram_a_addr),
        .bram_a_rd_en     (bram_a_rd_en),
        .bram_a_rd_data   (bram_a_rd_data),
        // BRAM_C (write-only)
        .bram_c_addr      (bram_c_addr),
        .bram_c_wr_data   (bram_c_wr_data),
        .bram_c_wr_en     (bram_c_wr_en)
    );

endmodule
