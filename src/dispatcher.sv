// Dispatcher: splits N^2 total threads across cores, assigns starting thread IDs and counts [figures out which thread go to which core, issues these waves]
module dispatcher #(
    parameter NUM_CORES        = 2,
    parameter THREADS_PER_CORE = 2
)(
    input logic clk, rst, start,
    input logic [7:0] N,
    input logic [NUM_CORES-1:0] core_done, core_ready,

    output logic [NUM_CORES-1:0] core_valid, core_start,
    output logic [15:0] core_thread_id_start [NUM_CORES-1:0], core_thread_count [NUM_CORES-1:0],
    
    output logic done
);
    // Instantiates: none

endmodule
