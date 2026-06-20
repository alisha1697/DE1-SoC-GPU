`timescale 1ns/1ps

module mem_controller_tb;

    localparam DATA_WIDTH = 16;
    localparam ADDR_WIDTH = 16;
    localparam NUM_CORES  = 2;
    localparam BRAM_LATENCY = 1;

    logic clk, rst;

    logic [NUM_CORES-1:0]  core_read_valid;
    logic [ADDR_WIDTH-1:0] core_read_addr [NUM_CORES-1:0];
    logic [NUM_CORES-1:0]  core_read_ready;
    logic [DATA_WIDTH-1:0] core_read_data [NUM_CORES-1:0];

    logic [NUM_CORES-1:0]  core_write_valid;
    logic [ADDR_WIDTH-1:0] core_write_addr [NUM_CORES-1:0];
    logic [DATA_WIDTH-1:0] core_write_data [NUM_CORES-1:0];
    logic [NUM_CORES-1:0]  core_write_ready;

    logic [ADDR_WIDTH-1:0] bram_a_addr;
    logic                  bram_a_rd_en;
    logic [DATA_WIDTH-1:0] bram_a_rd_data;

    logic [ADDR_WIDTH-1:0] bram_c_addr;
    logic [DATA_WIDTH-1:0] bram_c_wr_data;
    logic                  bram_c_wr_en;

    logic [DATA_WIDTH-1:0] bram_a_storage [0:255];
    logic [DATA_WIDTH-1:0] bram_c_storage [0:255];

    int errors = 0;
    int read_grants_per_core  [NUM_CORES-1:0];
    int write_grants_per_core [NUM_CORES-1:0];

    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin
        integer i;
        for (i = 0; i < 256; i = i + 1) begin
            bram_a_storage[i] = i * 2;
            bram_c_storage[i] = 0;
        end
    end

    always @(posedge clk) begin
        if (bram_a_rd_en)
            bram_a_rd_data <= bram_a_storage[bram_a_addr[7:0]];
    end

    always @(posedge clk) begin
        if (bram_c_wr_en)
            bram_c_storage[bram_c_addr[7:0]] <= bram_c_wr_data;
    end

    mem_controller #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDR_WIDTH(ADDR_WIDTH),
        .NUM_CORES(NUM_CORES)
    ) dut (
        .clk(clk),
        .rst(rst),

        .core_read_valid(core_read_valid),
        .core_read_addr(core_read_addr),
        .core_read_ready(core_read_ready),
        .core_read_data(core_read_data),

        .core_write_valid(core_write_valid),
        .core_write_addr(core_write_addr),
        .core_write_data(core_write_data),
        .core_write_ready(core_write_ready),

        .bram_a_addr(bram_a_addr),
        .bram_a_rd_en(bram_a_rd_en),
        .bram_a_rd_data(bram_a_rd_data),

        .bram_c_addr(bram_c_addr),
        .bram_c_wr_data(bram_c_wr_data),
        .bram_c_wr_en(bram_c_wr_en)
    );

    initial begin
        integer i;
        for (i = 0; i < NUM_CORES; i = i + 1) begin
            read_grants_per_core[i]  = 0;
            write_grants_per_core[i] = 0;
            core_read_valid[i]       = 0;
            core_write_valid[i]      = 0;
            core_read_addr[i]        = 0;
            core_write_addr[i]       = 0;
            core_write_data[i]       = 0;
        end
    end

    always @(posedge clk) begin
        integer i;

        if (!rst) begin
            if ((core_read_ready[0] + core_read_ready[1]) > 1) begin
                $error("VIOLATION: multiple read grants");
                errors = errors + 1;
            end

            if ((core_write_ready[0] + core_write_ready[1]) > 1) begin
                $error("VIOLATION: multiple write grants");
                errors = errors + 1;
            end

            if ((core_read_ready & ~core_read_valid) != 0) begin
                $error("VIOLATION: read grant without request");
                errors = errors + 1;
            end

            if ((core_write_ready & ~core_write_valid) != 0) begin
                $error("VIOLATION: write grant without request");
                errors = errors + 1;
            end

            if ((core_read_valid != 0) && (core_read_ready == 0)) begin
                $error("VIOLATION: read request but no grant");
                errors = errors + 1;
            end

            if ((core_write_valid != 0) && (core_write_ready == 0)) begin
                $error("VIOLATION: write request but no grant");
                errors = errors + 1;
            end

            for (i = 0; i < NUM_CORES; i = i + 1) begin
                if (core_read_ready[i])
                    read_grants_per_core[i] = read_grants_per_core[i] + 1;

                if (core_write_ready[i])
                    write_grants_per_core[i] = write_grants_per_core[i] + 1;
            end
        end
    end

    task do_reset;
        integer i;
        begin
            rst = 1;

            for (i = 0; i < NUM_CORES; i = i + 1) begin
                core_read_valid[i]  = 0;
                core_write_valid[i] = 0;
            end

            @(posedge clk);
            @(posedge clk);
            @(posedge clk);

            rst = 0;
            @(posedge clk);
        end
    endtask

    task clear_requests;
        integer i;
        begin
            for (i = 0; i < NUM_CORES; i = i + 1) begin
                core_read_valid[i]  = 0;
                core_write_valid[i] = 0;
            end
        end
    endtask

    task do_read_and_check;
        input integer core_idx;
        input [ADDR_WIDTH-1:0] addr;
        input [DATA_WIDTH-1:0] expected;
        begin
            core_read_addr[core_idx]  = addr;
            core_read_valid[core_idx] = 1;

            @(posedge clk);

            if (!core_read_ready[core_idx]) begin
                $error("Core %0d should have been granted read addr=0x%h", core_idx, addr);
                errors = errors + 1;
            end

            core_read_valid[core_idx] = 0;

            repeat (BRAM_LATENCY) @(posedge clk);

            if (bram_a_rd_data !== expected) begin
                $error("Core %0d read[0x%h]: expected 0x%h, got 0x%h",
                       core_idx, addr, expected, bram_a_rd_data);
                errors = errors + 1;
            end else begin
                $display("PASS: Core %0d read A[0x%h] = 0x%h",
                         core_idx, addr, bram_a_rd_data);
            end
        end
    endtask

    task do_write_and_check;
        input integer core_idx;
        input [ADDR_WIDTH-1:0] addr;
        input [DATA_WIDTH-1:0] data;
        begin
            core_write_addr[core_idx]  = addr;
            core_write_data[core_idx]  = data;
            core_write_valid[core_idx] = 1;

            @(posedge clk);

            if (!core_write_ready[core_idx]) begin
                $error("Core %0d should have been granted write addr=0x%h", core_idx, addr);
                errors = errors + 1;
            end

            core_write_valid[core_idx] = 0;

            @(posedge clk);

            if (bram_c_storage[addr[7:0]] !== data) begin
                $error("Write failed: C[0x%h] expected 0x%h, got 0x%h",
                       addr, data, bram_c_storage[addr[7:0]]);
                errors = errors + 1;
            end else begin
                $display("PASS: Core %0d wrote C[0x%h] = 0x%h",
                         core_idx, addr, data);
            end
        end
    endtask

    task test_solo_read;
        begin
            $display("\nTEST: solo reads");
            do_reset;

            do_read_and_check(0, 16'h0005, 16'h000A);
            clear_requests;
            @(posedge clk);

            do_read_and_check(1, 16'h000A, 16'h0014);
            clear_requests;
            @(posedge clk);

            do_read_and_check(0, 16'h0000, 16'h0000);
            clear_requests;
            @(posedge clk);
        end
    endtask

    task test_fairness;
        integer rg0_before;
        integer rg1_before;
        begin
            $display("\nTEST: round-robin fairness");
            do_reset;

            rg0_before = read_grants_per_core[0];
            rg1_before = read_grants_per_core[1];

            core_read_addr[0]  = 16'h0001;
            core_read_addr[1]  = 16'h0002;
            core_read_valid[0] = 1;
            core_read_valid[1] = 1;

            repeat (20) @(posedge clk);

            clear_requests;
            @(posedge clk);

            $display("Grants over 20 cycles: core0=%0d, core1=%0d",
                     read_grants_per_core[0] - rg0_before,
                     read_grants_per_core[1] - rg1_before);

            if ((read_grants_per_core[0] - rg0_before) < 8 ||
                (read_grants_per_core[0] - rg0_before) > 12) begin
                $error("Core 0 grants out of fair range");
                errors = errors + 1;
            end

            if ((read_grants_per_core[1] - rg1_before) < 8 ||
                (read_grants_per_core[1] - rg1_before) > 12) begin
                $error("Core 1 grants out of fair range");
                errors = errors + 1;
            end
        end
    endtask

    task test_no_starvation;
        integer served_in_cycle;
        integer c;
        begin
            $display("\nTEST: no starvation");
            do_reset;

            core_read_addr[0]  = 16'h0003;
            core_read_addr[1]  = 16'h0004;
            core_read_valid[0] = 1;

            repeat (5) @(posedge clk);

            core_read_valid[1] = 1;
            served_in_cycle = -1;

            for (c = 0; c < NUM_CORES * 2; c = c + 1) begin
                @(posedge clk);
                if (core_read_ready[1] && served_in_cycle < 0)
                    served_in_cycle = c;
            end

            clear_requests;

            if (served_in_cycle < 0) begin
                $error("Core 1 starved");
                errors = errors + 1;
            end else begin
                $display("PASS: Core 1 served within %0d cycles", served_in_cycle + 1);
            end
        end
    endtask

    task test_writes_to_matrix_c;
        begin
            $display("\nTEST: writes to MATRIX_C");
            do_reset;

            do_write_and_check(0, 16'h0030, 16'hCAFE);
            clear_requests;
            @(posedge clk);

            do_write_and_check(1, 16'h0040, 16'hBEEF);
            clear_requests;
            @(posedge clk);
        end
    endtask

    task test_random_stress;
        input integer n_cycles;
        integer i;
        integer c;
        begin
            $display("\nTEST: random stress for %0d cycles", n_cycles);
            do_reset;

            for (c = 0; c < n_cycles; c = c + 1) begin
                for (i = 0; i < NUM_CORES; i = i + 1) begin
                    core_read_valid[i]  = $random;
                    core_write_valid[i] = $random;
                    core_read_addr[i]   = $random;
                    core_write_addr[i]  = $random;
                    core_write_data[i]  = $random;
                end

                @(posedge clk);
            end

            clear_requests;
            $display("PASS: random stress complete");
        end
    endtask

    initial begin
        $display("Starting mem_controller_tb");

        #10;

        test_solo_read;
        test_fairness;
        test_no_starvation;
        test_writes_to_matrix_c;
        test_random_stress(200);

        $display("\n==============================");
        $display("Grants summary:");

        for (int i = 0; i < NUM_CORES; i = i + 1) begin
            $display("core %0d: read=%0d write=%0d",
                     i, read_grants_per_core[i], write_grants_per_core[i]);
        end

        if (errors == 0)
            $display("ALL TESTS PASSED");
        else
            $display("FAIL: %0d errors", errors);

        $display("==============================");

        $finish;
    end

    initial begin
        #200000;
        $fatal(1, "TIMEOUT");
    end

endmodule
