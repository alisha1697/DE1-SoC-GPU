module alu_fma #(
	
	parameter DATA_BITS = 8      //for simple matrices, 8 bit should be enough?
	parameter FRACTIONAL_BITS = 4. //Simple fixed-point for basic precision
	
)(
	input wire clk,
	input wire reset,
	input wire enable,
	
	input reg [2:0] core_state //current execution state from scheduler and only compute when in EXECUTE state
	
	input reg [2:0] opreation_mux // currently: 000:ADD, 001 SUB, 010: MUL, 011: DIV
																// 100: CMP, 101 FMA
			
	input reg fma_flag          // FMA flag, use FMA ooperaiton when high 
	
	input reg [DATA_BITS-1:0] rs, //first operand from the register file
	input reg [DATA_BITS-1:0] rt, // second operand from the register file
	input reg [DATA_BITS-1:0] rc, // the third operand for FMA
	
	output wire [DATA_BITS-1:0] alu_out //Result of computation 
);

endmodule
