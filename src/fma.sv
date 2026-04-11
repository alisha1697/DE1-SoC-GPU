// FMA: fused multiply-add unit computing result = (a * b) + c
module fma #(
    parameter DATA_WIDTH = 16
)(
    input logic clk, rst,
    input logic [DATA_WIDTH-1:0] a, b, c,
    input logic valid_in,

    output logic [DATA_WIDTH-1:0] result,
    output logic valid_out, ready
);
    // Instantiates: none

endmodule
