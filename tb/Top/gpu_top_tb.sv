// =============================================================================
// gpu_top_tb.sv — system test for the full 2-core GPU (per-core BRAMs)
// =============================================================================
`timescale 1ns/1ps

module gpu_top_tb;

    localparam DATA_WIDTH       = 16;
    localparam ADDR_WIDTH       = 16;
    localparam NUM_CORES        = 2;
    localparam THREADS_PER_CORE = 2;
    // 4x4 = 16 threads, 2 threads/core -> 8 blocks, 4 dispatches per core.
    // This is the first config that actually exercises the kernel_init path
    // (each hardware thread instance is reused across multiple block dispatches).
    localparam N_TEST           = 4;

    logic                       clk, rst;
    logic                       start;
    logic [7:0]                 N;
    logic [ADDR_WIDTH-1:0]      base_addr_A, base_addr_B, base_addr_C;
    logic                       done;

    logic [ADDR_WIDTH-1:0]      bram_a_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]      bram_a_rd_data [NUM_CORES-1:0];
    logic [ADDR_WIDTH-1:0]      bram_b_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]      bram_b_rd_data [NUM_CORES-1:0];
    logic [ADDR_WIDTH-1:0]      bram_c_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]      bram_c_wr_data [NUM_CORES-1:0];
    logic [NUM_CORES-1:0]       bram_c_wr_en;

    initial begin clk = 0; forever #5 clk = ~clk; end

    gpu_top #(
        .DATA_WIDTH       (DATA_WIDTH),
        .ADDR_WIDTH       (ADDR_WIDTH),
        .NUM_CORES        (NUM_CORES),
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) dut (
        .clk(clk), .rst(rst), .start(start), .N(N),
        .base_addr_A(base_addr_A), .base_addr_B(base_addr_B), .base_addr_C(base_addr_C),
        .bram_a_addr(bram_a_addr), .bram_a_rd_data(bram_a_rd_data),
        .bram_b_addr(bram_b_addr), .bram_b_rd_data(bram_b_rd_data),
        .bram_c_addr(bram_c_addr), .bram_c_wr_data(bram_c_wr_data), .bram_c_wr_en(bram_c_wr_en),
        .done(done)
    );

    // Shared memory model — per-core ports, but same underlying arrays
    logic [DATA_WIDTH-1:0] mem_A [0:255];
    logic [DATA_WIDTH-1:0] mem_B [0:255];
    logic [DATA_WIDTH-1:0] mem_C [0:255];

    genvar gi;
    generate
        for (gi = 0; gi < NUM_CORES; gi++) begin : gen_brams
            always @(posedge clk) begin
                bram_a_rd_data[gi] <= mem_A[bram_a_addr[gi][7:0]];
                bram_b_rd_data[gi] <= mem_B[bram_b_addr[gi][7:0]];
                if (bram_c_wr_en[gi])
                    mem_C[bram_c_addr[gi][7:0]] <= bram_c_wr_data[gi];
            end
        end
    endgenerate

    int errors          = 0;
    int writes_observed = 0;

    initial begin
        fork
            forever begin
                @(posedge clk);
                if (!rst) begin
                    for (int c = 0; c < NUM_CORES; c++) begin
                        if (bram_c_wr_en[c]) begin
                            writes_observed++;
                            $display("  [t=%0t] core%0d -> mem_C[%0d] <= %0d (write #%0d)",
                                     $time, c, bram_c_addr[c], bram_c_wr_data[c], writes_observed);
                        end
                    end
                end
            end
        join_none
    end

    function automatic logic [DATA_WIDTH-1:0] compute_golden(input int row, col, NN);
        logic [DATA_WIDTH-1:0] acc = 0;
        for (int kk = 0; kk < NN; kk++)
            acc += mem_A[row*NN + kk] * mem_B[kk*NN + col];
        return acc;
    endfunction

    initial begin
        for (int i = 0; i < 256; i++) begin
            mem_A[i] = 0;
            mem_B[i] = 0;
            mem_C[i] = 16'hDEAD;
        end
        // Fill A and B (NxN, row-major) with sequential values 1..N*N.
        // For N=4: A = B = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
        // Max product = 16*16 = 256; max accumulator = 4 * 256 = 1024 — well
        // within 16-bit range, so no overflow concerns at this size.
        for (int i = 0; i < N_TEST*N_TEST; i++) begin
            mem_A[i] = 16'(i + 1);
            mem_B[i] = 16'(i + 1);
        end
    end

    initial begin
        $dumpfile("gpu_top_tb.vcd");
        $dumpvars(0, gpu_top_tb);

        rst         = 1;
        start       = 0;
        N           = N_TEST[7:0];
        base_addr_A = 16'h0000;
        base_addr_B = 16'h0000;
        base_addr_C = 16'h0000;
        #1;

        $display("");
        $display("=== GPU SYSTEM TEST: %0dx%0d matmul (NUM_CORES=%0d, T/C=%0d) ===",
                 N_TEST, N_TEST, NUM_CORES, THREADS_PER_CORE);
        $display("Total blocks=%0d, dispatches/core=%0d (exercises kernel_init path)",
                 (N_TEST*N_TEST) / THREADS_PER_CORE,
                 ((N_TEST*N_TEST) / THREADS_PER_CORE) / NUM_CORES);
        $write("Expected C (from golden):");
        for (int r = 0; r < N_TEST; r++) begin
            $write("\n  row %0d:", r);
            for (int c = 0; c < N_TEST; c++) $write(" %5d", compute_golden(r, c, N_TEST));
        end
        $display("");

        repeat (3) @(posedge clk);
        rst = 0;
        @(posedge clk);

        start = 1;
        @(posedge clk);
        start = 0;

        fork
            begin
                wait (done);
                $display("[t=%0t] done asserted!", $time);
            end
            begin
                repeat (20000) @(posedge clk);
                $error("TIMEOUT");
                errors++;
            end
        join_any
        disable fork;
        @(posedge clk); @(posedge clk);

        for (int row = 0; row < N_TEST; row++) begin
            for (int col = 0; col < N_TEST; col++) begin
                automatic int addr = row * N_TEST + col;
                automatic logic [DATA_WIDTH-1:0] expected = compute_golden(row, col, N_TEST);
                if (mem_C[addr] !== expected) begin
                    $error("  FAIL  C[%0d][%0d]: expected %0d, got %0d",
                           row, col, expected, mem_C[addr]);
                    errors++;
                end else begin
                    $display("  PASS  C[%0d][%0d] = %0d", row, col, mem_C[addr]);
                end
            end
        end

        if (writes_observed != N_TEST * N_TEST) begin
            $error("Wrong write count: expected %0d, got %0d", N_TEST*N_TEST, writes_observed);
            errors++;
        end

        $display("");
        if (errors == 0)
            $display("=== SYSTEM TEST PASSED ===");
        else
            $display("=== SYSTEM TEST FAILED: %0d errors ===", errors);
        $finish;
    end

    initial begin #500000; $fatal(1, "HARD TIMEOUT"); end

endmodule
