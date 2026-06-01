# DE1-SoC GPU Project Roadmap
## Target Roles: RTL Design / Computer Architecture / Verification — Compute Focus
## Format: ~1–1.5 hrs/day · ~10 weeks

> **How to use this:** Each session is one sitting. Do two tasks per session.
> Tick boxes as you go. Skipping ahead is fine but Phase 1 must be solid before Phase 4 matters.

---

## Phase 1 — Correctness (Weeks 1–2)
*Nothing else matters until every module passes its own testbench.*

### Session 1: Get Core_tb passing
- [ ] Recompile everything with the fixed `scheduler.sv` (DONE→IDLE) and `thread.sv` (`accumulator <= fma_result`)
- [ ] Run `vsim -gui -L altera_mf work.Core_tb` — check transcript: `writes_observed == 2`, both values correct
- [ ] If it hangs: add `$display("state=%0d t=%0d k=%0d", state, t_cnt, k_cnt)` inside the scheduler FSM and re-run to find where it's stuck

### Session 2: Audit the FMA testbench
- [ ] Read `fma_tb.sv` — does it test: a=0, b=0; valid_in low for multiple cycles; back-to-back valid_in; accumulator overflow?
- [ ] Add any missing cases inline — keep it short, under 50 lines total
- [ ] Change `$display` mismatches to `$fatal` so a failing test actually stops simulation

### Session 3: Audit the Thread testbench
- [ ] Manually trace `addr_A` for thread_id=0, N=4, k=0..3: expected = 0, 1, 2, 3. Verify sim output matches
- [ ] Manually trace `addr_B` for thread_id=0, N=4, k=0..3: expected = 0, 4, 8, 12
- [ ] Verify `result` after k=3 equals the correct dot product (not just the last partial product)

### Session 4: Audit the Scheduler testbench
- [ ] Verify `data_valid[t]` fires exactly once per (k, t) pair — add a counter and assert `total_fires == N * thread_count`
- [ ] Test DONE→IDLE: after first block finishes, pulse `start` again, verify second block runs correctly
- [ ] Test `thread_count=1` edge case — make sure `is_last_thread` fires on the first thread

### Session 5: Audit the Dispatcher testbench
- [ ] Verify for N=4, NUM_CORES=2, THREADS_PER_CORE=2: dispatcher hands out exactly 8 blocks (N*N/THREADS_PER_CORE)
- [ ] Verify no two cores ever receive the same `thread_id` value — add a check that logs all assigned IDs
- [ ] Verify `done` fires exactly once and only after all cores finish

### Session 6: Wire up gpu_top — control path
- [ ] Instantiate the dispatcher in `gpu_top.sv`
- [ ] Instantiate `NUM_CORES` cores using a `generate` loop
- [ ] Wire: `core_valid`, `core_start`, `core_thread_id`, `core_thread_count`, `core_done`, `core_ready`

### Session 7: Wire up gpu_top — memory path
- [ ] Decision: share a single A/B read port between all cores (arbitrate by round-robin or priority), or give each core its own port
- [ ] For now: priority arbitration — core 0 wins ties. Wire `ram_addr_a` as a MUX driven by the lowest-index active core
- [ ] Wire the C write port similarly — only one core writes at a time (guaranteed by scheduler, verify this)

### Session 8: gpu_top end-to-end simulation
- [ ] Write `gpu_top_tb.sv`: instantiate `gpu_top` + `MATRIX_A/B/C`, load 2x2 MIF files, assert `start`, wait for `done`
- [ ] Verify MATRIX_C contains `[[7,10],[15,22]]` for A=[[1,2],[3,4]], B=[[1,2],[3,4]]
- [ ] Run with NUM_CORES=1 first, then NUM_CORES=2 — verify same result

---

## Phase 2 — Architecture (Weeks 3–5)
*This is what separates your project from a tutorial. Comp arch interviews ask about tradeoffs.*

### Session 9: Roofline analysis — count your cycles
- [ ] Derive a formula: cycles per matmul = `N * thread_count * (WAIT + FMA + NEXT_T cycles) + thread_count * (WRITE + NEXT_W cycles)`
- [ ] Plug in N=4, thread_count=2 — compute the expected cycle count, then verify against simulation
- [ ] Create `doc/PERF.md` and write this formula with numbers. This is comp arch thinking made visible.

### Session 10: Memory bandwidth analysis
- [ ] Count memory accesses per matmul: `2 * N^3` reads (A and B each read N^2*N times) + `N^2` writes (C)
- [ ] For N=4: 128 reads + 16 writes = 144 memory ops. What fraction of cycles are memory-bound vs compute-bound?
- [ ] Identify the bottleneck: at what N does memory dominate? Write the crossover point in `PERF.md`

### Session 10b: Roofline plot (optional but impressive)
- [ ] Plot operational intensity (ops/byte) vs attainable throughput for your design — one data point per (N, THREADS_PER_CORE) config
- [ ] Any free tool works: matplotlib, Excel, even a hand sketch scanned in

### Session 11: Pipeline the inner loop — overlap BRAM read with FMA
- [ ] Current: for each (k, t): WAIT → FMA → NEXT_T. Each iteration = 3 cycles, only 1 useful.
- [ ] Idea: issue the address for thread T+1 while thread T's FMA is running — reduces stall cycles
- [ ] Sketch the new scheduler state machine on paper first. The key question: does t_select need to be 1 cycle ahead of data_valid?
- [ ] Implement the change in scheduler.sv and re-run Core_tb — same output, fewer cycles

### Session 12: Scale thread count to 4
- [ ] Set `THREADS_PER_CORE=4` in the testbench — re-run, verify all 16 results of a 4x4 matmul are correct
- [ ] Measure cycle count: should be roughly half of `THREADS_PER_CORE=2` (minus dispatch overhead)
- [ ] Update `PERF.md` with the new data point

### Session 13: Scale core count to 4
- [ ] Set `NUM_CORES=4` in `gpu_top_tb` — verify dispatcher correctly assigns all blocks and done fires
- [ ] Check that memory arbitration still works (4 cores competing for 1 read port — do you need a proper arbiter?)
- [ ] Measure total cycles vs NUM_CORES=2: does it halve? If not, the memory bus is your bottleneck. Document this.

### Session 14: Add a proper round-robin memory arbiter
- [ ] Write a small `mem_arbiter.sv` module: N requestors, 1 port, round-robin priority
- [ ] Interface: `req[N]`, `gnt[N]`, `addr_in[N]` → `addr_out`, `gnt_valid`. 1-cycle grant latency.
- [ ] Plug it into gpu_top replacing the crude priority MUX. Re-run end-to-end sim — same result.

### Session 15: INT8 mode — parameterize DATA_WIDTH=8
- [ ] Set `DATA_WIDTH=8` in the testbench — do all modules compile cleanly?
- [ ] FMA product is `[2*8-1:0]` = 16-bit. Verify truncation to 8 bits is handled correctly (it already is via `product[DATA_WIDTH-1:0]`)
- [ ] Update `PERF.md`: INT8 doubles DSP throughput. Note this explicitly — it's directly relevant to AI accelerator roles.

### Session 16: Add a second kernel — vector dot product
- [ ] Write `dot_product_thread.sv`: simpler than matmul — each thread computes one element of A·B (no 2D indexing)
- [ ] The point is to show the architecture generalises beyond one kernel
- [ ] You don't need to fully verify it — a quick simulation showing `result == sum(A[i]*B[i])` is enough

---

## Phase 3 — Verification Uplift (Weeks 6–7)
*Verification engineers are hired to find bugs other people miss. Show you think like one.*

### Session 17: Assertions — FMA
- [ ] Add to `fma_tb.sv`: `assert(valid_out === $past(valid_in)) else $error("valid_out must lag valid_in by exactly 1 cycle");`
- [ ] Add: if `valid_in` is 0 for 3 consecutive cycles, `result` must not change
- [ ] These are the kind of assertions that catch real integration bugs, not just unit-test bugs

### Session 18: Assertions — Scheduler
- [ ] Assert `mem_write_en` is never high during WAIT, FMA, NEXT_T, NEXT_K states
- [ ] Assert `data_valid` is never high for two consecutive cycles (it's a 1-cycle pulse)
- [ ] Assert `done` de-asserts within 1 cycle of `rst` going high

### Session 19: Assertions — Dispatcher
- [ ] Assert `core_start[i]` is a 1-cycle pulse — never held high for 2+ cycles
- [ ] Assert two cores never receive the same `thread_id_start` in the same run
- [ ] Assert sum of all `thread_count` assignments across the run equals `N*N`

### Session 20: Write a 1-page verification plan
- [ ] For each module (FMA, thread, scheduler, dispatcher, core): write what you're testing, what the pass/fail criterion is, and what bugs you are specifically trying to catch
- [ ] Save as `doc/VERIFICATION_PLAN.md`
- [ ] This is a real deliverable in verification jobs — it shows you know the discipline, not just the toolchain

### Session 21: Corner cases — edge inputs
- [ ] N=1: 1x1 matrix multiply. Run Core_tb with N=1, thread_count=1. Verify `result = A[0]*B[0]`.
- [ ] N=1, THREADS_PER_CORE=2: one thread is active, one is disabled (`en=0`). Verify the disabled thread writes nothing.
- [ ] thread_count=1 with THREADS_PER_CORE=4: verify the other 3 threads are silent

### Session 22: Reset robustness
- [ ] Mid-compute reset: assert `rst` while scheduler is in FMA state. Verify clean recovery — no stale `result`, no spurious write.
- [ ] Back-to-back runs without reset: run two blocks in sequence using DONE→IDLE, verify second output is correct
- [ ] Fix the async/sync reset inconsistency: `dispatcher.sv` uses `posedge rst` (async), `scheduler.sv` uses synchronous. Pick one style and document it.

### Session 23: Manual coverage tracking
- [ ] In `Core_tb.sv`, add integer counters: `hits_WAIT`, `hits_FMA`, `hits_WRITE`, etc., incremented each cycle by sampling `state`
- [ ] At `$finish`, print all counters
- [ ] This is the ModelSim-free equivalent of a covergroup — shows you understand coverage without needing a license

---

## Phase 4 — Synthesis & Timing (Weeks 8–9)
*This is the gap most university projects never close. It's what ASIC/FPGA companies specifically look for.*

### Session 24: First Quartus compile — get to zero errors
- [ ] Add all `.sv` files to a Quartus project: Cyclone V, device 5CSEMA5F31C6 (DE1-SoC)
- [ ] Fix synthesis errors: latch inference (always missing else), undriven outputs, implicit net declarations
- [ ] Goal: 0 errors. Every warning should be read and either fixed or consciously accepted

### Session 25: Read the timing report
- [ ] Open Timing Analyzer after compile. Find the critical path (worst negative slack)
- [ ] Identify which module it's in. Write it down: `"Critical path: X → Y → Z, slack = -Nns"`
- [ ] Target: Fmax ≥ 100 MHz. If you're below, you have work to do.

### Session 26: Fix the critical path
- [ ] If `row * N` (in thread.sv `addr_A = base_addr_A + (row * N) + k`) is on the critical path: register `row_times_N` separately
- [ ] A multiplier on the critical path at 100 MHz is almost always fixable by pre-computing and registering the intermediate
- [ ] Re-synthesise and compare Fmax before and after

### Session 27: Check DSP mapping
- [ ] In the Quartus compilation report: search for DSP blocks used
- [ ] The multiplier in `fma.sv` (`a * b`) should map to a DSP, not LUTs
- [ ] If it's in LUTs: add `(* multstyle = "dsp" *)` attribute or set in Quartus settings → re-compile → verify DSP count goes up

### Session 28: Resource utilization table
- [ ] Record: ALMs, DSPs, M10K blocks used for (NUM_CORES=1, THREADS_PER_CORE=2), then (NUM_CORES=2, THREADS_PER_CORE=4)
- [ ] Add to `PERF.md`: does doubling cores double resource use? (It should for compute, not necessarily for memory)
- [ ] This table is what you show in an interview when asked "how did you evaluate your design?"

---

## Phase 5 — Portfolio (Week 10)
*A good project that nobody can understand in 30 seconds is invisible. Fix that.*

### Session 29: Architecture block diagram
- [ ] Draw: FMA → Thread → Core (scheduler + N threads + addr MUX) → Dispatcher → gpu_top → SDRAM
- [ ] Show the key buses: addr_A, addr_B, addr_C, wdata_C, we_C, data_valid, t_select
- [ ] Export as PNG, commit to `doc/architecture.png`

### Session 30: Performance summary table
- [ ] Fill in this table for at least 3 configurations and add to `PERF.md`:

| N | NUM_CORES | THREADS_PER_CORE | Cycles | Throughput (2N³ ops / cycles) | Fmax (MHz) | GOPs |
|---|-----------|------------------|--------|-------------------------------|------------|------|
| 4 | 1 | 2 | ? | ? | ? | ? |
| 4 | 2 | 2 | ? | ? | ? | ? |
| 4 | 2 | 4 | ? | ? | ? | ? |

### Session 31: README
- [ ] Para 1: What it is — "A parameterized FPGA GPU core for matrix multiplication, implemented in SystemVerilog on a DE1-SoC (Cyclone V). NUM_CORES cores, each running THREADS_PER_CORE parallel threads."
- [ ] Para 2: Architecture — link to `doc/architecture.png`
- [ ] Para 3: Simulation — exact ModelSim commands needed to reproduce results
- [ ] Para 4: Performance results — link to `PERF.md`
- [ ] Para 5: Known limitations and what you'd do next

### Session 32: Repository hygiene
- [ ] Add `.gitignore` excluding: `db/`, `incremental_db/`, `output_files/`, `*.qpg`, `*.qtl`, `*.qdb`, `*.qsf.bak`, `work/`, `*.mpf`, `transcript`
- [ ] Reorganise: `src/rtl/` for RTL, `src/tb/` for testbenches, `doc/` for docs, `constraints/` for SDC files
- [ ] Make sure every file in `src/rtl/` has a clear header comment: module purpose, inputs/outputs, key parameters

### Session 33: "What's next" section
- [ ] Write 5 concrete extensions in the README with estimated effort and expected gain:
  1. Softmax kernel — reuse the thread dispatch mechanism, add exp() approximation in the FMA stage
  2. Scratchpad memory — shared on-chip SRAM per core, eliminates redundant A/B reads for tiled matmul
  3. Tiled matrix multiply — break N×N into tiles that fit in scratchpad, drastically reduces external memory traffic
  4. FP16 support — replace the INT16 multiplier with a half-precision FP multiplier (fits in one DSP on Cyclone V)
  5. HPS-to-GPU driver — ARM Cortex-A9 on the DE1-SoC writes matrices to SDRAM via the Avalon bridge, triggers the GPU, reads back C
- [ ] This section tells an interviewer you understand where the real challenges are

---

## Stretch Goals — Elite Tier
*Do one of these and your project is genuinely research-adjacent.*

- [ ] **Tiled matmul with scratchpad**: Load a tile of A and B into on-chip SRAM (true scratchpad), compute, write tile of C back. Reduces DRAM reads by factor N (for NxN tiles). This is how cuBLAS works. Show cycle count improvement.
- [ ] **Formal verification of FMA**: Install SymbiYosys (free). Write a `.sby` file that formally proves `result == a*b + c` for all inputs in 1 cycle. Formal pass = unbounded correctness guarantee.
- [ ] **HPS demo**: Write a C program for the ARM HPS that (1) generates two random matrices, (2) writes them to SDRAM, (3) asserts the GPU start signal via memory-mapped register, (4) waits for done, (5) reads MATRIX_C from SDRAM, (6) compares to a software matmul. Full end-to-end demo on real hardware.
- [ ] **CPU baseline comparison**: Time the same matmul on the HPS ARM using `clock_gettime()`. Compute GPU speedup. Even a modest speedup (e.g., 3x for small N) makes for a compelling result.
- [ ] **Roofline plot**: Plot your design on an arithmetic intensity vs throughput graph. One point per (N, THREADS_PER_CORE) config. This is the standard language of accelerator design.
- [ ] **Write a design spec**: 4–5 pages covering architecture, design decisions, tradeoffs considered, and performance analysis. This is what a senior engineer submits before tapeout. It signals seniority.

---

## Interview Ammunition — Questions This Project Lets You Answer

By the end of this roadmap you will have concrete answers to:

- "Walk me through your GPU architecture." → Block diagram, FSM, memory interface.
- "What's the critical path and how did you fix it?" → Sessions 25–26.
- "How did you verify correctness?" → Sessions 17–23, verification plan.
- "What's your throughput and what's limiting it?" → PERF.md, roofline analysis.
- "What would you do differently?" → Sessions 32–33, stretch goals.
- "Have you synthesised it? What's the Fmax?" → Sessions 24–28.
- "Have you worked with memory arbitration?" → Session 14.
- "Do you understand DSP resource mapping?" → Session 27.

---

*Last updated: May 2026*
