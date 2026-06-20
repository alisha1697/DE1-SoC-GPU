`timescale 1ns/1ps

// =============================================================================
// scheduler_tb.sv
//
// Self-checking testbench for rtl/scheduler.sv (fixed BRAM latency, no handshake).
//
// Tests:
//   1. Single block:        N=3, thread_count=2
//   2. Multi-block re-entry from DONE (no reset)
//   3. Partial block:       N=3, thread_count=1  (only one thread active)
//   4. Edge case N=1:       N=1, thread_count=1
//   5. BRAM_LATENCY=2:      separate DUT instance, verifies extra WAIT cycles
// =============================================================================

module scheduler_tb;

    localparam THREADS_PER_CORE = 2;
    localparam BRAM_LATENCY     = 1;
    localparam TSEL             = (THREADS_PER_CORE == 1) ? 1 : $clog2(THREADS_PER_CORE);

    localparam [3:0] ST_WAIT = 4'b0010;
    localparam [3:0] ST_FMA  = 4'b0011;

    logic clk;
    logic rst;
    logic start;
    logic [7:0] N;
    logic [7:0] thread_count;

    logic [TSEL-1:0]             t_select;
    logic [THREADS_PER_CORE-1:0] data_valid;
    logic [THREADS_PER_CORE-1:0] fma_en;
    logic [7:0]                  k;
    logic                        mem_write_en;
    logic                        kernel_init;
    logic [3:0]                  fsm_state;
    logic                        done;

    int fma_count;
    int write_count;
    int kernel_init_count;
    int expected_t;
    int expected_k;
    int errors;

    // Second instance for BRAM_LATENCY > 1 (compile-time parameter)
    localparam BRAM_LATENCY2 = 2;

    logic                        rst_lat2;
    logic                        start_lat2;
    logic [7:0]                  N_lat2;
    logic [7:0]                  thread_count_lat2;
    logic [TSEL-1:0]             t_select_lat2;
    logic [THREADS_PER_CORE-1:0] data_valid_lat2;
    logic [THREADS_PER_CORE-1:0] fma_en_lat2;
    logic [7:0]                  k_lat2;
    logic                        mem_write_en_lat2;
    logic                        kernel_init_lat2;
    logic [3:0]                  fsm_state_lat2;
    logic                        done_lat2;

    int fma_count_lat2;
    int write_count_lat2;
    int kernel_init_count_lat2;
    int expected_t_lat2;
    int expected_k_lat2;
    int wait_cycles_lat2;
    int wait_run_lat2;
    logic [3:0] prev_state_lat2;

    scheduler #(
        .THREADS_PER_CORE (THREADS_PER_CORE),
        .BRAM_LATENCY     (BRAM_LATENCY)
    ) dut (
        .clk          (clk),
        .rst          (rst),
        .start        (start),
        .N            (N),
        .thread_count (thread_count),
        .t_select     (t_select),
        .data_valid   (data_valid),
        .fma_en       (fma_en),
        .k            (k),
        .mem_write_en (mem_write_en),
        .kernel_init  (kernel_init),
        .state        (fsm_state),
        .done         (done)
    );

    scheduler #(
        .THREADS_PER_CORE (THREADS_PER_CORE),
        .BRAM_LATENCY     (BRAM_LATENCY2)
    ) dut_lat2 (
        .clk          (clk),
        .rst          (rst_lat2),
        .start        (start_lat2),
        .N            (N_lat2),
        .thread_count (thread_count_lat2),
        .t_select     (t_select_lat2),
        .data_valid   (data_valid_lat2),
        .fma_en       (fma_en_lat2),
        .k            (k_lat2),
        .mem_write_en (mem_write_en_lat2),
        .kernel_init  (kernel_init_lat2),
        .state        (fsm_state_lat2),
        .done         (done_lat2)
    );

    always #5 clk = ~clk;

    task automatic reset_counters;
        fma_count         = 0;
        write_count       = 0;
        kernel_init_count = 0;
        expected_t        = 0;
        expected_k        = 0;
    endtask

    task automatic reset_counters_lat2;
        fma_count_lat2         = 0;
        write_count_lat2       = 0;
        kernel_init_count_lat2 = 0;
        expected_t_lat2        = 0;
        expected_k_lat2        = 0;
        wait_cycles_lat2       = 0;
        wait_run_lat2          = 0;
        prev_state_lat2        = ST_WAIT;
    endtask

    task automatic pulse_start;
        @(posedge clk);
        start = 1;
        @(posedge clk);
        start = 0;
    endtask

    task automatic pulse_start_lat2;
        @(posedge clk);
        start_lat2 = 1;
        @(posedge clk);
        start_lat2 = 0;
    endtask

    // Monitor primary DUT
    always @(posedge clk) begin
        if (!rst) begin
            if (kernel_init)
                kernel_init_count++;

            if (fma_en != '0) begin
                if (fma_en !== data_valid)
                    $error("fma_en and data_valid mismatch. fma_en=%b data_valid=%b",
                           fma_en, data_valid);

                if (t_select != expected_t[TSEL-1:0])
                    $error("Expected thread %0d, got %0d", expected_t, t_select);

                if (k != expected_k[7:0])
                    $error("Expected k %0d, got %0d", expected_k, k);

                if (!fma_en[t_select] || !data_valid[t_select])
                    $error("Selected thread did not get fma_en/data_valid");

                fma_count++;

                if (expected_t == int'(thread_count) - 1) begin
                    expected_t = 0;
                    expected_k++;
                end else begin
                    expected_t++;
                end
            end

            if (mem_write_en)
                write_count++;

            if (mem_write_en && (fma_en != '0))
                $error("mem_write_en and fma_en were high in the same cycle");
        end
    end

    // Monitor latency-2 DUT (includes WAIT-cycle stretch check)
    always @(posedge clk) begin
        if (!rst_lat2) begin
            if (kernel_init_lat2)
                kernel_init_count_lat2++;

            if (fsm_state_lat2 == ST_WAIT)
                wait_run_lat2++;

            if (prev_state_lat2 == ST_WAIT && fsm_state_lat2 == ST_FMA) begin
                if (wait_run_lat2 != BRAM_LATENCY2) begin
                    $error("BRAM_LATENCY=2: expected %0d WAIT cycles, got %0d",
                           BRAM_LATENCY2, wait_run_lat2);
                    errors++;
                end
                wait_cycles_lat2 += wait_run_lat2;
                wait_run_lat2 = 0;
            end

            if (fsm_state_lat2 != ST_WAIT)
                wait_run_lat2 = 0;

            prev_state_lat2 = fsm_state_lat2;

            if (fma_en_lat2 != '0) begin
                if (t_select_lat2 != expected_t_lat2[TSEL-1:0])
                    $error("[lat2] Expected thread %0d, got %0d", expected_t_lat2, t_select_lat2);

                if (k_lat2 != expected_k_lat2[7:0])
                    $error("[lat2] Expected k %0d, got %0d", expected_k_lat2, k_lat2);

                fma_count_lat2++;

                if (expected_t_lat2 == int'(thread_count_lat2) - 1) begin
                    expected_t_lat2 = 0;
                    expected_k_lat2++;
                end else begin
                    expected_t_lat2++;
                end
            end

            if (mem_write_en_lat2)
                write_count_lat2++;
        end
    end

    task automatic check_block_counts(
        input string label,
        input int    test_N,
        input int    test_tc,
        input int    expect_kernel_init
    );
        if (fma_count != test_N * test_tc) begin
            $error("%s: wrong FMA count. Expected %0d, got %0d",
                   label, test_N * test_tc, fma_count);
            errors++;
        end

        if (write_count != test_tc) begin
            $error("%s: wrong write count. Expected %0d, got %0d",
                   label, test_tc, write_count);
            errors++;
        end

        if (kernel_init_count != expect_kernel_init) begin
            $error("%s: wrong kernel_init count. Expected %0d, got %0d",
                   label, expect_kernel_init, kernel_init_count);
            errors++;
        end
    endtask

    task automatic check_block_counts_lat2(
        input string label,
        input int    test_N,
        input int    test_tc,
        input int    expect_kernel_init
    );
        if (fma_count_lat2 != test_N * test_tc) begin
            $error("%s: wrong FMA count. Expected %0d, got %0d",
                   label, test_N * test_tc, fma_count_lat2);
            errors++;
        end

        if (write_count_lat2 != test_tc) begin
            $error("%s: wrong write count. Expected %0d, got %0d",
                   label, test_tc, write_count_lat2);
            errors++;
        end

        if (kernel_init_count_lat2 != expect_kernel_init) begin
            $error("%s: wrong kernel_init count. Expected %0d, got %0d",
                   label, expect_kernel_init, kernel_init_count_lat2);
            errors++;
        end

        if (wait_cycles_lat2 != (test_N * test_tc * BRAM_LATENCY2)) begin
            $error("%s: wrong total WAIT cycles. Expected %0d, got %0d",
                   label, test_N * test_tc * BRAM_LATENCY2, wait_cycles_lat2);
            errors++;
        end
    endtask

    task automatic run_kernel(
        input string label,
        input int    test_N,
        input int    test_tc,
        input int    expect_kernel_init
    );
        N            = test_N[7:0];
        thread_count = test_tc[7:0];
        reset_counters;
        pulse_start;
        wait (done);
        @(posedge clk);
        check_block_counts(label, test_N, test_tc, expect_kernel_init);
    endtask

    initial begin
        clk          = 0;
        rst          = 1;
        start        = 0;
        N            = 8'd3;
        thread_count = 8'd2;
        errors       = 0;

        rst_lat2          = 1;
        start_lat2        = 0;
        N_lat2            = 8'd2;
        thread_count_lat2 = 8'd2;

        reset_counters;
        reset_counters_lat2;

        repeat (2) @(posedge clk);
        rst = 0;

        // Test 1: single block
        run_kernel("single block", 3, 2, 1);

        // Test 2: multi-block re-entry from DONE (no reset)
        run_kernel("multi-block re-entry", 3, 2, 1);

        // Test 3: partial block — only 1 of 2 hardware threads used
        run_kernel("partial block (thread_count=1)", 3, 1, 1);

        // Test 4: N=1 edge case — single FMA, single write
        run_kernel("N=1 edge case", 1, 1, 1);

        // Test 5: BRAM_LATENCY=2 on separate DUT instance
        rst_lat2 = 0;
        @(posedge clk);
        reset_counters_lat2;
        pulse_start_lat2;
        wait (done_lat2);
        @(posedge clk);
        check_block_counts_lat2("BRAM_LATENCY=2", 2, 2, 1);

        if (errors == 0)
            $display("PASS: scheduler test passed (5 cases)");
        else
            $error("FAIL: scheduler test failed with %0d errors", errors);

        $finish;
    end

endmodule
