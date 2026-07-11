# Verification

Directed SystemVerilog testbenches under `tb/`. Written to run in **ModelSim
ASE** (no SVA, no constrained-random, no UVM). Some also run under
**Verilator** with `--timing --binary`.

Status below is based on what the TB files claim and what was recently
rewritten on branch `feat/testbench-review-and-fixes`. Re-run before trusting
a green check.

---

## System test

### `tb/Top/gpu_top_tb.sv`

Exercises full `gpu_top` with `NUM_CORES=4`, `THREADS_PER_CORE=2`, `N=4`.
Instantiates real `dual_port_bram` (port A only), fills A/B, checks C against
a software golden matmul, counts writes, and prints arbiter
`stall_cycles` / `grant_count` plus per-core `core_stall_cycles`.

**Covers:** end-to-end correctness, multi-block dispatch, shared-memory
contention visibility.

**Does not deeply unit-test:** individual FSM states, arbiter fairness
edge cases (those have separate TBs).

**Run:** `gpu_top_sim.do` or `tb/Top/run.do`.

**Revisions:**
- **v1** — Pouya Hatami (initial system TB)
- **v2** — shared-memory / `dual_port_bram` evolution — **[EMPTY — exact authors]**

**Status:** treated as the main v2 proof. **[EMPTY — last known pass/fail
date on your machine]**

---

## Unit tests

### `tb/scheduler/scheduler_tb.sv` (rewritten for v2)

Memory BFM with `a/b/c_req_valid`, `req_ready`, `resp_valid`.

Listed cases in the file header:

1. Single block (`N=3`, `thread_count=2`)
2. Multi-block re-entry from DONE without reset
3. Partial block (`thread_count=1`)
4. `N=1`
5. Slow memory (`READ_LATENCY=2`, expects `stall_cycles > 0`)
6. Split A/B latency

**Revisions:**
- **v1** — Pouya Hatami (initial TB)
- **v2** — Bruce Liu (full rewrite for stall-aware scheduler)

**Status:** v2 rewrite — older README “needs rework” note is outdated.
**[EMPTY — confirm ModelSim + Verilator pass locally]**

### `tb/core/Core_tb.sv` (rewritten for v2)

Pure SV memory model (no Quartus `MATRIX_*` IP). Req/ready ports matching
v2 `core`. Header lists: 4×4 in four blocks, partial block, back-to-back
without reset, slow memory.

Dropped SVA that ASE cannot run.

**Revisions:**
- **v1** — Pouya Hatami (MATRIX_* IP, SVA, v1 ports)
- **v2** — Bruce Liu (full rewrite for req/ready core)

**Status:** v2 rewrite. **[EMPTY — confirm pass]**

### `tb/thread/thread_tb.sv`

Address generation + accumulation golden checks. Connects `kernel_init`.
Includes back-to-back kernels without full reset so accumulator clear is
tested.

**Revisions:**
- **v1** — Pouya Hatami (initial)
- **v2** — Bruce Liu (revised: `kernel_init`, back-to-back without reset)

**Status:** v2 revise. **[EMPTY — confirm pass]**

### `tb/fma/fma_tb.sv`

Directed FMA cases vs a small golden function. Timing of `valid_out` check
was fixed so it samples the registered output on the correct cycle.

**Revisions:**
- **v1** — Pouya Hatami (initial directed tests)
- **v2** — Bruce Liu (revised `valid_out` sampling timing)

**Status:** v2 revise. **[EMPTY — confirm pass]**

### `tb/dispatcher/dispatcher_tb.sv`

Fake cores always ready; checks thread ID assignment order, totals `N*N`,
`done` at end. Default `N=4`, `NUM_CORES=2` in the TB.

**Coverage gaps (visible from TB structure):** no backpressure when a core
stays busy; comment mentions 8×8 but only runs `N=4`.

**Revisions:**
- **v1** — Pouya Hatami (initial)
- **v2** — Bruce Liu (docs / light maintenance — **[EMPTY if you did more]**)

**Status:** historically passing.
**[EMPTY — reconfirm against current `dispatcher.sv`]**

### `tb/arbiter/rr_read_arbiter_tb.sv` / `rr_write_arbiter_tb.sv`

Standalone arbiter tests (+ `run_read.do` / `run_write.do`).

**[EMPTY — summarize exact scenarios from those files / pass status]**

### `src/tb/MemController/mem_controller_tb.sv`

Tests legacy `mem_controller` (not in v2 `gpu_top`). Still useful if someone
revives that module.

**Status:** reference only for current architecture.

---

## Coverage snapshot

| Testbench | Targets | v2-aligned? | Notes |
|-----------|---------|-------------|-------|
| `gpu_top_tb` | full chip | yes | Main gate |
| `scheduler_tb` | `scheduler` | yes (rewritten) | Confirm CI/local |
| `Core_tb` | `core` | yes (rewritten) | Confirm CI/local |
| `thread_tb` | `thread`+`fma` | yes | Has `kernel_init` test |
| `fma_tb` | `fma` | yes | Timing fix |
| `dispatcher_tb` | `dispatcher` | mostly | Thin stress coverage |
| `rr_*_arbiter_tb` | arbiters | yes | **[EMPTY details]** |
| `mem_controller_tb` | legacy | n/a | Not in `gpu_top` |

There is **no** formal coverage database (line/FSM/functional coverage
metrics). “Coverage” here means directed scenarios listed in the TBs.

---

## How to add a test

1. Put `tb/<name>/<name>_tb.sv` next to a `run.do` if useful.
2. Compile **`rtl/`** sources only.
3. Prefer procedural `$error` / counters over SVA so ASE works.
4. For memory, either a simple array BFM or `dual_port_bram` — match what
   the DUT expects (`req/ready` vs raw BRAM pins).

---

## Open verification items

- **[EMPTY]** Single checklist of last green runs (ModelSim / Verilator)
- **[EMPTY]** Whether `gpu_top_tb` asserts non-zero `stall_cycles` as a hard
  fail or only prints them
- **[EMPTY]** FPGA in-system check plan (LEDs / HEX / known C[0][0])
- Dispatcher TB: busy-core backpressure and larger `N`
- Keep `obj_dir_*` Verilator build trees out of git
