# Architecture

This note describes the **v2** design as it exists in `rtl/`. Anything marked
**[EMPTY]** or **[INFERRED]** needs a teammate to confirm — do not treat those
as facts from the code.

---

## Hierarchy

```
de1soc_top                    (synthesis top — board I/O + BRAMs)
 └── gpu_top
      ├── dispatcher
      ├── core[0..NUM_CORES-1]
      │    ├── scheduler
      │    └── thread[0..THREADS_PER_CORE-1]
      │         └── fma
      ├── rr_read_arbiter   (matrix A)
      ├── rr_read_arbiter   (matrix B)
      └── rr_write_arbiter  (matrix C)
 └── dual_port_bram × 3     (A, B, C — port A used, port B tied off)
```

`mem_controller.sv` and `gpu_mem_master.sv` live under `rtl/` but are **not**
instantiated by `gpu_top` today.

---

## `de1soc_top`

**Purpose:** Board wrapper. Maps `CLOCK_50`, `KEY`, `LEDR`, `HEX*` to the GPU
and instantiates three `dual_port_bram`s.

**Key ports / behaviour (from code):**

- `rst = ~KEY[0]`, `start = ~KEY[1]`
- `N`, base addresses hardcoded (`N_MAT` default 4, bases 0)
- Only BRAM port A is connected to `gpu_top`; port B is unused
- `LEDR[0]` reflects `done`; HEX shows a latched C value on write
  **[EMPTY — exact HEX mapping / which C element — confirm in file body]**

**Design note (from file header):** 4 cores share one port per matrix on
purpose, so arbitration and stall counters matter. Port B left free for a
possible future host readback path.

---

## `gpu_top`

**Purpose:** Wires dispatcher, cores, and three arbiters. Exposes one shared
BRAM interface per matrix plus debug counters.

**Parameters:** `DATA_WIDTH`, `ADDR_WIDTH`, `NUM_CORES=4`, `THREADS_PER_CORE=2`,
`BRAM_READ_LATENCY=1`.

**Connections:**

| Side | Signals |
|------|---------|
| Host | `clk`, `rst`, `start`, `N`, `base_addr_A/B/C`, `done` |
| BRAM A/B | `bram_*_addr`, `bram_*_rd_en`, `bram_*_rd_data` |
| BRAM C | `bram_c_addr`, `bram_c_wr_data`, `bram_c_wr_en` |
| Debug | `a/b/c_grant_count[]`, `a/b/c_stall_cycles`, `core_stall_cycles[]` |

**Why shared ports (from comments in this file):** dual-port BRAM only gives
two physical ports, so a dedicated-port-per-core scheme does not scale past
two cores. Contention is expected and measured.

---

## `dispatcher`

**Purpose:** Hands out blocks of `THREADS_PER_CORE` thread IDs until
`N*N` work is done.

**FSM:** `IDLE` → `RUN` → `FINISH`.

**Handshake:** asserts `core_valid[i]` with `core_thread_id` /
`core_thread_count`; when `core_ready[i]` is also high, drops valid and
pulses `core_start[i]` for one cycle. Assigns **at most one core per cycle**
(comment: otherwise `next_thread_id` would need multiple updates).

**Busy tracking:** `core_busy` is set on handshake and cleared on
`core_done` — but **not** if that core is handshaking the same cycle
(`if (core_done[i] && !handshake[i])`). That guard exists because of a
documented race where stale `done` cleared busy while a new start was in
flight (see scheduler `done` note below).

**Default `NUM_CORES=2`** in the module parameter list; callers override.

**[EMPTY]** Why lowest-index-first priority vs pure round-robin for dispatch
(code uses lowest free index; rationale not stated beyond “one per cycle”).

---

## `core`

**Purpose:** One compute unit: scheduler + threads + address muxes + A/B
response latches.

**Dispatcher side:** `valid` / `ready` / `start` / `thread_id_start` /
`thread_count`. `ready = !busy`. `valid` is intentionally unused for control
(only `start` kicks the kernel) — flagged with a Verilator unused lint
waiver.

**Memory side:** `a_req_*`, `b_req_*`, `c_req_*` (no fixed latency assumption).

**Latches:** `a_latched` / `b_latched` capture `*_resp_data` when
`*_resp_valid` is high so threads keep a stable value after the shared bus
moves on.

**Muxes:** `t_select` picks which thread’s `addr_A/B/C` and `result` drive
the request buses.

---

## `scheduler`

**Purpose:** Per-core kernel FSM. Stall-aware: waits for real grants /
responses, not a fixed `BRAM_LATENCY`.

**States (from code):** `IDLE`, `INIT`, `WAIT_AB`, `NEXT_T`, `NEXT_K`,
`WRITE_REQ`, `NEXT_W`, `DONE_ST`.

Loop structure (from header comments):

```
for k = 0..N-1:
  for t = 0..thread_count-1:
    WAIT_AB until both A and B responses have arrived
    pulse data_valid[t] and fma_en[t]
for t = 0..thread_count-1:
  WRITE_REQ until c_req_ready
```

**`kernel_init`:** one-cycle pulse when entering a new kernel from `IDLE` or
`DONE_ST` via `start` — threads clear accumulators.

**`done`:** `assign done = done_r && !start` so `done` cannot stay high in
the same cycle as a new `start` (documented race with dispatcher busy
tracking).

**`stall_cycles`:** increments while stuck in `WAIT_AB` without both operands,
or in `WRITE_REQ` without `c_req_ready`.

**[INFERRED]** Independent A/B request channels exist so A and B can be
granted on different cycles under separate arbiters — the code clearly
supports that; the “why not one combined request” tradeoff is not written
down beyond the shared-memory comments in `gpu_top`.

---

## `thread`

**Purpose:** One output element `C[row][col]`.

**Address math (combinational):**

- `row = thread_id / N`, `col = thread_id % N`
- `addr_A = base_A + row*N + k`
- `addr_B = base_B + k*N + col`
- `addr_C = base_C + row*N + col`

**Accumulator:** updated from FMA when `fma_valid_out`; `result` latched when
`k == N-1 && fma_valid_out`. `kernel_init` zeros accumulator and result
(priority over `en`).

**`data_ready`:** tied high after reset (“always ready”) — not used by
`core` (left unconnected).

**Limitation visible in code:** `product` in FMA is truncated to
`DATA_WIDTH` bits (`product[DATA_WIDTH-1:0]`) before add — large products
wrap. No saturation logic.

---

## `fma`

**Purpose:** Registered `result = (a*b)[DATA_WIDTH-1:0] + c` when `valid_in`.
`valid_out` tracks `valid_in` by one cycle (registered).

Simple and synthesizable. No pipeline beyond that one register stage.

---

## `rr_read_arbiter`

**Purpose:** `NUM_CORES` → 1 BRAM read port, round-robin.

**Protocol:** combinational `req_ready` = grant same cycle; `resp_valid`
pulses `BRAM_READ_LATENCY` cycles later for the granted core. Data is
broadcast; only the winner’s `resp_valid` bit is set.

**Fairness counters:** `grant_count[i]`, `stall_cycles` (cycles with a
request but no grant — **[EMPTY confirm exact stall condition in remaining
lines of file]**).

Header notes `BRAM_READ_LATENCY=1` for `dual_port_bram` sim, `=2` for some
Quartus `altsyncram` / `matrix_ab` builds.

---

## `rr_write_arbiter`

Same round-robin idea for writes. Grant means the write commits that cycle
(no response channel). Loser keeps `req_valid` high and retries.

---

## `dual_port_bram`

True dual-port, registered read, `DEPTH=256` words by default, `ramstyle`
hint for M10K. Address is sliced to `$clog2(DEPTH)`.

**Stale comment risk:** header still mentions “scheduler’s BRAM_LATENCY=1”;
v2 latency is parameterized on the **arbiter** as `BRAM_READ_LATENCY`.
**[EMPTY — update comment or confirm still accurate for your FPGA path]**

Also: header still describes the old “two cores, one port each, zero
arbitration” story. v2 uses one port + arbiter; port B is unused in
`de1soc_top`.

---

## `mem_controller` (reference only)

Round-robin arbiter for a combined read BRAM and write BRAM (older
experiment). Unit-tested under `src/tb/MemController/`. **Not connected in
`gpu_top`.** README says separate A/B/C arbiters replaced it.

**[EMPTY]** Full story of why combined A/B was rejected — only the README
one-liner exists.

---

## `gpu_mem_master`

Avalon-MM master stub / Quartus Qsys placeholder. Contains
`<connected-to-...>` style connections — not a complete standalone RTL
block for simulation.

**[EMPTY]** Intended SDRAM address map / who drives it.

---

## Cross-cutting design decisions

| Decision | What the code/comments say | Still open |
|----------|----------------------------|------------|
| Shared single port per matrix | Scales past 2 cores; stalls are the point | Banking for more bandwidth mentioned as future work in old README |
| Separate A and B read arbiters | Independent grants / latencies | **[EMPTY]** measured benefit vs one arbiter |
| `kernel_init` | Clears thread state on block reuse | — |
| Combinational `done && !start` | Fixes dispatcher busy race | — |
| Ignore `core_done` during handshake | Second race fix in dispatcher | — |
| Integer only / hardcoded matmul loop | Explicit in project docs | ISA / instruction ROM not started |

---

## Gaps for teammates to fill

1. **[EMPTY]** Author list / ownership per module  
2. **[EMPTY]** Measured FPGA timing / Fmax / resource use  
3. **[EMPTY]** Why `THREADS_PER_CORE=2` specifically for the demo  
4. **[EMPTY]** Host path to load A/B into BRAM on hardware (MIF? HPS? buttons only?)  
5. **[EMPTY]** Plan for `SDRAM/` integration beyond the stub  
