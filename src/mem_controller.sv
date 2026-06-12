// =============================================================================
// mem_controller.sv — Round-Robin  Memory Arbiter for Dual-Port BRAM
//
// Sits between NUM_CORES cores and a single dual-port BRAM.
// Both cores can request reads and writes in the same cycle because the
// dispatcher starts them simultaneously. This module ensures only one
// core drives each BRAM port at a time using round-robin arbitration.
//
// READ ARBITRATION (Port A):
//   - A core signals it wants a read by asserting mem_read_valid.
//   - The arbiter grants one core per cycle via mem_read_ready.
//   - The losing core stalls (its scheduler stays in WAIT) until next cycle.
//   - BRAM read data is broadcast to all cores; only the winning core's
//     scheduler advances to FMA and pulses data_valid, so only the right
//     thread captures the data.
//
// WRITE ARBITRATION (Port B):
//   - Same mechanism: core asserts mem_write_valid, arbiter grants via
//     mem_write_ready, loser stalls in WRITE state for one extra cycle.
// =============================================================================

module mem_controller #(
    parameter DATA_WIDTH = 16,
    parameter ADDR_WIDTH = 16,
    parameter NUM_CORES  = 2
)(
    input  logic clk,
    input  logic rst,

    // ── Core-side read interface (one entry per core) ──────────────────────
    input  logic [NUM_CORES-1:0]  core_read_valid,
    input  logic [ADDR_WIDTH-1:0] core_read_addr  [NUM_CORES-1:0],
    output logic [NUM_CORES-1:0]  core_read_ready,
    output logic [DATA_WIDTH-1:0] core_read_data   [NUM_CORES-1:0],

    // ── Core-side write interface (one entry per core) ─────────────────────
    input  logic [NUM_CORES-1:0]  core_write_valid,
    input  logic [ADDR_WIDTH-1:0] core_write_addr  [NUM_CORES-1:0],
    input  logic [DATA_WIDTH-1:0] core_write_data  [NUM_CORES-1:0],
    output logic [NUM_CORES-1:0]  core_write_ready,

    // ── BRAM Port A (read) ─────────────────────────────────────────────────
    output logic [ADDR_WIDTH-1:0] ram_addr_a,
    output logic                  ram_rd_en_a,
    input  logic [DATA_WIDTH-1:0] ram_rd_data_a,

    // ── BRAM Port B (write) ────────────────────────────────────────────────
    output logic [ADDR_WIDTH-1:0] ram_addr_b,
    output logic [DATA_WIDTH-1:0] ram_wr_data_b,
    output logic                  ram_wr_en_b
);

    // ─────────────────────────────────────────────────────────────────────────
    // PARAMETERIZED ROUND-ROBIN ARBITER — shared macro logic
    //
    // Works for any NUM_CORES without any code changes.
    //
    // How it works:
    //   - `read_ptr`  is a register that remembers which core has the HIGHEST
    //     priority this cycle. After a grant, it advances to the next core.
    //   - The combinational block scans NUM_CORES slots starting at read_ptr,
    //     wrapping around with modulo. The first requesting core found wins.
    //   - Grant is combinational → zero latency, same cycle as request.
    //   - `read_ptr` updates on the clock edge after a grant fires.
    //
    // Example with NUM_CORES=4, read_ptr=2, requests from cores 0 and 3:
    //   Scan order: 2, 3, 0, 1
    //   Core 2 not requesting → skip
    //   Core 3 requesting     → GRANT core 3, advance ptr to 4%4=0
    //   Next cycle scan order: 0, 1, 2, 3 (core 0 now has highest priority)
    // ─────────────────────────────────────────────────────────────────────────

    localparam PTR_W = (NUM_CORES == 1) ? 1 : $clog2(NUM_CORES);

    // ── Read arbiter ──────────────────────────────────────────────────────────
    logic [PTR_W-1:0]    read_ptr;
    logic [NUM_CORES-1:0] read_grant;

    // Combinational: scan from read_ptr, grant the first requesting core found
    always_comb begin
        read_grant = '0;
        for (int i = 0; i < NUM_CORES; i++) begin
            automatic int idx = (read_ptr + i) % NUM_CORES;
            if (core_read_valid[idx] && read_grant == '0)
                read_grant[idx] = 1'b1;
        end
    end

    // Sequential: advance pointer to one past the granted core after each grant
    always_ff @(posedge clk or posedge rst) begin
        if (rst) read_ptr <= '0;
        else if (read_grant != '0) begin
            for (int i = 0; i < NUM_CORES; i++)
                if (read_grant[i]) read_ptr <= PTR_W'((i + 1) % NUM_CORES);
        end
    end

    assign core_read_ready = read_grant;
    assign ram_rd_en_a     = |core_read_valid;

    // MUX: winning core's address drives Port A
    always_comb begin
        ram_addr_a = '0;
        for (int i = 0; i < NUM_CORES; i++)
            if (read_grant[i]) ram_addr_a = core_read_addr[i];
    end

    // Broadcast read data to all cores — safe because only the winner's
    // scheduler pulses data_valid; stalled cores ignore the bus
    genvar i;
    generate
        for (i = 0; i < NUM_CORES; i++) begin : gen_read_data
            assign core_read_data[i] = ram_rd_data_a;
        end
    endgenerate

    // ── Write arbiter ─────────────────────────────────────────────────────────
    logic [PTR_W-1:0]    write_ptr;
    logic [NUM_CORES-1:0] write_grant;

    always_comb begin
        write_grant = '0;
        for (int i = 0; i < NUM_CORES; i++) begin
            automatic int idx = (write_ptr + i) % NUM_CORES;
            if (core_write_valid[idx] && write_grant == '0)
                write_grant[idx] = 1'b1;
        end
    end

    always_ff @(posedge clk or posedge rst) begin
        if (rst) write_ptr <= '0;
        else if (write_grant != '0) begin
            for (int i = 0; i < NUM_CORES; i++)
                if (write_grant[i]) write_ptr <= PTR_W'((i + 1) % NUM_CORES);
        end
    end

    assign core_write_ready = write_grant;
    assign ram_wr_en_b      = |core_write_valid;

    always_comb begin
        ram_addr_b    = '0;
        ram_wr_data_b = '0;
        for (int i = 0; i < NUM_CORES; i++) begin
            if (write_grant[i]) begin
                ram_addr_b    = core_write_addr[i];
                ram_wr_data_b = core_write_data[i];
            end
        end
    end

endmodule
