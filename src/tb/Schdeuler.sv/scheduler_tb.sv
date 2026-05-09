`timescale 1ns/1ps

module scheduler_tb;

    // Parameters
    parameter THREADS_PER_CORE = 2;
    parameter TSEL = (THREADS_PER_CORE == 1) ? 1 : $clog2(THREADS_PER_CORE);

    // Testbench signals
    logic clk;
    logic rst;
    logic start;
    logic [7:0] N;
    logic [7:0] thread_count;

    logic [TSEL-1:0] t_select;
    logic [THREADS_PER_CORE-1:0] data_valid;
    logic [THREADS_PER_CORE-1:0] fma_en;
    logic [7:0] k;
    logic mem_write_en;
    logic [3:0] fsm_state;
    logic done;

    // Self-checking counters / expected values
    int fma_count;
    int write_count;
    int expected_t;
    int expected_k;

    // Instantiate the scheduler
    scheduler #(
        .THREADS_PER_CORE(THREADS_PER_CORE)
    ) dut (
        .clk(clk),
        .rst(rst),
        .start(start),
        .N(N),
        .thread_count(thread_count),
        .t_select(t_select),
        .data_valid(data_valid),
        .fma_en(fma_en),
        .k(k),
        .mem_write_en(mem_write_en),
        .state(fsm_state),
        .done(done)
    );

    // Clock generation
    always #5 clk = ~clk;

    initial begin
        // Initialize signals
        clk = 0;
        rst = 1;
        start = 0;

        N = 8'd3;
        thread_count = 8'd2;

        fma_count = 0;
        write_count = 0;
        expected_t = 0;
        expected_k = 0;

        // Hold reset for 2 clock cycles
        repeat (2) @(posedge clk);
        rst = 0;

        // Pulse start for 1 clock cycle
        @(posedge clk);
        start = 1;

        @(posedge clk);
        start = 0;

        // Wait for scheduler to finish
        wait(done);

        // Final checks after done
        assert(fma_count == N * thread_count)
        else $error("Wrong number of FMA pulses. Expected %0d, got %0d",
                    N * thread_count, fma_count);

        assert(write_count == thread_count)
        else $error("Wrong number of writes. Expected %0d, got %0d",
                    thread_count, write_count);

        if ((fma_count == N * thread_count) && (write_count == thread_count)) begin
            $display("PASS: scheduler test passed");
        end

        
    end

    // Monitor/check DUT behavior every clock
    always @(posedge clk) begin
        if (!rst) begin

            // Check FMA event
            if (fma_en != '0) begin

                assert(fma_en == data_valid)
                else $error("fma_en and data_valid mismatch. fma_en=%b data_valid=%b",
                            fma_en, data_valid);

                assert(t_select == expected_t[TSEL-1:0])
                else $error("Expected thread %0d, got %0d",
                            expected_t, t_select);

                assert(k == expected_k[7:0])
                else $error("Expected k %0d, got %0d",
                            expected_k, k);

                assert(fma_en[t_select] == 1'b1)
                else $error("Selected thread did not get fma_en");

                assert(data_valid[t_select] == 1'b1)
                else $error("Selected thread did not get data_valid");

                fma_count++;

                // Advance expected thread/k model
                if (expected_t == thread_count - 1) begin
                    expected_t = 0;
                    expected_k++;
                end else begin
                    expected_t++;
                end
            end

            // Check WRITE event
            if (mem_write_en) begin
                write_count++;
            end

            // FMA and write should not happen in same cycle
            assert(!(mem_write_en && (fma_en != '0)))
            else $error("mem_write_en and fma_en were high in the same cycle");
        end
    end

endmodule