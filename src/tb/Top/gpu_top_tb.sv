// =============================================================================
// gpu_top_tb.sv  — System-level testbench for the full 2-core GPU
//
// What it does:
//   - Instantiates gpu_top (dispatcher + 2 cores + mem_controller)
//   - Hosts BRAM_A (holds both input matrices A and B contiguously)
//   - Hosts BRAM_C (captures output matrix C)
//   - Loads test A and B with known small values
//   - Pulses start, waits for done
//   - Reads BRAM_C back and compares to a Python-like golden reference
//   - Prints per-element PASS/FAIL and an overall summary
//
// Memory layout in BRAM_A (one 256-entry behavioral memory):
//   base_addr_A = 0       → A[0..N²-1] live in mem_A[0 .. N²-1]
//   base_addr_B = N²      → B[0..N²-1] live in mem_A[N² .. 2N²-1]
//
// Memory layout in BRAM_C:
//   base_addr_C = 0       → C[0..N²-1] live in mem_C[0 .. N²-1]
//
// ⚠ RTL prerequisites for this TB to produce correct results:
//   1. core.sv body must be implemented (instantiate scheduler + threads,
//      wire MUXes for memory and address ports). Currently empty.
//   2. fma.sv body must be implemented (a*b+c, with valid_in/valid_out).
//      Currently empty.
//   3. thread.sv must exist in src/ (currently only thread_v1.sv at root,
//      with known bugs: addr_A uses undeclared i/j, addr_C uses k instead
//      of row, accumulator <= result self-assigns).
//
//   Until those three are done, this TB will compile + run, but the BRAM_C
//   output will be all-X or all-zero, and every element check will fail.
//   That failure is the expected behaviour — fix the RTL, rerun, watch the
//   checks turn green.
//
// Techniques in use:
//   - Behavioral BRAMs with 1-cycle latency (matches mem_controller assumption)
//   - Golden reference function (compute_golden)
//   - Background monitor via fork...join_none captures every BRAM_C write
//   - Self-checking — diffs final mem_C against the golden matrix
// =============================================================================
`timescale 1ns/1ps

module gpu_top_tb;

    // ─── Parameters ─────────────────────────────────────
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

    // ─── Behavioral BRAM_A (holds A then B contiguously) ─
    logic [DATA_WIDTH-1:0] mem_A [0:255];
    always @(posedge clk) begin
        bram_a_rd_data <= mem_A[bram_a_addr[7:0]];   // 1-cycle latency
    end

    // ─── Behavioral BRAM_C (captures C writes) ─────────
    logic [DATA_WIDTH-1:0] mem_C [0:255];
    always @(posedge clk) begin
        if (bram_c_wr_en) mem_C[bram_c_addr[7:0]] <= bram_c_wr_data;
    end

    // ─── Bookkeeping ────────────────────────────────────
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
            acc += mem_A[base_a + row*NN + kk] * mem_A[base_b + kk*NN + col];
        return acc;
    endfunction

    // ─── Initialize test matrices in mem_A ─────────────
    // For N=2:
    //   A = [[1,2],[3,4]]  → mem_A[0..3]
    //   B = [[5,6],[7,8]]  → mem_A[4..7]
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
        base_addr_A = 16'h0000;          // A at offset 0
        base_addr_B = N_TEST*N_TEST;     // B at offset N² = 4
        base_addr_C = 16'h0000;          // C at offset 0 (in BRAM_C)

        #1;
        $display("");
        $display("═══════════════════════════════════════════════");
        $display("  GPU SYSTEM TEST  —  %0dx%0d matrix multiply", N_TEST, N_TEST);
        $display("  NUM_CORES = %0d, THREADS_PER_CORE = %0d", NUM_CORES, THREADS_PER_CORE);
        $display("═══════════════════════════════════════════════");
        $display("Test matrices:");
        $display("  A = [[%0d %0d] [%0d %0d]]", mem_A[0], mem_A[1], mem_A[2], mem_A[3]);
        $display("  B = [[%0d %0d] [%0d %0d]]", mem_A[4], mem_A[5], mem_A[6], mem_A[7]);
        $display("  Expected C[i][j] = sum_k A[i][k]*B[k][j]");
        $display("    C[0][0] = 1*5 + 2*7 = %0d", 1*5 + 2*7);
        $display("    C[0][1] = 1*6 + 2*8 = %0d", 1*6 + 2*8);
        $display("    C[1][0] = 3*5 + 4*7 = %0d", 3*5 + 4*7);
        $display("    C[1][1] = 3*6 + 4*8 = %0d", 3*6 + 4*8);
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
