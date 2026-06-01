`timescale 1ns/1ps

module thread_tb;

    // DUT signals
    logic         clk, rst, en;
    logic [7:0]   N, k;
    logic [15:0]  thread_id;
    logic [15:0]  base_addr_A, base_addr_B, base_addr_C;
    logic         data_valid;
    logic [15:0]  a_val, b_val;
    logic         data_ready;
    logic [15:0]  addr_A, addr_B, addr_C;
    logic [15:0]  result;

    // Memory model (simulated BRAM for A and B) ────────
    logic [15:0]  mem_A [0:255];
    logic [15:0]  mem_B [0:255];

    //Test bookkeeping
    int           errors = 0;
    int           test_count = 0;
    logic [15:0]  expected;

    //DUT
    thread #(
        .DATA_WIDTH (16),
        .ADDR_WIDTH (16)
    ) dut (
        .clk         (clk),
        .rst         (rst),
        .en          (en),
        .N           (N),
        .k           (k),
        .thread_id   (thread_id),
        .base_addr_A (base_addr_A),
        .base_addr_B (base_addr_B),
        .base_addr_C (base_addr_C),
        .data_valid  (data_valid),
        .a_val       (a_val),
        .b_val       (b_val),
        .data_ready  (data_ready),
        .addr_A      (addr_A),
        .addr_B      (addr_B),
        .addr_C      (addr_C),
        .result      (result)
    );



    // ─Memory responds combinationally to whatever address
    //    the thread asks for. This is the key trick — the
    //    thread's address-gen logic gets exercised because
    //    a_val/b_val depend on the addresses it produces.
    always_comb begin
        a_val = mem_A[addr_A[7:0]];
        b_val = mem_B[addr_B[7:0]];
    end

    // Initialize memory 
    initial begin
        for (int i = 0; i < 256; i++) begin
            mem_A[i] = i + 1;          // 1, 2, 3, ...
            mem_B[i] = (i + 1) * 2;    // 2, 4, 6, ...
        end
    end

    // Clock 
    initial begin
        clk = 0;
        forever #5 clk = ~clk;          // 100 MHz
    end


    // Golden reference
    function automatic logic [15:0] compute_golden(
        input int row, col, NN
    );
        logic [15:0] acc = 0;
        for (int kk = 0; kk < NN; kk++)
            acc += mem_A[row * NN + kk] * mem_B[kk * NN + col];
        return acc;
    endfunction

    // The test task
    task automatic run_test(
        input int test_thread_id,
        input int test_N
    );
        int row, col;

        test_count++;
        row = test_thread_id / test_N;
        col = test_thread_id % test_N;
        expected = compute_golden(row, col, test_N);

        $display("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d",
                 test_count, test_thread_id, test_N, row, col, expected);

        // Reset to a known state
        rst         = 1;
        en          = 0;
        data_valid  = 0;
        N           = test_N[7:0];
        thread_id   = test_thread_id[15:0];
        base_addr_A = 16'h0000;
        base_addr_B = 16'h0000;
        base_addr_C = 16'h0000;
        k           = 0;
        repeat (3) @(posedge clk);
        rst = 0;
        en  = 1;
        @(posedge clk);

        // Drive k = 0..N-1, pulse data_valid each iteration
        for (int kk = 0; kk < test_N; kk++) begin
            k = kk[7:0];
            @(posedge clk);  // let addresses propagate

            // Per-cycle address checks
            if (addr_A !== row * test_N + kk) begin
                $error("addr_A wrong at k=%0d: expected %0d, got %0d",
                       kk, row * test_N + kk, addr_A);
                errors++;
            end
            if (addr_B !== kk * test_N + col) begin
                $error("addr_B wrong at k=%0d: expected %0d, got %0d",
                       kk, kk * test_N + col, addr_B);
                errors++;
            end

            data_valid = 1;
            @(posedge clk);
            data_valid = 0;
            @(posedge clk);  // give the FMA a cycle to settle
        end

        // Final settle — wait for any pipeline residue
        repeat (5) @(posedge clk);

        // Result check
        if (result !== expected) begin
            $error("  result wrong: expected %0d, got %0d", expected, result);
            errors++;
        end 

        // Final addr_C check
        if (addr_C !== row * test_N + col) begin
            $error("addr_C wrong: expected %0d, got %0d",
                   row * test_N + col, addr_C);
            errors++;
        end

        en = 0;
    endtask

    //Test list 
    initial begin
        #20;   // settle tb 

        // Standard 4x4 case
        run_test( 0, 4);   // (row,col)=(0,0)
        run_test( 5, 4);   // (row,col)=(1,1)
        run_test(15, 4);   // (row,col)=(3,3) 

        // Standard 2x2 cases
        run_test( 0, 2);   // (row,col)=(0,0)
        run_test( 3, 2);   // (row,col)=(1,1)

        // Edge case: N=1 (1x1 matmul, single FMA)
        run_test( 0, 1);

        // Asymmetric: thread on the right edge of a 4x4
        run_test( 3, 4);   // (row,col)=(0,3) — uses last column of B

        $display("\n══════════════════════════════════════════");
        if (errors == 0) $display(" ALL %0d TESTS PASSED", test_count);
        else             $display(" FAIL: %0d errors across %0d tests", errors, test_count);
        $display("══════════════════════════════════════════");
        $finish;
    end

endmodule