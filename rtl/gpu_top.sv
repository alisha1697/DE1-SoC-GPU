// Top-level GPU module: connects dispatcher, cores, BRAM for matrix multiplication
module gpu_top #(
    parameter DATA_WIDTH      = 16,
    parameter ADDR_WIDTH      = 16,
    parameter NUM_CORES        = 2,
    parameter THREADS_PER_CORE = 2
)(
    input logic clk,
    input logic rst,
    input logic start,
    input logic [7:0] N,
    input logic [ADDR_WIDTH-1:0] base_addr_A, base_addr_B, base_addr_C,

    // RAM Port A (r) wire to a dual-port BRAM
    input  logic [DATA_WIDTH-1:0] ram_rd_data_a,
    output logic [ADDR_WIDTH-1:0] ram_addr_a,
    output logic ram_rd_en_a,

    // RAM Port B (w) wire to a dual-port BRAM
    output logic ram_wr_en_b,
    output logic [ADDR_WIDTH-1:0] ram_addr_b, ram_wr_data_b,

    output logic done
);
    // Instantiates: 1x dispatcher, NUM_CORES x core

endmodule
