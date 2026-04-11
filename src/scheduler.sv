// Scheduler: FSM controlling execution flow (IDLE -> INIT -> LOAD <-> COMPUTE -> WRITE -> DONE)
module scheduler #(
    parameter DATA_WIDTH      = 16,
    parameter ADDR_WIDTH      = 16,
    parameter THREADS_PER_CORE = 2
)(
    input logic clk, rst, start,
    input logic [7:0] N,
    input logic [15:0] thread_count, //comes from dispatcher

    // Memory read handshake
    input logic mem_read_ready,
    input logic [DATA_WIDTH-1:0] mem_read_data,
    output logic mem_read_valid,
    output logic [ADDR_WIDTH-1:0] mem_read_addr,

    // Memory write handshake
    input logic mem_write_ready,
    output logic mem_write_valid,
    output logic [ADDR_WIDTH-1:0] mem_write_addr, mem_write_data,

    // Thread control
    output logic fma_en,
    output logic [2:0] state,
    output logic [7:0] k,

    // Thread data handshake
    output logic thread_valid,
    input logic thread_ready,

    output logic done
);
    // Instantiates: none

endmodule
