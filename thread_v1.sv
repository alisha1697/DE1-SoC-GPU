// Thread: computes one output element C[i][j] via index/address generation and FMA accumulation
module thread #(
    parameter DATA_WIDTH = 16,
    parameter ADDR_WIDTH = 16
)(
    input logic clk, rst, en,
    input logic [7:0] N, k,
    input logic [15:0] thread_id,
    input logic [ADDR_WIDTH-1:0] base_addr_A, base_addr_B, base_addr_C,
    
    // Data from memory (valid/ready handshake)
    input logic data_valid,
    input logic [DATA_WIDTH-1:0] a_val, b_val,
    output logic data_ready,

    // Address generation
    output logic [ADDR_WIDTH-1:0] addr_A, addr_B, addr_C,

    // Accumulated result
    output logic [DATA_WIDTH-1:0] result
);
    // Instantiates: 1x fma

endmodule
