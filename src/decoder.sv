
module decoder (
    input  wire        clk,  
    input  wire        reset,  
    input  reg  [2:0]  core_state,  
    input  reg  [15:0] instruction,  
      
    // Instruction fields (no decoded_rc_address needed)  
    output reg  [3:0]  decoded_rd_address,  
    output reg  [3:0]  decoded_rs_address,  
    output reg  [3:0]  decoded_rt_address,  
    output reg  [2:0]  decoded_nzp,  
    output reg  [7:0]  decoded_immediate,  
      
    // Control signals (back to 2-bit ALU mux)  
    output reg         decoded_reg_write_enable,  
    output reg  [1:0]  decoded_reg_input_mux,  
    output reg         decoded_mem_read_enable,  
    output reg         decoded_mem_write_enable,  
    output reg  [1:0]  decoded_alu_arithmetic_mux,  // Back to 2 bits  
    output reg         decoded_alu_output_mux,  
    output reg         decoded_nzp_write_enable,  
    output reg         decoded_pc_mux,  
    output reg         decoded_ret 
);

    localparam      NOP = 4'b0000, 
                    brnzp = 4'b0001,
                    CMP = 4'b0010,
                    ADD = 4'b0011,
                    SUB = 4'b0100,
                    MUL = 4'b0101,
                    DIV = 4'b0110,
                    LDR = 4'b0111,
                    STR = 4'b1000,
                    CONST = 4'b1001,
                    FMA = 4'b1010,
                    RET = 4'b1111;
    

    

endmodule