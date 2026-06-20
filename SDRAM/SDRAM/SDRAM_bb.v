
module SDRAM (
	clk_clk,
	gpu_mem_master_0_debug_test_pass,
	gpu_mem_master_0_debug_test_fail,
	gpu_mem_master_0_debug_state_debug,
	gpu_mem_master_0_debug_readback_debug,
	reset_reset_n,
	sdram_clk_clk,
	sdram_controller_wire_addr,
	sdram_controller_wire_ba,
	sdram_controller_wire_cas_n,
	sdram_controller_wire_cke,
	sdram_controller_wire_cs_n,
	sdram_controller_wire_dq,
	sdram_controller_wire_dqm,
	sdram_controller_wire_ras_n,
	sdram_controller_wire_we_n);	

	input		clk_clk;
	output		gpu_mem_master_0_debug_test_pass;
	output		gpu_mem_master_0_debug_test_fail;
	output	[3:0]	gpu_mem_master_0_debug_state_debug;
	output	[31:0]	gpu_mem_master_0_debug_readback_debug;
	input		reset_reset_n;
	output		sdram_clk_clk;
	output	[12:0]	sdram_controller_wire_addr;
	output	[1:0]	sdram_controller_wire_ba;
	output		sdram_controller_wire_cas_n;
	output		sdram_controller_wire_cke;
	output		sdram_controller_wire_cs_n;
	inout	[15:0]	sdram_controller_wire_dq;
	output	[1:0]	sdram_controller_wire_dqm;
	output		sdram_controller_wire_ras_n;
	output		sdram_controller_wire_we_n;
endmodule
