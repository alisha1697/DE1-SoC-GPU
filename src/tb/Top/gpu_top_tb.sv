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

<<<<<<< HEAD
=======
    // ─── Parameters ─────────────────────────────────────
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
    localparam DATA_WIDTH       = 16;
    localparam ADDR_WIDTH       = 16;
    localparam NUM_CORES        = 2;
    localparam THREADS_PER_CORE = 2;
<<<<<<< HEAD
    // 4x4 = 16 threads, 2 threads/core -> 8 blocks, 4 dispatches per core.
    // This is the first config that actually exercises the kernel_init path
    // (each hardware thread instance is reused across multiple block dispatches).
    localparam N_TEST           = 4;

=======
    localparam N_TEST           = 2;     // 2x2 matmul

    // ─── DUT-facing signals ─────────────────────────────
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
    logic                       clk, rst;
    logic                       start;
    logic [7:0]                 N;
    logic [ADDR_WIDTH-1:0]      base_addr_A, base_addr_B, base_addr_C;
    logic                       done;

<<<<<<< HEAD
    logic [ADDR_WIDTH-1:0]      bram_a_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]      bram_a_rd_data [NUM_CORES-1:0];
    logic [ADDR_WIDTH-1:0]      bram_b_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]      bram_b_rd_data [NUM_CORES-1:0];
    logic [ADDR_WIDTH-1:0]      bram_c_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]      bram_c_wr_data [NUM_CORES-1:0];
    logic [NUM_CORES-1:0]       bram_c_wr_en;

    initial begin clk = 0; forever #5 clk = ~clk; end

=======
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
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
    gpu_top #(
        .DATA_WIDTH       (DATA_WIDTH),
        .ADDR_WIDTH       (ADDR_WIDTH),
        .NUM_CORES        (NUM_CORES),
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) dut (
<<<<<<< HEAD
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

=======
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
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
    initial begin
        fork
            forever begin
                @(posedge clk);
<<<<<<< HEAD
                if (!rst) begin
                    for (int c = 0; c < NUM_CORES; c++) begin
                        if (bram_c_wr_en[c]) begin
                            writes_observed++;
                            $display("  [t=%0t] core%0d -> mem_C[%0d] <= %0d (write #%0d)",
                                     $time, c, bram_c_addr[c], bram_c_wr_data[c], writes_observed);
                        end
                    end
=======
                if (!rst && bram_c_wr_en) begin
                    writes_observed++;
                    $display("  [t=%0t] BRAM_C[%0d] <= %0d (write #%0d)",
                             $time, bram_c_addr, bram_c_wr_data, writes_observed);
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
                end
            end
        join_none
    end

<<<<<<< HEAD
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

=======
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
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
    initial begin
        $dumpfile("gpu_top_tb.vcd");
        $dumpvars(0, gpu_top_tb);

<<<<<<< HEAD
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

=======
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
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
        repeat (3) @(posedge clk);
        rst = 0;
        @(posedge clk);

<<<<<<< HEAD
=======
        // Pulse start
        $display("[t=%0t] Pulsing start ...", $time);
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
        start = 1;
        @(posedge clk);
        start = 0;

<<<<<<< HEAD
=======
        // Wait for done with a timeout
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
        fork
            begin
                wait (done);
                $display("[t=%0t] done asserted!", $time);
            end
            begin
                repeat (20000) @(posedge clk);
<<<<<<< HEAD
                $error("TIMEOUT");
=======
                $error("TIMEOUT — done never asserted after 20000 cycles");
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
                errors++;
            end
        join_any
        disable fork;
        @(posedge clk); @(posedge clk);

<<<<<<< HEAD
        for (int row = 0; row < N_TEST; row++) begin
            for (int col = 0; col < N_TEST; col++) begin
                automatic int addr = row * N_TEST + col;
                automatic logic [DATA_WIDTH-1:0] expected = compute_golden(row, col, N_TE
=======
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
>>>>>>> ca75c37 (WIP: mem_controller arbiter + system testbench + scheduler handshake)
