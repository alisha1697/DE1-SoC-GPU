// =============================================================================
// dispatcher.sv  
// Hands out blocks to whichever core is free, one at a time, as cores free up.
//
//
// Per-cycle behavior in RUN:
//   1. For any core whose handshake fires this cycle: drop valid, pulse start,
//      mark core as busy.
//   2. For any core whose done fires this cycle: mark core as free.
//   3. Pick the lowest-index free core (with no pending valid) and assign it
//      the next chunk of threads. Assign at most ONE core per cycle (otherwise
//      next_thread_id would need multiple updates).
//   4. When all work has been handed out AND all cores are idle, go to FINISH.
//
// Handshake: dispatcher asserts core_valid[i] when block params are ready;
// core asserts core_ready[i] when free; transfer completes on the cycle both
// are high; dispatcher then drops valid and pulses core_start for one cycle.
// =============================================================================
module dispatcher #(
    parameter NUM_CORES        = 2,
    parameter THREADS_PER_CORE = 2,
    parameter CIDX_W           = (NUM_CORES <= 1) ? 1 : $clog2(NUM_CORES)
)(
    input  logic                       clk, rst, start,
    input  logic [7:0]                 N,
    input  logic [NUM_CORES-1:0]       core_done, core_ready,
 
    output logic [NUM_CORES-1:0]       core_valid, core_start,
    output logic [15:0]                core_thread_id [NUM_CORES-1:0],
    output logic [15:0]                core_thread_count    [NUM_CORES-1:0],
 
    output logic                       done
);
 
    typedef enum logic [1:0] 
    { IDLE, RUN, FINISH } state_t;
    state_t state;
 

    //next thread to be assigned 
    logic [15:0]                 next_thread_id;

    logic [15:0]                 threads_remaining; //N*N
    logic [NUM_CORES-1:0]        core_busy;
 
  
    logic [NUM_CORES-1:0]        handshake;
    assign handshake = core_valid & core_ready;
 
  
    // Combinational: pick the next core to assign
    //   (lowest-index core that is free and has no pending valid)
    logic [CIDX_W-1:0]           next_core_idx;
    logic                        any_cores_selected;
 
    always_comb begin
        next_core_idx  = 0;
        // this signal is to differentiate between core0 being free vs core0 being busy 
        any_cores_selected = 1'b0; //? 

        // This is basically a priority encoder to pick the lowest-index free core with no pending valid
        // if (!core_busy[0] && !core_valid[0] && !handshake[0]) begin
        //     next_core_idx = 0;
        //     any_cores_selected = 1'b1;
        // end else if (!core_busy[1] && !core_valid[1] && !handshake[1]) begin
        //     next_core_idx = 1;
        //     any_cores_selected = 1'b1;
        // end else if (!core_busy[2] && !core_valid[2] && !handshake[2]) begin
        //     next_core_idx = 2;
        //     any_cores_selected = 1'b1;
        // end else if (!core_busy[3] && !core_valid[3] && !handshake[3]) begin
        //     next_core_idx = 3;
        //     any_cores_selected = 1'b1;
        // end    


        for (int i = 0; i < NUM_CORES; i++) begin
            // A core is assignable if it's not busy, not currently being
            // handshaked and not just handshaking this cycle.
            if (!core_busy[i] && !core_valid[i] && !handshake[i]
                && !any_cores_selected) begin
                next_core_idx  = i[CIDX_W-1:0];
                // this is to not overwrite 
                // only one core gets selected at a time 
                any_cores_selected = 1'b1;
            end
        end
    end
 
    logic [15:0] next_block_size;
    always_comb begin
        next_block_size = (threads_remaining >= 16'(THREADS_PER_CORE))
                          ? 16'(THREADS_PER_CORE)
                          : threads_remaining;
    end
 
    // FSM
    always_ff @(posedge clk or posedge rst) begin
        if (rst) begin
            state              <= IDLE;
            next_thread_id     <= 0;
            threads_remaining  <= 16'(N)*16'(N); 
            core_busy          <= 0;
            core_valid         <= 0;
            core_start         <= 0;
            done               <= 0;
            for (int i = 0; i < NUM_CORES; i++) begin
                core_thread_id[i] <= 0;
                core_thread_count[i]    <= 0;
            end
        end else begin
            
            case (state)
              
                IDLE: begin
                    core_valid <= 0;
                    if (start) begin
                        done              <= 0;
                        next_thread_id    <= 0;
                        //threads_remaining <= 16'(N) * 16'(N);
                        state             <= RUN;
                    end
                end
 
                RUN: begin
                    // Default: deassert core_start every cycle. The handshake
                    // logic below re-asserts it for exactly one cycle when a
                    // new block is handed off. Without this default-low, the
                    // start signal latches high forever and the scheduler's
                    // DONE state keeps re-entering INIT, looping the kernel.
                    core_start <= '0;

                    // Step 1: handle handshakes (drop valid, pulse start, mark busy)
                    for (int i = 0; i < NUM_CORES; i++) begin
                        if (handshake[i]) begin
                            core_valid[i] <= 1'b0;
                            core_start[i] <= 1'b1;
                            core_busy[i]  <= 1'b1;
                        end
                    end
 
                    // Step 2: handle completions
                    // NOTE: must NOT clear core_busy[i] for a core that is
                    // simultaneously being re-handshaked this same cycle
                    // (Step 1, above). core_start[i] is only registered this
                    // cycle -- it doesn't actually reach the core's `start`
                    // input until next cycle -- so a core beginning its NEXT
                    // block still reports its PREVIOUS kernel's done=1 for
                    // one more cycle. Without the !handshake[i] guard, this
                    // stale done clobbers Step 1's busy<=1 (last write in
                    // program order wins for repeated NBA writes to the same
                    // variable), making the dispatcher believe the core is
                    // free again one cycle later and hand it a THIRD block
                    // on top of the still-running second one, corrupting
                    // live thread_id_start/thread_count mid-kernel.
                    for (int i = 0; i < NUM_CORES; i++) begin
                        if (core_done[i] && !handshake[i]) begin
                            core_busy[i] <= 1'b0;
                        end
                    end
 
                    // Step 3: assign at most ONE new block this cycle
                    if (any_cores_selected && (threads_remaining > 16'd0)) begin
                        core_thread_id[next_core_idx] <= next_thread_id;
                        core_thread_count   [next_core_idx] <= next_block_size;
                        core_valid          [next_core_idx] <= 1'b1; //core has been asigned a block and is now valid
                        next_thread_id                      <= next_thread_id + next_block_size;
                        threads_remaining                   <= threads_remaining - next_block_size;
                    end
 
                    // Step 4: kernel done? no work left AND no cores busy AND no pending valids
                    if (threads_remaining == 16'd0
                        && core_busy  == 0
                        && core_valid == 0) begin
                        state <= FINISH;
                    end
                end

                FINISH: begin
                    done <= 1'b1;
                    state <= IDLE;
                end
 
                default: state <= IDLE;
            endcase
        end
    end
 
endmodule