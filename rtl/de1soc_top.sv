// =============================================================================
// de1soc_top.sv — DE1-SoC board-level wrapper (what gets synthesised)
//
// Brings the GPU up against the Terasic DE1-SoC's physical I/O:
//   - CLOCK_50         : 50 MHz onboard oscillator
//   - KEY[3:0]         : active-low push buttons (KEY[0]=reset, KEY[1]=start)
//   - LEDR[9:0]        : status LEDs (LEDR[0]=done)
//   - HEX0..HEX3       : 7-seg, latched to C[0][0] when it gets written
//
// Memory architecture:
//   - 3x dual_port_bram instances — one for A (read-only), B (read-only),
//     C (write-only by the GPU, but the BRAM itself is full read/write).
//   - Port A of each BRAM dedicated to core 0.
//   - Port B of each BRAM dedicated to core 1.
//   - Result: zero memory arbitration. Each core gets 1 read of A, 1 read of
//     B, and 1 write of C per cycle, fully in parallel.
//
//   This is the optimal architecture for NUM_CORES = 2 on this FPGA. The
//   M10K BRAMs are natively dual-port; we use exactly the bandwidth they
//   provide and no more. Scaling beyond 2 cores would need either banking
//   (split A across BRAM banks by address bit) or arbitration (the
//   mem_controller.sv module, which is verified standalone but not used
//   here).
// =============================================================================
`timescale 1ns/1ps

module de1soc_top #(
    parameter DATA_WIDTH       = 16,
    parameter ADDR_WIDTH       = 16,
    parameter NUM_CORES        = 2,    // wired to dual-port BRAMs; do not change without rework
    parameter THREADS_PER_CORE = 2,
    parameter BRAM_DEPTH       = 256,
    parameter N_MAT            = 4     // matrix dimension for this build
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

    // ── Per-core BRAM wires (between gpu_top and the dual_port_bram instances)
    logic [ADDR_WIDTH-1:0]   bram_a_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]   bram_a_rd_data [NUM_CORES-1:0];
    logic [ADDR_WIDTH-1:0]   bram_b_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]   bram_b_rd_data [NUM_CORES-1:0];
    logic [ADDR_WIDTH-1:0]   bram_c_addr    [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0]   bram_c_wr_data [NUM_CORES-1:0];
    logic [NUM_CORES-1:0]    bram_c_wr_en;

    logic done;

    // ── GPU ─────────────────────────────────────────────────────────────
    gpu_top #(
        .DATA_WIDTH       (DATA_WIDTH),
        .ADDR_WIDTH       (ADDR_WIDTH),
        .NUM_CORES        (NUM_CORES),
        .THREADS_PER_CORE (THREADS_PER_CORE)
    ) u_gpu (
        .clk            (clk),
        .rst            (rst),
        .start          (start),
        .N              (N),
        .base_addr_A    (base_addr_A),
        .base_addr_B    (base_addr_B),
        .base_addr_C    (base_addr_C),
        .bram_a_addr    (bram_a_addr),
        .bram_a_rd_data (bram_a_rd_data),
        .bram_b_addr    (bram_b_addr),
        .bram_b_rd_data (bram_b_rd_data),
        .bram_c_addr    (bram_c_addr),
        .bram_c_wr_data (bram_c_wr_data),
        .bram_c_wr_en   (bram_c_wr_en),
        .done           (done)
    );

    // ── BRAM A (input matrix A) ─────────────────────────────────────────
    // Read-only from the GPU's perspective — write enables are tied low.
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .DEPTH      (BRAM_DEPTH)
    ) bram_A (
        .clk       (clk),
        .a_addr    (bram_a_addr[0]),  .a_wr_en (1'b0), .a_wr_data ('0), .a_rd_data (bram_a_rd_data[0]),
        .b_addr    (bram_a_addr[1]),  .b_wr_en (1'b0), .b_wr_data ('0), .b_rd_data (bram_a_rd_data[1])
    );

    // ── BRAM B (input matrix B) ─────────────────────────────────────────
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .DEPTH      (BRAM_DEPTH)
    ) bram_B (
        .clk       (clk),
        .a_addr    (bram_b_addr[0]),  .a_wr_en (1'b0), .a_wr_data ('0), .a_rd_data (bram_b_rd_data[0]),
        .b_addr    (bram_b_addr[1]),  .b_wr_en (1'b0), .b_wr_data ('0), .b_rd_data (bram_b_rd_data[1])
    );

    // ── BRAM C (output matrix C) ────────────────────────────────────────
    // Write-only from the GPU's perspective. Read data outputs are left
    // unconnected; if you ever want to read C back (e.g. for HPS readback),
    // expose them at this level.
    logic [DATA_WIDTH-1:0] bram_c_rd_port_a_unused;
    logic [DATA_WIDTH-1:0] bram_c_rd_port_b_unused;
    dual_port_bram #(
        .DATA_WIDTH (DATA_WIDTH),
        .ADDR_WIDTH (ADDR_WIDTH),
        .DEPTH      (BRAM_DEPTH)
    ) bram_C (
        .clk       (clk),
        .a_addr    (bram_c_addr[0]),  .a_wr_en (bram_c_wr_en[0]), .a_wr_data (bram_c_wr_data[0]), .a_rd_data (bram_c_rd_port_a_unused),
        .b_addr    (bram_c_addr[1]),  .b_wr_en (bram_c_wr_en[1]), .b_wr_data (bram_c_wr_data[1]), .b_rd_data (bram_c_rd_port_b_unused)
    );

    // ── Status LEDs ─────────────────────────────────────────────────────
    assign LEDR[0]   = done;
    assign LEDR[9:1] = '0;

    // ── HEX displays: latch C[0][0] for visual verification ────────────
    // Holds 16'hDEAD until the first write to address 0 lands, then locks
    // onto that value. Lets you visually confirm the GPU computed the right
    // top-left output element.
    logic [15:0] hex_value;
    always_ff @(posedge clk) begin
        if (rst)
            hex_value <= 16'hDEAD;
        else if (bram_c_wr_en[0] && (bram_c_addr[0] == '0))
            hex_value <= bram_c_wr_data[0];
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
