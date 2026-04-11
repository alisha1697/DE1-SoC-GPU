module registers # (
		parameter THREADS_PER_BLOCK = 4,
		parameter THREAD_ID = 0,
		parameter DATA_BITS = 8
		

) (
		input wire clk,
		input wire reset,
		input wire enable
		
		input reg[7:0] block_id,
		input reg[2:0] core_state,
		
		input reg[3:0] decoded_rd_address, 
		input reg[3:0] decoded_rs_address, 
		input reg[3:0] decoded_rt_address, 
		input reg[3:0] decoded_rc_address,  // for FMA
		
	  input reg decoded_reg_write_enable, 
	  input reg [1:0] decoded_reg_input_mux
	  input reg [DATA_BITS-1:0] decoded_immediate,
	  
	  input reg [DATA_BITS-1:0] alu_out, //Result from ALU and FMA
	  input reg [DATA_BITS-1:0] lsu_out, 
	  
	  output reg [DATA_BITS-1:0] rs,
	  output reg [DATA_BITS-1:0] rt,
	  output reg [DATA_BITS-1:0] rc, //FMA support
		
);

endmodule