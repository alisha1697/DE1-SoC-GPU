
module decoder (
    input wire clk,
    input wire reset,

    input reg [2:0] core_state,
    input reg [15:0] instruction,
    
    output reg [3:0] decoded_rd_address,
    output reg [3:0] decoded_rs_address,
    output reg [3:0] decoded_rt_address,
    output reg [2:0] decoded_nzp,
    output reg [7:0] decoded_immediate,
   
    output reg decoded_reg_write_enable,           // Enable writing to a register
    output reg [1:0] decoded_reg_input_mux,        // Select input to register

    //register control ignals
    output reg decoded_mem_read_enable,            // Enable reading from memory
    output reg decoded_mem_write_enable,           // Enable writing to memory
    output reg [1:0] decoded_alu_arithmetic_mux,   // Select arithmetic operation
    output reg decoded_alu_output_mux,             // Select operation in ALU
 
    output reg decoded_nzp_write_enable,           // Enable writing to NZP register
    output reg decoded_pc_mux,                     // Select source of next PC

    output reg decoded_ret
);

endmodule