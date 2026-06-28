// =============================================================================
// de1soc_top.sv — DE1-SoC board-level wrapper (what gets synthesised)
//
// Brings the GPU up against the Terasic DE1-SoC's physical I/O:
//   - CLOCK_50         : 50 MHz onboard oscillator
//   - KEY[3:0]         : active-low push buttons (KEY[0]=reset, KEY[1]=start)
//   - LEDR[9:0]        : status LEDs (LEDR[0]=done)
//   - HEX0..HEX3       : 7-seg, latched to C[0][0] when it gets written
//
// Memory architecture (memory-controller version — Choice B, NUM_CORES=4):
//   - 3x dual_port_bram instances — one each for A, B, C.
//   - Only PORT A of each BRAM is used; it is shared by all NUM_CORES cores
//     through a round-robin arbiter inside gpu_top (rr_read_arbiter for A/B,
//     rr_write_arbiter for C). Port B is tied off/unused here — it's free
//     bandwidth for a future revision (e.g. host readback of C) but is not
//     needed for this architecture.
//   - Unlike the old 2-core design (one BRAM port per core, zero
//     arbitration), 4 cores now contend for one read port on A, one read
//     port on B, and one write port on C. That contention is the point:
//     it's what makes the memory controller's round-robin grant logic and
//     per-core stall counters mean something.
//
// NUM_CORES is a true parameter here — bump it (and watch a/b/c_stall_cycles
// climb) to see the scalability/contention tradeoff directly.
// =============================================================================
`timescale 1ns/1ps

module de1soc_top #(
    parameter DATA_WIDTH        = 16,
    parameter ADDR_WIDTH        = 16,
    parameter NUM_CORES         = 4,
    parameter THREADS_PER_CORE  = 2,
    parameter BRAM_DEPTH        = 256,
    parameter BRAM_READ_LATENCY = 1,   // use 2 when BRAM is matrix_ab (2-cycle read)
    parameter N_MAT             = 4     // matrix dimension for this build
) (
    input  logic         CLOCK_50,
    input  logic [3:0]   KEY,          // active-low
    output logic [9:0]   LEDR,
    output logic [6:0]   HEX0,
    output logic [6:0]   HEX1,
    output logic [6:0]   HEX2,
    output logic [6:0]   HEX3
);

    // ── Clock and reset ─────────────────────────────────────────────────
    logic clk;
    assign clk = CLOCK_50;

    logic rst;
    assign rst = ~KEY[0];   // press KEY[0] to reset (active-high inside the GPU)

    // KEY[1] = start. Holding it down is fine — gpu_top's dispatcher only
    // accepts start when it transitions IDLE → RUN, then ignores further
    // pulses until the kernel completes.
    logic start;
    assign start = ~KEY[1];

    // ── Kernel parameters (hardcoded for this hardware build) ──────────
    logic [7:0]              N           = N_MAT[7:0];
    logic [ADDR_WIDTH-1:0]   base_addr_A = '0;
    logic [ADDR_WIDTH-1:0]   base_addr_B = '0;
    logic [ADDR_WIDTH-1:0]   base_addr_C = '0;

    // ── Single shared BRAM port per matrix (arbitrated inside gpu_top) ──
    logic [ADDR_WIDTH-1:0]   bram_a_addr;
    logic                    bram_a_rd_en;
    logic [DATA_WIDTH-1:0]   bram_a_rd_data;

    logic [ADDR_WIDTH-1:0]   bram_b_addr;
    logic                    bram_b_rd_en;
    logic [DATA_WIDTH-1:0]   bram_b_rd_data;

    logic [ADDR_WIDTH-1:0]   bram_c_addr;
    logic [DATA_WIDTH-1:0]   bram_c_wr_data;
    logic                    bram_c_wr_en;

    logic done;

    // ── Debug counters from gpu_top ─────────────────────────────────────
    logic [31:0] a_grant_count [NUM_CORES-1:0];
    logic [31:0] b_grant_count [NUM_CORES-1:0];
    logic [31:0] c_grant_count [NUM_CORES-1:0];
    logic [31:0] a_stall_cycles, b_stall_cycles, c_stall_cycles;
    logic [31:0] core_stall_cycles [NUM_CORES-1:0];

    // ── GPU ─────────────────────────────────────────────────────────────
    gpu_top #(
        .DATA_WIDTH        (DATA_WIDTH),
        .ADDR_WIDTH        (ADDR_WIDTH),
        .NUM_CORES         (NUM_CORES),
        .THREADS_PER_CORE  (THREADS_PER_CORE),
        .BRAM_READ_LATENCY (BRAM_READ_LATENCY)
    ) u_gpu (
        .clk            (clk),
        .rst            (rst),
        .start          (start),
        .N              (N),
        .base_addr_A    (base_addr_A),
        .base_addr_B    (base_addr_B),
        .base_addr_C    (base_addr_C),

        .bram_a_addr    (bram_a_addr),
        .bram_a_rd_en   (bram_a_rd_en),
        .bram_a_rd_data (bram_a_rd_data),

        .bram_b_addr    (bram_b_addr),
        .bram_b_rd_en   (bram_b_rd_en),
        .bram_b_rd_data (bram_b_rd_data),

        .bram_c_addr    (bram_c_addr),
        .bram_c_wr_data (bram_c_wr_data),
        .bram_c_wr_en   (bram_c_wr_en),

        .done              (done),
        .a_grant_count     (a_grant_count),
        .b_grant_count     (b_grant_count),
        .c_grant_count     (c_grant_count),
        .a_stall_cycles    (a_stall_cycles),
        .b_stall_cycles    (b_stall_cycles),
        .c_stall_cycles    (c_stall_cycles),
        .core_stall_cycles (core_stall_cycles)
    );

    // ── BRAM A (input matrix A) ─────────────────────────────────────────
    // Only port A used — shared by all cores via the read arbiter in
    // gpu_top. Port B is tied off (reserved for future host readback).
    logic [DATA_WIDTH-1:0] bram_a_portb_unused;
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .DEPTH      (BRAM_DEPTH)
    ) bram_A (
        .clk       (clk),
        .a_addr    (bram_a_addr), .a_wr_en (1'b0), .a_wr_data ('0), .a_rd_data (bram_a_rd_data),
        .b_addr    ('0),          .b_wr_en (1'b0), .b_wr_data ('0), .b_rd_data (bram_a_portb_unused)
    );

    // ── BRAM B (input matrix B) ─────────────────────────────────────────
    logic [DATA_WIDTH-1:0] bram_b_portb_unused;
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .DEPTH      (BRAM_DEPTH)
    ) bram_B (
        .clk       (clk),
        .a_addr    (bram_b_addr), .a_wr_en (1'b0), .a_wr_data ('0), .a_rd_data (bram_b_rd_data),
        .b_addr    ('0),          .b_wr_en (1'b0), .b_wr_data ('0), .b_rd_data (bram_b_portb_unused)
    );

    // ── BRAM C (output matrix C) ────────────────────────────────────────
    // Write-only from the GPU's perspective via port A (shared by all
    // cores through the write arbiter). Port B's read data is left
    // unconnected; expose it at this level if host readback is needed.
    logic [DATA_WIDTH-1:0] bram_c_rd_porta_unused;
    logic [DATA_WIDTH-1:0] bram_c_rd_portb_unused;
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .DEPTH      (BRAM_DEPTH)
    ) bram_C (
        .clk       (clk),
        .a_addr    (bram_c_addr), .a_wr_en (bram_c_wr_en), .a_wr_data (bram_c_wr_data), .a_rd_data (bram_c_rd_porta_unused),
        .b_addr    ('0),          .b_wr_en (1'b0),         .b_wr_data ('0),             .b_rd_data (bram_c_rd_portb_unused)
    );

    // ── Status LEDs ─────────────────────────────────────────────────────
    assign LEDR[0]   = done;
    // LEDR[1] lit while any core is stalled on memory contention — quick
    // visual confirmation the arbiters are actually doing something.
    logic any_core_stalling;
    always_comb begin
        any_core_stalling = 1'b0;
        for (int i = 0; i < NUM_CORES; i++)
            if (core_stall_cycles[i] != 32'd0) any_core_stalling = 1'b1;
    end
    assign LEDR[1]   = any_core_stalling;
    assign LEDR[9:2] = '0;

    // ── HEX displays: latch C[0][0] for visual verification ────────────
    // Holds 16'hDEAD until the first write to address 0 lands, then locks
    // onto that value. Lets you visually confirm the GPU computed the right
    // top-left output element.
    logic [15:0] hex_value;
    always_ff @(posedge clk) begin
        if (rst)
            hex_value <= 16'hDEAD;
        else if (bram_c_wr_en && (bram_c_addr == '0))
            hex_value <= bram_c_wr_data;
    end

    seven_seg hd0 (.in(hex_value[3:0]),   .out(HEX0));
    seven_seg hd1 (.in(hex_value[7:4]),   .out(HEX1));
    seven_seg hd2 (.in(hex_value[11:8]),  .out(HEX2));
    seven_seg hd3 (.in(hex_value[15:12]), .out(HEX3));

endmodule


// =============================================================================
// 7-segment decoder. DE1-SoC HEX displays are common-anode, so segments are
// active-low (0 = lit, 1 = dark). Bit order: out[6:0] = {g,f,e,d,c,b,a}.
// =============================================================================
module seven_seg (
    input  logic [3:0] in,
    output logic [6:0] out
);
    always_comb begin
        case (in)
            4'h0: out = 7'b1000000;
            4'h1: out = 7'b1111001;
            4'h2: out = 7'b0100100;
            4'h3: out = 7'b0110000;
            4'h4: out = 7'b0011001;
            4'h5: out = 7'b0010010;
            4'h6: out = 7'b0000010;
            4'h7: out = 7'b1111000;
            4'h8: out = 7'b0000000;
            4'h9: out = 7'b0010000;
            4'hA: out = 7'b0001000;
            4'hB: out = 7'b0000011;
            4'hC: out = 7'b1000110;
            4'hD: out = 7'b0100001;
            4'hE: out = 7'b0000110;
            4'hF: out = 7'b0001110;
            default: out = 7'b1111111;
        endcase
    end
endmodule
