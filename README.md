# DE1-SoC-GPU

A SIMT GPU written in SystemVerilog, targeting the Terasic DE1-SoC FPGA
(Cyclone V). Executes parameterised NxN integer matrix multiply across multiple
hardware threads, with a dispatcher that hands out work blocks to free cores
as they become available.

The project is built from scratch for educational and portfolio purposes; it
does not depend on any vendor GPU IP. All RTL is hand-written and verified
in ModelSim ASE.

The current configuration is `NUM_CORES = 4`, `THREADS_PER_CORE = 2`.

### Architecture history

- **v1 (2 cores, archived design):** each core got a dedicated port on three
  dual-port BRAMs (one per matrix). Zero arbitration, because the Cyclone V
  M10K block already provides exactly the two simultaneous accesses a 2-core
  machine needs. This does not scale past `NUM_CORES = 2` — there's no third
  port to hand out.
- **v2 (current, 4 cores, shared memory controller):** all `NUM_CORES` cores
  share one physical read port on BRAM `A`, one read port on BRAM `B`, and one
  write port on BRAM `C`, each arbitrated by a round-robin arbiter
  (`rr_read_arbiter.sv` / `rr_write_arbiter.sv`). Cores issue valid/ready
  requests and visibly stall when they lose arbitration — that contention is
  the point of this revision, not a bug to hide.

### Memory architecture (v2 — shared, arbitrated)

```
core0 \
core1  \
core2   ─▶ A read arbiter (round-robin) ─▶ bram_A (port A only)
core3  /

core0 \
core1  \
core2   ─▶ B read arbiter (round-robin) ─▶ bram_B (port A only)
core3  /

core0 \
core1  \
core2   ─▶ C write arbiter (round-robin) ─▶ bram_C (port A only)
core3  /
```

Each core's `scheduler.sv` issues independent `a_req_valid`/`b_req_valid`
requests for its current `A[row][k]` / `B[k][col]` operands. The arbiter
grants one core per cycle; the granted core's read data comes back exactly
one cycle later (matching `dual_port_bram`'s registered-output latency) on
that core's `resp_valid`/`resp_data`. A core only proceeds to the FMA once
*both* operands have arrived — until then it keeps re-asserting its request
and stalls. Writes to `C` follow the same grant/stall pattern through a
separate write arbiter.

Every BRAM's port B is currently tied off/unused (free bandwidth reserved for
a future host-readback path) — the entire memory system, per matrix, now
funnels through a single shared port instead of one port per core. The
arbiters are parameterized on `NUM_CORES`, as is `gpu_top`'s core array and
the dispatcher, so scaling to 8 or 16 cores is a parameter change; only the
*contention* changes (see `stall_cycles` / `grant_count` below), which is
expected and instrumented rather than hidden.

The old v1 per-core-port design and the standalone `mem_controller.sv`
(a combined-A/B-memory arbiter explored and rejected in favor of separate
A/B/C arbiters) are kept in the repo as reference but are no longer wired
into `gpu_top`.

The board-level wrapper `rtl/de1soc_top.sv` instantiates the three BRAMs
(port A only) and wires them to `gpu_top`. The simulation testbench
instantiates the same BRAM modules, so what runs in ModelSim is what gets
synthesised.

### Fixed: done/start race in multi-block re-dispatch

Early v2 builds failed the system test intermittently when a core was reused
for a second block: `scheduler.sv`'s `done` was a registered output that only
cleared one cycle *after* `start` arrived, so for one cycle `core_start` and
`core_done` were both high for the same core. The dispatcher's shadow
`core_busy` bookkeeping (`dispatcher.sv`) samples `core_done` every cycle and
free's a core's slot on that signal — it caught the stale `done=1` right as
the core began its next kernel and incorrectly marked the core free again,
causing the dispatcher to hand out a *third* block on top of a still-running
second one. Since `thread_id_start`/`thread_count` are live (unlatched) inputs
into the core, that overwrote them mid-kernel, corrupting whichever block was
in flight. Symptom: a whole output row missing from `C`, write count short by
exactly one block's worth, `done` still asserted anyway.

Fix: `done` is now forced combinationally low the instant `start` is observed
(`assign done = done_r && !start;`), so the overlap cycle cannot exist
regardless of register timing.

### Fixed: second race in the dispatcher's own re-handshake cycle

The `scheduler.sv` fix above closes the overlap as *observed externally* once
`start` actually reaches the core — but it doesn't fully close the gap,
because `core_start[i]` is itself a register: when the dispatcher's `RUN`
state fires a handshake for a just-freed core, it does `core_start[i] <= 1'b1`
that same cycle, which only lands on the core's `start` input on the *next*
cycle. For that one handshake cycle, the core is still reporting `done=1`
from its *previous* kernel (since `start` hasn't arrived yet). `dispatcher.sv`
samples `core_done[i]` in the same `RUN` state, in a step that runs *after*
the handshake step in program order — so its `core_busy[i] <= 1'b0` overwrote
the handshake step's `core_busy[i] <= 1'b1` (last non-blocking write to the
same variable in a cycle wins). One cycle later the dispatcher believed the
core was free again and handed it a *third* block on top of the still-running
second one, corrupting live `thread_id_start`/`thread_count` mid-kernel.
Symptom was identical to the first race (a whole output row missing, write
count short), which is why it survived the first fix undetected until a full,
clean recompile actually exercised the multi-block re-dispatch path end to
end.

Fix: the completion-handling step in `dispatcher.sv` now ignores `core_done[i]`
for any core that is simultaneously handshaking this cycle
(`if (core_done[i] && !handshake[i]) core_busy[i] <= 1'b0;`), so a stale
`done` from the kernel that's about to be superseded can never clear the
busy bit the handshake step just set.

### Contention instrumentation

`gpu_top` exposes, per arbiter: `a_stall_cycles` / `b_stall_cycles` /
`c_stall_cycles` (cycles where at least one core was denied a grant) and
`*_grant_count[NUM_CORES]` (grants per core, for checking round-robin
fairness). Per-core `core_stall_cycles[NUM_CORES]` from `scheduler.sv` tracks
how long each core personally spent waiting on memory. `tb/Top/gpu_top_tb.sv`
prints all of these at the end of a run — with `NUM_CORES = 4` you should see
non-zero stall counts and roughly even grant counts across cores.

### Execution model

Work is partitioned at two levels:

1. The dispatcher slices the `N*N` output elements into blocks of
   `THREADS_PER_CORE` and hands one block to each free core via a
   valid / ready handshake plus a one-cycle `core_start` pulse.
2. Inside a core, the scheduler walks the inner product loop
   `for k = 0..N-1`, driving each thread's address generation and FMA in
   turn. After the last `k` it drives the per-thread `WRITE` phase that
   stores the accumulated result back to BRAM.

A `kernel_init` signal pulses for one cycle every time the scheduler enters
its `INIT` state. Threads use it as a synchronous reset for their
accumulator, so a hardware thread instance that is reused across multiple
block dispatches starts each kernel cleanly.

---

## Module breakdown

| File | Role |
|---|---|
| `rtl/de1soc_top.sv`      | Board-level wrapper. Instantiates gpu_top + 3 dual-port BRAMs (port A only) + button/LED/HEX I/O. **This is the synthesis top.** |
| `rtl/gpu_top.sv`         | GPU top. Instantiates dispatcher, `NUM_CORES` cores, and the A/B read arbiters + C write arbiter. Exposes one shared BRAM port per matrix plus contention counters. |
| `rtl/dispatcher.sv`      | Greedy block dispatcher with a priority encoder picking the lowest-index free core each cycle. Fully `NUM_CORES`-generic. |
| `rtl/core.sv`            | Per-core wrapper. Owns the scheduler, the thread instances, the A/B response latches, and the address MUXes. Talks to memory via req/resp handshake, not direct ports. |
| `rtl/scheduler.sv`       | Kernel FSM: IDLE -> INIT -> WAIT_AB -> NEXT_T/NEXT_K -> WRITE_REQ -> NEXT_W -> DONE_ST. Stall-aware: advances only on actual grants/responses from the arbiters, not a fixed latency assumption. |
| `rtl/rr_read_arbiter.sv` | Generic round-robin read arbiter, `NUM_CORES` -> 1 BRAM port. Used twice (A, B). Tracks per-core grants and stall cycles. |
| `rtl/rr_write_arbiter.sv`| Generic round-robin write arbiter, `NUM_CORES` -> 1 BRAM port. Used once (C). |
| `rtl/thread.sv`          | One output element. Address generation + accumulator + one FMA. |
| `rtl/fma.sv`             | Integer fused multiply-add: `result = a*b + c`. |
| `rtl/dual_port_bram.sv`  | True dual-port BRAM, inferable to Cyclone V M10K. Three instances back the GPU; only port A is wired up in the current (v2) architecture. |
| `rtl/mem_controller.sv`  | v1-era combined-A/B-memory round-robin arbiter. Unit-tested in isolation (`src/tb/MemController/mem_controller_tb.sv`). Superseded by the separate `rr_read_arbiter`/`rr_write_arbiter` pair in v2; kept as reference. |
| `rtl/gpu_mem_master.sv`  | Avalon-MM master stub for future SDRAM integration. |

### Parameters

All sizes are parameterised on every module so the same RTL can scale to
larger configurations without source edits.

| Parameter | Default | Meaning |
|---|---:|---|
| `DATA_WIDTH` | 16 | Width of A, B, C elements. |
| `ADDR_WIDTH` | 16 | Width of memory addresses. |
| `NUM_CORES`  |  4 | Number of compute cores instantiated. Generic — the core array, dispatcher, and all three arbiters are `for`/`generate` loops over this parameter, so 8 or 16 is a parameter edit, not a rewrite. More cores means more contention on the shared A/B/C ports, which shows up directly as higher `stall_cycles`. |
| `THREADS_PER_CORE` | 2 | Threads per core (block size). |

---

## Repository layout

```
DE1-SoC-GPU/
|- rtl/                  Canonical synthesisable SystemVerilog. Source of truth.
|- tb/                   ModelSim testbenches organised by module under test.
|  |- Top/               System-level testbench (gpu_top_tb.sv) - the main one.
|  |  |- run.do          Compiles directly from rtl/ via relative path. Use this.
|  |- core/              Unit-level testbench for a single core.
|  |- dispatcher/        ...
|  |- fma/               ...
|  |- scheduler/         ...
|  |- thread/            ...
|- src/tb/Top/           Old ModelSim project working directory (legacy).
|  |- rtl/               DEPRECATED duplicate of rtl/. Do not edit or compile
|  |                     from here. Could not be deleted in this dev
|  |                     environment, so it's kept as dead weight instead.
|  |- run.do             Now also points at canonical rtl/ + tb/Top/gpu_top_tb.sv
|  |                     via relative path, NOT at the rtl/ copy in this folder.
|- gpu_top_sim.do        Root-level run script. Run from the repo root; compiles
|                        rtl/*.sv (canonical) + tb/Top/gpu_top_tb.sv directly.
|- DE1-Soc/              Quartus project (DE1_SoC_Default.qpf and friends).
|- SDRAM/                SDRAM controller IP scaffolding (work-in-progress).
```

> History: this repo used to maintain `src/tb/Top/rtl/` as a manually-synced
> duplicate of `rtl/`, because the ModelSim project's compile paths pointed
> there. That duplication is what caused a real bug: at some point the copy
> step that mirrored `rtl/` into `src/tb/Top/rtl/` silently truncated several
> files mid-statement (`dispatcher.sv`, `mem_controller.sv`, `scheduler.sv`,
> `thread.sv`), which is exactly what produced a wall of `vlog` errors
> (`Undefined variable: 't'`, cascading `syntax error near "module"`, etc.)
> the next time someone compiled from that directory. All three `.do` scripts
> (`tb/Top/run.do`, `src/tb/Top/run.do`, `gpu_top_sim.do`) now compile RTL
> from the canonical `rtl/` only, via relative path — `src/tb/Top/rtl/` is no
> longer read by anything and should be treated as dead. It couldn't be
> deleted in this dev environment (permission denied), which is why it's
> still physically present; feel free to delete it yourself.

---

## Building and running

### Simulation (ModelSim ASE)

The system-level testbench at `tb/Top/gpu_top_tb.sv` exercises the full
pipeline end-to-end on a 4x4 matmul with `NUM_CORES = 4` sharing one BRAM
port per matrix. It sources inputs, monitors C writes, checks against a
software golden reference, and prints per-arbiter `stall_cycles` and
per-core `grant_count` so you can confirm the memory controller is actually
arbitrating (not just passing every request through).

Easiest: from a ModelSim Tcl console, run one of the canonical `.do` scripts
(they `vlib`/`vlog`/`vsim` for you, against the canonical `rtl/`):

```
do "C:/Users/User/Desktop/Year 3/DE1-SoC-GPU/tb/Top/run.do"
```

or, from a shell at the repo root:

```
vsim -do gpu_top_sim.do
```

If you'd rather type the commands by hand, run them from the repo root (not
`src/tb/Top/` — that directory's `rtl/` copy is deprecated, see Repository
layout above):

```
vlib work
vlog -sv rtl/*.sv tb/Top/gpu_top_tb.sv
vsim -gui work.gpu_top_tb
run -all
```

A passing run prints:

```
=== GPU SYSTEM TEST: 4x4 matmul (NUM_CORES=4, T/C=2, shared-memory-controller) ===
  ...
  PASS  C[0][0] = 90
  PASS  C[0][1] = 100
  ...
=== Memory-controller contention report ===
A-arbiter stall_cycles=...  B-arbiter stall_cycles=...  C-arbiter stall_cycles=...
  core0: a_grants=... b_grants=... c_grants=... core_stall_cycles=...
  ...
=== SYSTEM TEST PASSED ===
```

Per-module unit tests live under `tb/<module>/<module>_tb.sv` and can be run
the same way.

### Hardware (Quartus, DE1-SoC)

The Quartus project lives under `DE1-Soc/`. Open `DE1_SoC_Default.qpf`,
ensure the `rtl/*.sv` files are in the file set, set the top entity, and
run Compile. Hardware bring-up (push-button start, LED done indicator, HEX
display readback) is in progress and tracked separately.

---

## Verification status

| Test | Status | Notes |
|---|---|---|
| `fma_tb`        | passing | Directed cases for sign / overflow corners. |
| `thread_tb`     | passing | Address gen and accumulator. Interface unchanged in v2. |
| `scheduler_tb`  | **needs rework** | Written against the v1 `scheduler.sv` interface (fixed `BRAM_LATENCY`, `WAIT`/`FMA`/`WRITE` states, `mem_write_en`). v2's req/resp interface and `WAIT_AB`/`WRITE_REQ` states are not yet covered by a unit test — currently only exercised indirectly via `gpu_top_tb`. |
| `dispatcher_tb` | passing | Single-core and multi-core dispatch ordering. Interface unchanged in v2. |
| `core_tb`       | **needs rework** | Written against the v1 `core.sv` interface (`addr_A_out`/`matrix_a_data`/`we_C`). Needs updating for the `a_req_*`/`b_req_*`/`c_req_*` interface. |
| `mem_controller_tb` | passing | Round-robin arbiter standalone, v1-era combined-A/B design — kept as reference; not part of the current `gpu_top` wiring. |
| `gpu_top_tb`    | passing | 4x4 system-level matmul with `NUM_CORES=4`, shared-memory-controller architecture. Prints stall/grant counters. This is the test that currently proves the v2 architecture end-to-end. |

Unit-level `scheduler_tb` and `core_tb` are stale and should be rewritten
against the new req/resp interface before relying on them again — they are
not currently run as part of verifying v2.

Verification is directed-test based, written in synthesisable-subset
SystemVerilog so it runs in ModelSim ASE (which does not support SVA,
randomisation, coverage, or class-based constructs).

---

## Known limitations

- Integer only. No floating point or fp16.
- Fixed scheduling. No real ISA yet - the scheduler hardcodes the matmul
  loop structure. A small load/store/FMA/branch ISA with an instruction
  ROM is the next major addition; that turns this from a matmul
  accelerator into a programmable GPU.
- `scheduler_tb` and `core_tb` are stale (written against the v1 fixed-latency
  interface) and need to be rewritten against the v2 req/resp interface —
  see Verification status above.
- No DRAM. SDRAM controller IP is scaffolded under `SDRAM/` but the GPU
  currently runs entirely against on-chip BRAM.
- Shared single port per matrix means throughput at `NUM_CORES=4` is bounded
  by arbitration, not by raw BRAM bandwidth — `stall_cycles` grows with core
  count. Future work: bank each matrix across multiple BRAMs (split by
  address bit) so the arbiter only has to resolve contention within a bank,
  not across all cores.


