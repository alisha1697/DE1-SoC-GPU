module gpu_mem_master(
    input  logic        clk,
    input  logic        reset,

    // Avalon-MM master outputs
    output logic [31:0] avm_address,
    output logic        avm_read,
    output logic        avm_write,
    output logic [31:0] avm_writedata,
    output logic [3:0]  avm_byteenable,

    // Avalon-MM master inputs
    input  logic [31:0] avm_readdata,
    input  logic        avm_waitrequest,
    input  logic        avm_readdatavalid
);


	SDRAM u0 (
		.clk_clk                     (<connected-to-clk_clk>),                     //                   clk.clk
		.reset_reset_n               (<connected-to-reset_reset_n>),               //                 reset.reset_n
		.sdram_controller_wire_addr  (<connected-to-sdram_controller_wire_addr>),  // sdram_controller_wire.addr
		.sdram_controller_wire_ba    (<connected-to-sdram_controller_wire_ba>),    //                      .ba
		.sdram_controller_wire_cas_n (<connected-to-sdram_controller_wire_cas_n>), //                      .cas_n
		.sdram_controller_wire_cke   (<connected-to-sdram_controller_wire_cke>),   //                      .cke
		.sdram_controller_wire_cs_n  (<connected-to-sdram_controller_wire_cs_n>),  //                      .cs_n
		.sdram_controller_wire_dq    (<connected-to-sdram_controller_wire_dq>),    //                      .dq
		.sdram_controller_wire_dqm   (<connected-to-sdram_controller_wire_dqm>),   //                      .dqm
		.sdram_controller_wire_ras_n (<connected-to-sdram_controller_wire_ras_n>), //                      .ras_n
		.sdram_controller_wire_we_n  (<connected-to-sdram_controller_wire_we_n>),  //                      .we_n
		.sdram_clk_clk               (<connected-to-sdram_clk_clk>)                //             sdram_clk.clk
	);




endmodule