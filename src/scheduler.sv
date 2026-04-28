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

    localparam IDLE = 3'b000;
               INIT = 3'b001;
               LOAD = 3'b010;
               COMPUTE = 3'b011;
               WRITE = 3'b100;
               write = 3'b101;
    logic [7:0] k_counter;
    logic [1:0] phase; // 0=A, 1 = B for loading

    always @(posedge clk) begin
        if (rst) begin 
            state <= IDLE;
            done <= 0;
            k <= 0;
            k_counter <= 0;
            thread_valid <= 0;
            mem_read_valid <= 0;
            mem_write_valid <= 0;
            phrase <=0;
        end
        case (state) 
            //wait for start signal then initialize computation
            IDLE: begin
                if (start) begin   
                    state <= INIT;
                    k_counter <= 0;
                    k <= 0;
                end 
            end
            // activates threads, prepares for first load operation
            INIT: begin 
                thread_valid <= 1;
                fma_en <= 0;
                state <= LOAD;
                phase <= 0;
            end

            // requests memory read for either A or B matrix elements
            LOAD: begin
                memn_read_valid <= 1;
                state <= COMPUTE;
            end

            //waits for memory data, triggers fma and managesphase and k loops
            COMPUTE: begin 
                mem_read_valid <= 0;
                
                if(mem_read_ready) begin
                    fma_en <= 1;
                    state <= LOAD;

                    if(phase == 0) begin  
                        phase <= 1;
                    end else begin 
                        phase <= 0;
                        k_counter <= k_counter + 1;
                        k <= k_counter + 1;

                        if(k_counter == N - 1) begin
                            state <= WRITE;
                        end 
                    end 
                end 
            end
            

            //
                WRITE: begin  
                    thread_valid <= 0;  
                    fma_en <= 0;  
                    mem_write_valid <= 1;  
                      
                    if (mem_write_ready) begin  
                        mem_write_valid <= 0;  
                        state <= DONE_S;  
                    end  
                end  
                
             DONE_S: begin  
                    done <= 1;  
                end  
            endcase
        end
    end   
    
endmodule