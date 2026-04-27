module alu_fma #(
	
	parameter DATA_BITS = 16,      //for simple matrices, 8 bit should be enough?
	
)(
	input logic clk,
	input logic reset,
	
	input reg [2:0] core_state, //current execution state from scheduler and only compute when in EXECUTE state
	
	input reg [2:0] opreation_mux, // currently: 000:ADD, 001 SUB, 010: MUL, 011: DIV
																// 100: CMP, 101 FMA
			
	input reg fma_flag,          // FMA flag, use FMA ooperaiton when high 
	
	input logic [DATA_BITS-1:0] a, //first operand from the register file
	input logic [DATA_BITS-1:0] b, // second operand from the register file
	input logic [DATA_BITS-1:0] c, // the third operand for FMA
	
	output logic [DATA_BITS-1:0] results, //Result of computation 
	output logic valid_out, valid_in, ready,
);

endmodule
