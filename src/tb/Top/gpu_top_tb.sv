// =============================================================================
// gpu_top_tb.sv -- system test for the full 2-core GPU
//
// Uses the actual `dual_port_bram` module as the memory model -- not a fake
// flat array -- so this testbench proves the design works against the same
// memory blocks Quartus will synthesise into M10K on the DE1-SoC.
//
// Port allocation matches the board-level top (de1soc_top.sv):
//   bram_A.port_a / bram_B.port_a / bram_C.port_a  ->  core 0
//   bram_A.port_b / bram_B.port_b / bram_C.port_b  ->  core 1
//
// With NUM_CORES=2 and 3 dual-port BRAMs (one each for A, B, C), every
// core gets one dedicated port on every memory. No arbitration is needed
// and every memory access happens in parallel.
// =============================================================================
`timescale 1ns/1ps

module gpu_top_tb;

    localparam DATA_WIDTH       = 16;
    localparam ADDR_WIDTH       = 16;
    localparam NUM_CORES        = 2;
    localparam THREADS_PER_CORE = 2;
    localparam BRAM_DEPTH       = 256;

    // 4x4 = 16 threads, 2 threads/core -> 8 blocks, 4 dispatches per core.
    // First config that actually exercises the kernel_init path (each
    // hardware thread instance is reused across multiple block dispatches).
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

    // DUT
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

    // Memory model: three real dual-port BRAMs.
    // Port A serves core 0; port B serves core 1. A and B are read-only by
    // the GPU (write enables tied low); C is write-only by the GPU.
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH), .ADDR_WIDTH (ADDR_WIDTH), .DEPTH (BRAM_DEPTH)
    ) bram_A (
        .clk       (clk),
        .a_addr    (bram_a_addr[0]),  .a_wr_en (1'b0), .a_wr_data ('0), .a_rd_data (bram_a_rd_data[0]),
        .b_addr    (bram_a_addr[1]),  .b_wr_en (1'b0), .b_wr_data ('0), .b_rd_data (bram_a_rd_data[1])
    );

    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH), .ADDR_WIDTH (ADDR_WIDTH), .DEPTH (BRAM_DEPTH)
    ) bram_B (
        .clk       (clk),
        .a_addr    (bram_b_addr[0]),  .a_wr_en (1'b0), .a_wr_data ('0), .a_rd_data (bram_b_rd_data[0]),
        .b_addr    (bram_b_addr[1]),  .b_wr_en (1'b0), .b_wr_data ('0), .b_rd_data (bram_b_rd_data[1])
    );

    logic [DATA_WIDTH-1:0] bram_c_rd_a_unused, bram_c_rd_b_unused;
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH), .ADDR_WIDTH (ADDR_WIDTH), .DEPTH (BRAM_DEPTH)
    ) bram_C (
        .clk       (clk),
        .a_addr    (bram_c_addr[0]),  .a_wr_en (bram_c_wr_en[0]), .a_wr_data (bram_c_wr_data[0]), .a_rd_data (bram_c_rd_a_unused),
        .b_addr    (bram_c_addr[1]),  .b_wr_en (bram_c_wr_en[1]), .b_wr_data (bram_c_wr_data[1]), .b_rd_data (bram_c_rd_b_unused)
    );

    // C-write monitor
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
                            $display("  [t=%0t] core%0d -> bram_C[%0d] <= %0d (write #%0d)",
                                     $time, c, bram_c_addr[c], bram_c_wr_data[c], writes_observed);
                        end
                    end
                end
            end
        join_none
    end

    // Software golden. Reads A and B values via hierarchical reference into
    // the BRAM modules' internal `mem` arrays.
    function automatic logic [DATA_WIDTH-1:0] compute_golden(input int row, col, NN);
        logic [DATA_WIDTH-1:0] acc = 0;
        for (int kk = 0; kk < NN; kk++)
            acc += bram_A.mem[row*NN + kk] * bram_B.mem[kk*NN + col];
        return acc;
    endfunction

    // Initialise BRAM contents via hierarchical reference.
    // For N=4: A = B = [[1,2,3,4],[5,6,7,8],[9,10,11,12],[13,14,15,16]]
    // Max product = 16*16 = 256; max accumulator = 4 * 256 = 1024 -- well
    // within 16-bit range, no overflow at this size.
    initial begin
        for (int i = 0; i < BRAM_DEPTH; i++) begin
            bram_A.mem[i] = 16'h0000;
            bram_B.mem[i] = 16'h0000;
            bram_C.mem[i] = 16'hDEAD;
        end
        for (int i = 0; i < N_TEST*N_TEST; i++) begin
            bram_A.mem[i] = 16'(i + 1);
            bram_B.mem[i] = 16'(i + 1);
        end
    end

    // Stimulus + checks
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
        $display("Memory: 3x dual_port_bram (A, B, C); port A=core0, port B=core1");
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
                if (bram_C.mem[addr] !== expected) begin
                    $error("  FAIL  C[%0d][%0d]: expected %0d, got %0d",
                           row, col, expected, bram_C.mem[addr]);
                    errors++;
                end else begin
                    $display("  PASS  C[%0d][%0d] = %0d", row, col, bram_C.mem[addr]);
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
