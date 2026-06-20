`timescale 1ns/1ps

module Core_tb;

    // Testbench Parameters
    localparam DATA_WIDTH       = 16;
    localparam ADDR_WIDTH       = 16;
    localparam THREADS_PER_CORE = 4;

    //DUT signals
    logic                       clk, rst;
    logic                       valid, ready, start;
    logic [15:0]                thread_id_start;
    logic [7:0]                 thread_count;
    logic [7:0]                 N;
    logic [ADDR_WIDTH-1:0]      base_addr_A, base_addr_B, base_addr_C;
    logic [ADDR_WIDTH-1:0]      addr_A_out, addr_B_out, addr_C_out;
    logic [DATA_WIDTH-1:0]      wdata_C;
    logic                       we_C;
    logic [DATA_WIDTH-1:0]      matrix_a_data, matrix_b_data;
    logic                       done;

    // read-back from MATRIX_C
    logic [DATA_WIDTH-1:0]      matrix_c_q;

    // Clock
    initial begin
        clk = 0;
        forever #5 clk = ~clk;     // 100 MHz
    end

    // Input (Qualtus IP) memories
    MATRIX_A matrixA_inst (
        .address (addr_A_out[7:0]),
        .clock   (clk),
        .q       (matrix_a_data)
    );

    MATRIX_B matrixB_inst (
        .address (addr_B_out[7:0]),
        .clock   (clk),
        .q       (matrix_b_data)
    );


    // Output (Quartus IP) memory
    MATRIX_C matrixC_inst (
        .address (addr_C_out[7:0]),
        .clock   (clk),
        .data    (wdata_C),
        .wren    (we_C),
        .q       (matrix_c_q)
    );

    //DUT instance
    core #(
        .DATA_WIDTH       (DATA_WIDTH),
        .ADDR_WIDTH       (ADDR_WIDTH),
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) dut (
        .clk             (clk),
        .rst             (rst),
        .valid           (valid),
        .ready           (ready),
        .start           (start),
        .thread_id_start (thread_id_start),
        .thread_count    (thread_count),
        .N               (N),
        .base_addr_A     (base_addr_A),
        .base_addr_B     (base_addr_B),
        .base_addr_C     (base_addr_C),
        .addr_A_out      (addr_A_out),
        .matrix_a_data   (matrix_a_data),
        .addr_B_out      (addr_B_out),
        .matrix_b_data   (matrix_b_data),
        .addr_C_out      (addr_C_out),
        .wdata_C_out     (wdata_C),
        .we_C            (we_C),
        .done            (done)
    );


    // These MUST match the .mif file contents exactly. The Quartus IPs
    // read from the .mif; we read from these mirrors for compute_golden and we compare the results.
    logic [DATA_WIDTH-1:0] mem_A_mirror [0:255];
    logic [DATA_WIDTH-1:0] mem_B_mirror [0:255];

    initial begin
        // matrixA.mif contents: 1, 2, 3, ..., 16 in first 16 slots, rest = 0
        for (int i = 0; i < 16; i++)  mem_A_mirror[i] = i + 1;
        for (int i = 16; i < 256; i++) mem_A_mirror[i] = 0;

        // matrixB.mif contents (from your .mif file)
        mem_B_mirror[ 0] = 16'h0001; mem_B_mirror[ 1] = 16'h0002;
        mem_B_mirror[ 2] = 16'h0000; mem_B_mirror[ 3] = 16'h0001;
        mem_B_mirror[ 4] = 16'h0000; mem_B_mirror[ 5] = 16'h0001;
        mem_B_mirror[ 6] = 16'h0002; mem_B_mirror[ 7] = 16'h0000;
        mem_B_mirror[ 8] = 16'h0001; mem_B_mirror[ 9] = 16'h0000;
        mem_B_mirror[10] = 16'h0001; mem_B_mirror[11] = 16'h0002;
        mem_B_mirror[12] = 16'h0002; mem_B_mirror[13] = 16'h0001;
        mem_B_mirror[14] = 16'h0000; mem_B_mirror[15] = 16'h0001;
        for (int i = 16; i < 256; i++) mem_B_mirror[i] = 0;
    end
    
    int errors     = 0;
    int test_count = 0;
    int writes_observed = 0;

    // Golden reference 
    function automatic logic [DATA_WIDTH-1:0] compute_golden(
        input int row, col, NN
    );
        logic [DATA_WIDTH-1:0] acc = 0;
        for (int k = 0; k < NN; k++)
            acc += mem_A_mirror[row*NN + k] * mem_B_mirror[k*NN + col];
        return acc;
    endfunction

    // Concurrent assertions
    property p_handshake_legitimacy;
        @(posedge clk) disable iff (rst)
            $rose(start) |-> $past(valid && ready, 1);
    endproperty
    a_handshake: assert property (p_handshake_legitimacy)
        else $error("start fired without prior valid&ready handshake");

    property p_reset_clears_done;
        @(posedge clk) rst |=> !done;
    endproperty
    a_reset_done: assert property (p_reset_clears_done)
        else $error("done not cleared after reset");

    property p_start_eventually_done;
        @(posedge clk) disable iff (rst)
            $rose(start) |-> ##[1:10000] $rose(done);
    endproperty
    a_start_done: assert property (p_start_eventually_done)
        else $error("After start, done never fired");

    // covergroup removed (requires QuestaSim verification license)

    // Test task
    task automatic run_block(
        input int test_thread_id_start,
        input int test_count_in, //
        input int test_N
    );
        int timeout_count;
        int row, col;
        logic [DATA_WIDTH-1:0] expected;

        test_count++;
        $display("");
        $display("Test %0d: thread_id_start=%0d count=%0d N=%0d",
                 test_count, test_thread_id_start, test_count_in, test_N);

        
        rst <= 1;
        valid           <= 0;
        start           <= 0;
        N               <= test_N[7:0];
        thread_id_start <= test_thread_id_start[15:0];
        thread_count    <= test_count_in[7:0];
        base_addr_A     <= 16'h0000;
        base_addr_B     <= 16'h0000;
        base_addr_C     <= 16'h0000;
        repeat (3) @(posedge clk);  // ensure stable state before deasserting reset
        rst <= 0;
        @(posedge clk);

        // Handshake
        wait (ready);  // wait for core to be ready
        valid <= 1; 
        @(posedge clk);
        valid <= 0;
        start <= 1; // pulse start for one cycle
        @(posedge clk);
        start <= 0;

        writes_observed = 0; //bookeeping for this block's writes


        //what is this syntax 
        // Wait for done with timeout
        timeout_count = 0;
        while (!done && timeout_count < 5000) begin
            @(posedge clk);

            if (we_C) begin
                writes_observed++;

                row = addr_C_out / test_N;
                col = addr_C_out % test_N;
                expected = compute_golden(row, col, test_N);

                if (wdata_C !== expected) begin
                    $error("  C[%0d][%0d] @addr=%0d: expected %0d, got %0d",
                           row, col, addr_C_out, expected, wdata_C);
                    errors++;
                end else begin
                    $display("  C[%0d][%0d] = %0d", row, col, wdata_C);
                end
            end

            timeout_count++;
        end

        if (!done) begin
            $error("Test %0d timed out", test_count);
            errors++;
        end

        @(posedge clk);

        $display(" Observed %0d writes (expected %0d)", writes_observed, test_count_in);
        if (writes_observed != test_count_in) begin
            $error("Wrong write count");
            errors++;
        end
    endtask

    // Main test
    initial begin
        #20;

        // Full 4x4 matmul — 4 blocks of 4 threads
        run_block( 0, 4, 4);   // C[0][0..3]
        run_block( 4, 4, 4);   // C[1][0..3]
        run_block( 8, 4, 4);   // C[2][0..3]
        run_block(12, 4, 4);   // C[3][0..3]

        $display("");
        $display("═══════════════════════════════════════════");
        if (errors == 0)
            $display("ALL %0d TESTS PASSED", test_count);
        else
            $display("FAIL: %0d errors", errors);
        $display("═══════════════════════════════════════════");
        $finish;
    end

endmodule