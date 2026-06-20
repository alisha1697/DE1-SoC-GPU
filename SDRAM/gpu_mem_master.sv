module gpu_mem_master(
    input  logic        clk,
    input  logic        reset,   // active-high reset

    // Avalon-MM master outputs
    output logic [31:0] avm_address,
    output logic        avm_read,
    output logic        avm_write,
    output logic [31:0] avm_writedata,
    output logic [3:0]  avm_byteenable,

    // Avalon-MM master inputs
    input  logic [31:0] avm_readdata,
    input  logic        avm_waitrequest,
    input  logic        avm_readdatavalid,

    // Debug outputs: export these as conduit signals in Platform Designer
    output logic        test_done,
    output logic        test_pass,
    output logic        test_fail,
    output logic [3:0]  state_debug,
    output logic [31:0] readback_debug
);

    // Test values
    localparam logic [31:0] TEST_ADDR = 32'h0000_0000;
    localparam logic [31:0] TEST_DATA = 32'hDEAD_BEEF;

    // Wait a bit after reset before touching SDRAM
    localparam int STARTUP_WAIT_CYCLES = 1000;

    typedef enum logic [3:0] {
        S_RESET_WAIT     = 4'd0,
        S_ISSUE_WRITE    = 4'd1,
        S_WRITE_ACCEPTED = 4'd2,
        S_GAP            = 4'd3,
        S_ISSUE_READ     = 4'd4,
        S_WAIT_READ_DATA = 4'd5,
        S_CHECK          = 4'd6,
        S_PASS           = 4'd7,
        S_FAIL           = 4'd8
    } state_t;

    state_t state;
    logic [15:0] startup_count;
    logic [7:0]  gap_count;

    assign state_debug = state;

    always_ff @(posedge clk) begin
        if (reset) begin
            state          <= S_RESET_WAIT;
            startup_count  <= 16'd0;
            gap_count      <= 8'd0;

            avm_address    <= 32'd0;
            avm_read       <= 1'b0;
            avm_write      <= 1'b0;
            avm_writedata  <= 32'd0;
            avm_byteenable <= 4'b1111;

            test_done      <= 1'b0;
            test_pass      <= 1'b0;
            test_fail      <= 1'b0;
            readback_debug <= 32'd0;
        end else begin

            case (state)

                // Wait after reset so SDRAM controller has time to initialize.
                S_RESET_WAIT: begin
                    avm_read  <= 1'b0;
                    avm_write <= 1'b0;

                    test_done <= 1'b0;
                    test_pass <= 1'b0;
                    test_fail <= 1'b0;

                    if (startup_count == STARTUP_WAIT_CYCLES[15:0]) begin
                        state <= S_ISSUE_WRITE;
                    end else begin
                        startup_count <= startup_count + 16'd1;
                    end
                end

                // Start write transaction.
                // Hold address/write/writedata stable while waitrequest is high.
                S_ISSUE_WRITE: begin
                    avm_address    <= TEST_ADDR;
                    avm_writedata  <= TEST_DATA;
                    avm_byteenable <= 4'b1111;
                    avm_write      <= 1'b1;
                    avm_read       <= 1'b0;

                    if (!avm_waitrequest) begin
                        state <= S_WRITE_ACCEPTED;
                    end
                end

                // Write has been accepted. Drop write.
                S_WRITE_ACCEPTED: begin
                    avm_write <= 1'b0;
                    avm_read  <= 1'b0;

                    gap_count <= 8'd0;
                    state     <= S_GAP;
                end

                // Small gap between write and read.
                S_GAP: begin
                    avm_write <= 1'b0;
                    avm_read  <= 1'b0;

                    if (gap_count == 8'd20) begin
                        state <= S_ISSUE_READ;
                    end else begin
                        gap_count <= gap_count + 8'd1;
                    end
                end

                // Start read transaction.
                // Hold address/read stable while waitrequest is high.
                S_ISSUE_READ: begin
                    avm_address    <= TEST_ADDR;
                    avm_byteenable <= 4'b1111;
                    avm_read       <= 1'b1;
                    avm_write      <= 1'b0;

                    if (!avm_waitrequest) begin
                        state <= S_WAIT_READ_DATA;
                    end
                end

                // Read request accepted. Now wait for data to come back.
                S_WAIT_READ_DATA: begin
                    avm_read  <= 1'b0;
                    avm_write <= 1'b0;

                    if (avm_readdatavalid) begin
                        readback_debug <= avm_readdata;
                        state          <= S_CHECK;
                    end
                end

                // Compare readback against expected data.
                S_CHECK: begin
                    if (readback_debug == TEST_DATA) begin
                        state <= S_PASS;
                    end else begin
                        state <= S_FAIL;
                    end
                end

                S_PASS: begin
                    test_done <= 1'b1;
                    test_pass <= 1'b1;
                    test_fail <= 1'b0;

                    avm_read  <= 1'b0;
                    avm_write <= 1'b0;
                end

                S_FAIL: begin
                    test_done <= 1'b1;
                    test_pass <= 1'b0;
                    test_fail <= 1'b1;

                    avm_read  <= 1'b0;
                    avm_write <= 1'b0;
                end

                default: begin
                    state <= S_RESET_WAIT;
                end

            endcase
        end
    end

endmodule