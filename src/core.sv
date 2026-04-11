// Core: executes a block of threads with a shared scheduler and memory bus
module core #(
    parameter DATA_WIDTH      = 16,
    parameter ADDR_WIDTH      = 16,
    parameter THREADS_PER_CORE = 2
)(
    input logic clk, rst, start, dispatch_valid, //dispatcher valid is core_valid from dispatcher
    input logic [7:0] N,
    input logic [15:0] thread_id_start, thread_count, //comes from dispatcher
    input logic [ADDR_WIDTH-1:0] base_addr_A, base_addr_B, base_addr_C,

    output logic dispatch_ready, done, //dispatcher ready and one is core_ready to dispatcher

    // Memory read bus (valid/ready handshake)
    input logic mem_read_ready,
    input logic [DATA_WIDTH-1:0] mem_read_data,

    output logic mem_read_valid,
    output logic [ADDR_WIDTH-1:0] mem_read_addr,
    
    // Memory write bus (valid/ready handshake)
    input logic mem_write_ready, //

    output logic mem_write_valid,
    output logic [ADDR_WIDTH-1:0] mem_write_addr, mem_write_data
);
    // Instantiates: 1x scheduler, THREADS_PER_CORE x thread

endmodule
