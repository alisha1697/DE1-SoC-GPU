// =============================================================================
// gpu_top_tb.sv — system test for the full 2-core GPU (per-core BRAMs)
// =============================================================================
`timescale 1ns/1ps

module gpu_top_tb;

    localparam DATA_WIDTH       = 16;
    localparam ADDR_WIDTH       = 16;
    localparam NUM_CORES        = 2;
    localparam THREADS_PER_CORE = 2;
    localparam N_TEST           = 2;     // 2x2 matmul

    // ─── DUT-facing signals ─────────────────────────────
    logic                       clk, rst;
    logic                       start;
    logic [7:0]                 N;
    logic [ADDR_WIDTH-1:0]      base_addr_A, base_addr_B, base_addr_C;
    logic                       done;

    // BRAM_A read port (from DUT)
    logic [DATA_WIDTH-1:0]      bram_a_rd_data;
    logic [ADDR_WIDTH-1:0]      bram_a_addr;
    logic                       bram_a_rd_en;

    // BRAM_C write port (from DUT)
    logic                       bram_c_wr_en;
    logic [ADDR_WIDTH-1:0]      bram_c_addr;
    logic [DATA_WIDTH-1:0]      bram_c_wr_data;

    // ─── Clock ──────────────────────────────────────────
    initial begin
        clk = 0;
        forever #5 clk = ~clk;     // 100 MHz
    end

    // ─── DUT instance ───────────────────────────────────
    gpu_top #(
        .DATA_WIDTH       (DATA_WIDTH),
        .ADDR_WIDTH       (ADDR_WIDTH),
        .NUM_CORES        (NUM_CORES),
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) dut (
        .clk            (clk),
        .rst            (rst),
        .start          (start),
        .N              (N),
        .base_addr_A    (base_addr_A),
        .base_addr_B    (base_addr_B),
        .base_addr_C    (base_addr_C),
        .bram_a_rd_data (bram_a_rd_data),
        .bram_a_addr    (bram_a_addr),
        .bram_a_rd_en   (bram_a_rd_en),
        .bram_c_wr_en   (bram_c_wr_en),
        .bram_c_addr    (bram_c_addr),
        .bram_c_wr_data (bram_c_wr_data),
        .done           (done)
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

    // ─── Background monitor for C writes ───────────────
    initial begin
        fork
            forever begin
                @(posedge clk);
                if (!rst && bram_c_wr_en) begin
                    writes_observed++;
                    $display("  [t=%0t] BRAM_C[%0d] <= %0d (write #%0d)",
                             $time, bram_c_addr, bram_c_wr_data, writes_observed);
                end
            end
        join_none
    end

    // ─── Golden reference ──────────────────────────────
    function automatic logic [DATA_WIDTH-1:0] compute_golden(
        input int row, col, NN, base_a, base_b
    );
        logic [DATA_WIDTH-1:0] acc = 0;
        for (int kk = 0; kk < NN; kk++)
            acc += mem_A[row*NN + kk] * mem_B[kk*NN + col];
        return acc;
    endfunction

    initial begin
        for (int i = 0; i < 256; i++) mem_A[i] = 0;
        for (int i = 0; i < 256; i++) mem_C[i] = 16'hDEAD;  // poison so we see fresh writes

        // A matrix (row-major)
        mem_A[0] = 16'd1;  mem_A[1] = 16'd2;
        mem_A[2] = 16'd3;  mem_A[3] = 16'd4;

        // B matrix (row-major), placed right after A
        mem_A[4] = 16'd5;  mem_A[5] = 16'd6;
        mem_A[6] = 16'd7;  mem_A[7] = 16'd8;
    end

    // ─── Main test ─────────────────────────────────────
    initial begin
        $dumpfile("gpu_top_tb.vcd");
        $dumpvars(0, gpu_top_tb);

        // Initial state
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

        // Hold reset for a few cycles
        repeat (3) @(posedge clk);
        rst = 0;
        @(posedge clk);

        // Pulse start
        $display("[t=%0t] Pulsing start ...", $time);
        start = 1;
        @(posedge clk);
        start = 0;

        // Wait for done with a timeout
        fork
            begin
                wait (done);
                $display("[t=%0t] done asserted!", $time);
            end
            begin
                repeat (20000) @(posedge clk);
                $error("TIMEOUT — done never asserted after 20000 cycles");
                errors++;
            end
        join_any
        disable fork;
        @(posedge clk); @(posedge clk);

        // ─── Verify each output element ────────────────
        $display("");
        $display("─── Verification ──────────────────────────────");
        for (int row = 0; row < N_TEST; row++) begin
            for (int col = 0; col < N_TEST; col++) begin
                automatic int addr = row * N_TEST + col;
                automatic logic [DATA_WIDTH-1:0] expected = compute_golden(
                    row, col, N_TEST, base_addr_A, base_addr_B
                );
                automatic logic [DATA_WIDTH-1:0] got = mem_C[addr];

                if (got !== expected) begin
                    $error("  ✗ C[%0d][%0d] @ mem_C[%0d]: expected %0d, got %0d",
                           row, col, addr, expected, got);
                    errors++;
                end else begin
                    $display("  ✓ C[%0d][%0d] @ mem_C[%0d] = %0d",
                             row, col, addr, got);
                end
            end
        end

        // ─── Sanity: expected number of writes ─────────
        $display("");
        if (writes_observed != N_TEST * N_TEST) begin
            $error("Wrong write count: expected %0d, observed %0d",
                   N_TEST * N_TEST, writes_observed);
            errors++;
        end else begin
            $display("  ✓ Observed %0d writes (matches N²)", writes_observed);
        end

        // ─── Final report ──────────────────────────────
        $display("");
        $display("═══════════════════════════════════════════════");
        if (errors == 0)
            $display("  ✓ SYSTEM TEST PASSED");
        else
            $display("  ✗ SYSTEM TEST FAILED: %0d error(s)", errors);
        $display("═══════════════════════════════════════════════");
        $finish;
    end

    // ─── Timeout watchdog (separate from done-wait, for total runaway) ─
    initial begin
        #500000;
        $fatal(1, "HARD TIMEOUT — sim ran way too long");
    end

endmodule
