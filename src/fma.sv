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

// want to computer result = (a * b) + c in a 2-stage pipeline with handshake signals for flow control.

	logic [DATA_WIDTH-1:0] product_reg;
	logic [DATA_WIDTH-1:0] c_reg;
	logic valid_stage1, valid stage2;

	logic [(2*DATA_WIDTH)-1:0] product; // 32 bits register for mul

	//1. MUL
	always@(posedge clk) begin
		if(rst) begin
			product_reg <= '0;
			c_reg <= '0;
			valid_stage1 <= 0;
		end else if (ready) begin 
			product_reg <= (a * b) >>> (DATA_WIDTH / 2);
			c_reg <= c;
			valid_stage1 <= valid_in;
		end
	end



	always @(posedge clk) begin
		if(rst) begin
			result <= '0;
			valid_out <= 0;
			valid_stage2 <= 0;
		end else begin
			result <= product_reg + c_reg;
			valid_stage2 <= valid_stage1; 
			valid_out <= valid_stage2; 
		end 
	end

	assign ready = 1;


endmodule
