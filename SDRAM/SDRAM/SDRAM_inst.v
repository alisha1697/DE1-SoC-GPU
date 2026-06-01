	SDRAM u0 (
		.clk_clk                               (<connected-to-clk_clk>),                               //                    clk.clk
		.gpu_mem_master_0_debug_test_pass      (<connected-to-gpu_mem_master_0_debug_test_pass>),      // gpu_mem_master_0_debug.test_pass
		.gpu_mem_master_0_debug_test_fail      (<connected-to-gpu_mem_master_0_debug_test_fail>),      //                       .test_fail
		.gpu_mem_master_0_debug_state_debug    (<connected-to-gpu_mem_master_0_debug_state_debug>),    //                       .state_debug
		.gpu_mem_master_0_debug_readback_debug (<connected-to-gpu_mem_master_0_debug_readback_debug>), //                       .readback_debug
		.reset_reset_n                         (<connected-to-reset_reset_n>),                         //                  reset.reset_n
		.sdram_clk_clk                         (<connected-to-sdram_clk_clk>),                         //              sdram_clk.clk
		.sdram_controller_wire_addr            (<connected-to-sdram_controller_wire_addr>),            //  sdram_controller_wire.addr
		.sdram_controller_wire_ba              (<connected-to-sdram_controller_wire_ba>),              //                       .ba
		.sdram_controller_wire_cas_n           (<connected-to-sdram_controller_wire_cas_n>),           //                       .cas_n
		.sdram_controller_wire_cke             (<connected-to-sdram_controller_wire_cke>),             //                       .cke
		.sdram_controller_wire_cs_n            (<connected-to-sdram_controller_wire_cs_n>),            //                       .cs_n
		.sdram_controller_wire_dq              (<connected-to-sdram_controller_wire_dq>),              //                       .dq
		.sdram_controller_wire_dqm             (<connected-to-sdram_controller_wire_dqm>),             //                       .dqm
		.sdram_controller_wire_ras_n           (<connected-to-sdram_controller_wire_ras_n>),           //                       .ras_n
		.sdram_controller_wire_we_n            (<connected-to-sdram_controller_wire_we_n>)             //                       .we_n
	);

