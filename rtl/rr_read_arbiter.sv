// =============================================================================
// rr_read_arbiter.sv — Generic round-robin read arbiter, N cores -> 1 BRAM port
//
// Fully parameterized on NUM_CORES. Used three times in gpu_top (well, twice
// for reads — once for A, once for B) to let an arbitrary number of cores
// share one physical BRAM read port.
//
// Protocol (per core):
//   req_valid  : core wants to read req_addr
//   req_ready  : combinational grant, same cycle as req_valid — "you got the
//                bus this cycle". req_valid should drop the cycle after a
//                grant if the core has nothing else queued.
//   resp_valid : pulses BRAM_READ_LATENCY cycles after a grant, on the same
//                core's index, with the BRAM read data for that grant.
//                BRAM_READ_LATENCY=1 → rtl/dual_port_bram.sv (sim).
//                BRAM_READ_LATENCY=2 → Quartus altsyncram / matrix_ab (FPGA).
//   resp_data  : broadcast BRAM data, qualified per-core by resp_valid.
//
// A core that loses arbitration simply sees req_ready stay low and re-asserts
// req_valid next cycle — that visible stall is the whole point of this
// exercise (vs. the duplicated-BRAM design where no core ever stalls).
//
// Fairness/debug: grant_count[i] increments every time core i is granted.
// Wire these to a testbench or to LEDs/HEX to prove round-robin fairness.
// =============================================================================
`timescale 1ns/1ns

module rr_read_arbiter #(
    parameter DATA_WIDTH        = 16,
    parameter ADDR_WIDTH        = 16,
    parameter NUM_CORES         = 4,
    parameter BRAM_READ_LATENCY = 1
)(
    input  logic                   clk,
    input  logic                   rst,

    // Core-side request/response, one slot per core
    input  logic [NUM_CORES-1:0]   req_valid,
    input  logic [ADDR_WIDTH-1:0]  req_addr   [NUM_CORES-1:0],
    output logic [NUM_CORES-1:0]   req_ready,
    output logic [NUM_CORES-1:0]   resp_valid,
    output logic [DATA_WIDTH-1:0]  resp_data  [NUM_CORES-1:0],

    // BRAM-side single read port
    output logic [ADDR_WIDTH-1:0]  bram_addr,
    output logic                   bram_rd_en,
    input  logic [DATA_WIDTH-1:0]  bram_rd_data,

    // Debug / fairness counters — one saturating-free 32-bit counter per core
    output logic [31:0]            grant_count [NUM_CORES-1:0],
    output logic [31:0]            stall_cycles
);

    localparam PTR_W = (NUM_CORES == 1) ? 1 : $clog2(NUM_CORES);

    logic [PTR_W-1:0]     ptr;
    logic [NUM_CORES-1:0] grant;

    // Combinational round-robin scan starting at ptr, wrap via modulo.
    // First requester found (starting from ptr) wins this cycle.
    always_comb begin
        grant = '0;
        for (int i = 0; i < NUM_CORES; i++) begin
            automatic int idx = (int'(ptr) + i) % NUM_CORES;
            if (req_valid[idx] && grant == '0)
                grant[idx] = 1'b1;
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            ptr <= '0;
        end else if (grant != '0) begin
            for (int i = 0; i < NUM_CORES; i++)
                if (grant[i]) ptr <= PTR_W'((i + 1) % NUM_CORES);
        end
    end

    assign req_ready  = grant;
    assign bram_rd_en = |req_valid;

    // Winning core's address drives the shared BRAM port
    always_comb begin
        bram_addr = '0;
        for (int i = 0; i < NUM_CORES; i++)
            if (grant[i]) bram_addr = req_addr[i];
    end

    // Delay grant to align resp_valid with BRAM read-data latency.
    logic [NUM_CORES-1:0] grant_pipe [0:BRAM_READ_LATENCY-1];

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            for (int i = 0; i < BRAM_READ_LATENCY; i++)
                grant_pipe[i] <= '0;
        end else begin
            grant_pipe[0] <= grant;
            for (int i = 1; i < BRAM_READ_LATENCY; i++)
                grant_pipe[i] <= grant_pipe[i - 1];
        end
    end

    assign resp_valid = grant_pipe[BRAM_READ_LATENCY - 1];

    genvar gi;
    generate
        for (gi = 0; gi < NUM_CORES; gi++) begin : g_resp
            assign resp_data[gi] = bram_rd_data;
        end
    endgenerate

    // ── Debug counters ──────────────────────────────────────────────────
    generate
        for (gi = 0; gi < NUM_CORES; gi++) begin : g_cnt
            always_ff @(posedge clk or posedge rst) begin
                if (rst)            grant_count[gi] <= 32'd0;
                else if (grant[gi]) grant_count[gi] <= grant_count[gi] + 32'd1;
            end
        end
    endgenerate

    // Cycles where at least one core wanted the bus but didn't get it —
    // a direct measure of memory contention.
    always_ff @(posedge clk or posedge rst) begin
        if (rst)
            stall_cycles <= 32'd0;
        else if (|(req_valid & ~grant))
            stall_cycles <= stall_cycles + 32'd1;
    end

endmodule
