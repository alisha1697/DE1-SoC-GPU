// Dispatcher: splits N^2 total threads across cores, assigns starting thread IDs and counts.
// Handshake to each core: core_valid/core_ready (valid-ready) plus a one-cycle core_start pulse.
module dispatcher #(
    parameter NUM_CORES        = 2,
    parameter THREADS_PER_CORE = 2
)(
    input logic clk, rst, start,
    input logic [7:0] N,
    input logic [NUM_CORES-1:0] core_done, core_ready,

    output logic [NUM_CORES-1:0] core_valid, core_start,
    output logic [15:0] core_thread_id_start [NUM_CORES-1:0], core_thread_count [NUM_CORES-1:0],
    
    output logic done
);

    typedef enum logic [1:0] { IDLE, LATCH,DISPATCH, WAIT_DONE, FINISH } state_t;
    state_t state;

    logic [15:0] next_thread_id;
    logic [15:0] threads_remaining;
    logic [NUM_CORES-1:0] active_cores;
    logic [NUM_CORES-1:0] accepted;
    logic [NUM_CORES-1:0] finished;

    logic [15:0] wave_id    [NUM_CORES-1:0];
    logic [15:0] wave_count [NUM_CORES-1:0];
    logic [NUM_CORES-1:0] wave_valid;
    logic [15:0] wave_consumed;

    always_comb begin
        logic [15:0] head;
        logic [15:0] left;
        head = next_thread_id;
        left   = threads_remaining;

        for (int i = 0; i < NUM_CORES; i++) begin
            if (left > 16'd0) begin
                wave_id[i]    = head;
                wave_count[i] = (left >= 16'(THREADS_PER_CORE))
                                ? 16'(THREADS_PER_CORE) : left;
                wave_valid[i] = 1'b1;
                head = head + wave_count[i];
                left   = left   - wave_count[i];
            end else begin
                wave_id[i]    = '0;
                wave_count[i] = '0;
                wave_valid[i] = 0;
            end
        end

        wave_consumed = threads_remaining - left;
    end

    logic [NUM_CORES-1:0] handshake;
    assign handshake = core_valid & core_ready;

    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state <= IDLE;
            next_thread_id <= 0;
            threads_remaining <= 0;
            active_cores <= 0;
            accepted <= 0;
            finished <= 0;
            core_valid <= 0;
            core_start <= 0;
            done <= 0;
            for (int i = 0; i < NUM_CORES; i++) begin
                core_thread_id_start[i] <= 0;
                core_thread_count[i]    <= 0;
            end
        end else begin
            core_start <= 0;

            case (state)
                IDLE: begin
                    core_valid <= 0;
                    if (start) begin
                        done <= 1'b0;
                        next_thread_id <= 0;
                        threads_remaining <= 16'(N) * 16'(N);
                        state             <= LATCH;
                    end
                end

                LATCH: begin
                    for (int i = 0; i < NUM_CORES; i++) begin
                        core_thread_id_start[i] <= wave_id[i];
                        core_thread_count[i]    <= wave_count[i];
                    end
                    core_valid <= wave_valid;
                    active_cores <= wave_valid;
                    accepted <= '0;
                    finished <= '0;
                    next_thread_id <= next_thread_id + wave_consumed;
                    threads_remaining <= threads_remaining - wave_consumed;
                    state <= DISPATCH;
                end

                DISPATCH: begin
                    for (int i = 0; i < NUM_CORES; i++) begin
                        if (handshake[i]) begin
                            core_valid[i] <= 1'b0;
                            core_start[i] <= 1'b1;
                            accepted[i]   <= 1'b1;
                        end
                    end
                    if (((accepted | handshake) & active_cores) == active_cores) begin
                        state <= WAIT_DONE;
                    end
                end

                WAIT_DONE: begin
                    for (int i = 0; i < NUM_CORES; i++) begin
                        if (core_done[i]) finished[i] <= 1'b1;
                    end
                    if (((finished | core_done) & active_cores) == active_cores) begin
                        state <= (threads_remaining > 16'd0) ? LATCH : FINISH;
                    end
                end

                FINISH: begin
                    done <= 1'b1;
                    if (!start) state <= IDLE;
                end

                default: state <= IDLE;
            endcase
        end
    end

endmodule
