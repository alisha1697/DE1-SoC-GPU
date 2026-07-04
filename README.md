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
grants one core per cycle; the granted core's read data comes back
`BRAM_LATENCY` cycles later (a parameter on `rr_read_arbiter.sv`, threaded
through `gpu_top` as `BRAM_READ_LATENCY`) on that core's
`resp_valid`/`resp_data`. Simulation's `dual_port_bram` is 1-cycle latency
(the default); the real hardware build's `matrix_ab` IP is 2 cycles — see
"Fixed: matrix-C corruption from a BRAM read-latency mismatch" below. A core
only proceeds to the FMA once *both* operands have arrived — until then it
keeps re-asserting its request and stalls, regardless of how many cycles
that takes. Writes to `C` follow the same grant/stall pattern through a
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

The board-level wrapper `rtl/de1soc_top.sv` instantiates the two real Quartus
memory IPs — `matrix_ab` (shared dual-port BRAM for A/B) and `matrix_c`
(single-port output BRAM) — and wires them to `gpu_top`. `gpu_top_tb.sv`
instead instantiates three `dual_port_bram` instances (A, B, C) as its
simulation-only memory model, using only port A of each. So ModelSim's
`gpu_top_tb` run and the synthesised `de1soc_top` differ in memory model;
`de1soc_top_tb.sv` closes that gap by testing against the real IPs directly
(see "Fixed: matrix-C corruption from a BRAM read-latency mismatch" below).

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

### Fixed: matrix-C corruption from a BRAM read-latency mismatch (hardware-only)

The board produced a corrupted output matrix `C` (visible via HEX display
and the In-System Memory Content Editor) while the `gpu_top_tb.sv` simulation
— which uses `dual_port_bram` — passed 100% clean. To get a repro, a
hardware-accurate testbench (`tb/Top/de1soc_top_tb.sv` + `tb/Top/run_hw.do`)
was built that instantiates `de1soc_top` directly, so the real `matrix_ab.v`/
`matrix_c.v` Quartus `altsyncram` IPs are in the loop instead of
`dual_port_bram`. That reproduced the corruption in simulation, proving it
was a genuine RTL/IP-timing bug rather than a stale `.sof` or a JTAG-sampling
artifact.

Root cause: `rr_read_arbiter.sv` was hardcoded to assert `resp_valid` exactly
one cycle after a grant, because `dual_port_bram` (combinational address
into `mem[]`, registered output) has exactly 1-cycle read latency. The real
`matrix_ab` IP (`BIDIR_DUAL_PORT` mode `altsyncram`) does not: its address
input is structurally registered on both ports — confirmed by the
`altsyncram` simulation model itself outright rejecting
`address_reg_b = "UNREGISTERED"` (`Error: UNREGISTERED value for
address_reg_b is not supported.`) — so it has a true 2-cycle latency
(address register + output register). With the arbiter watching the wrong
cycle, every granted core's data was read one grant early, producing an
"off-by-one" corruption pattern across all of `C`.

Fix: `rr_read_arbiter.sv` now takes a `BRAM_LATENCY` parameter (default `1`,
so `dual_port_bram`-backed paths are unaffected) and pipelines `grant` that
many cycles before driving `resp_valid`. `gpu_top.sv` exposes this as
`BRAM_READ_LATENCY` (default `1`) and passes it to both the A and B
arbiters. `de1soc_top.sv` overrides it to `2` when instantiating `gpu_top`,
matching the real IP; `gpu_top_tb.sv` keeps the default of `1`. No changes
were needed in `core.sv`/`scheduler.sv` — their req/resp protocol is fully
`resp_valid`-driven with no hardcoded latency assumption, so cores simply
stall the extra cycle correctly once the arbiter's timing matches reality.

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
| `rtl/de1soc_top.sv`      | Board-level wrapper. Instantiates gpu_top + the two real Quartus memory IPs (`matrix_ab`, `matrix_c`) + button/LED/HEX I/O. **This is the synthesis top.** |
| `rtl/gpu_top.sv`         | GPU top. Instantiates dispatcher, `NUM_CORES` cores, and the A/B read arbiters + C write arbiter. Exposes one shared BRAM port per matrix plus contention counters. |
| `rtl/dispatcher.sv`      | Greedy block dispatcher with a priority encoder picking the lowest-index free core each cycle. Fully `NUM_CORES`-generic. |
| `rtl/core.sv`            | Per-core wrapper. Owns the scheduler, the thread instances, the A/B response latches, and the address MUXes. Talks to memory via req/resp handshake, not direct ports. |
| `rtl/scheduler.sv`       | Kernel FSM: IDLE -> INIT -> WAIT_AB -> NEXT_T/NEXT_K -> WRITE_REQ -> NEXT_W -> DONE_ST. Stall-aware: advances only on actual grants/responses from the arbiters, not a fixed latency assumption. |
| `rtl/rr_read_arbiter.sv` | Generic round-robin read arbiter, `NUM_CORES` -> 1 BRAM port. Used twice (A, B). Tracks per-core grants and stall cycles. |
| `rtl/rr_write_arbiter.sv`| Generic round-robin write arbiter, `NUM_CORES` -> 1 BRAM port. Used once (C). |
| `rtl/thread.sv`          | One output element. Address generation + accumulator + one FMA. |
| `rtl/fma.sv`             | Integer fused multiply-add: `result = a*b + c`. |
| `rtl/dual_port_bram.sv`  | True dual-port BRAM, inferable to Cyclone V M10K. Used by `gpu_top_tb.sv`'s simulation-only A/B/C instances; on real hardware (`de1soc_top.sv`) it's superseded by the `matrix_ab`/`matrix_c` Quartus IP, see Hardware section below. |
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
| `BRAM_READ_LATENCY` (`gpu_top.sv`) / `BRAM_LATENCY` (`rr_read_arbiter.sv`) | 1 | Cycles from a read grant to valid data on the A/B ports. `1` matches `dual_port_bram` (simulation). `de1soc_top.sv` overrides this to `2` to match the real `matrix_ab` altsyncram IP's true latency (registered address + registered output) — see "Fixed: matrix-C corruption from a BRAM read-latency mismatch" above. |

---

## Repository layout

```
DE1-SoC-GPU/
|- rtl/                  Canonical synthesisable SystemVerilog. Source of truth.
|- tb/                   ModelSim testbenches organised by module under test.
|  |- Top/               System-level testbenches.
|  |  |- gpu_top_tb.sv     Tests gpu_top directly against dual_port_bram. The main one.
|  |  |- run.do            Compiles directly from rtl/ via relative path. Use this.
|  |  |- de1soc_top_tb.sv  Hardware-accurate: tests de1soc_top directly, so the real
|  |  |                    matrix_ab/matrix_c altsyncram IPs are exercised.
|  |  |- run_hw.do         Compiles + elaborates de1soc_top_tb.sv, incl. altera_mf.v.
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
|- DE1-Soc/              Quartus project for the actual hardware build.
|  |- DE1_SoC_GPU.qpf/.qsf  Open this. Top entity de1soc_top, file set =
|  |                         rtl/*.sv + matrix_ab.v + matrix_c.qip, board
|  |                         pin map included.
|  |- matrix_ab.v        Quartus altsyncram IP — shared dual-port BRAM
|  |                     backing both input matrices (A on port A, B on
|  |                     port B, one physical block, see README below).
|  |- matrix_ab.mif      Preload for matrix_ab: A at words 0..N*N-1, B at
|                        words N*N..2*N*N-1.
|  |- matrix_c.v / .qip  Quartus altsyncram IP (SINGLE_PORT, runtime-mod +
|  |                     JTAG_ID="C") backing output matrix C. Readable at
|  |                     runtime via In-System Memory Content Editor.
|- SDRAM/                Earlier SDRAM controller IP scaffolding/experiment
|                        (its own DE1_SoC_Default.qpf, unrelated to the
|                        GPU build above — kept as reference for the
|                        stock Terasic pin map).
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

**Hardware-accurate variant:** `tb/Top/de1soc_top_tb.sv` + `tb/Top/run_hw.do`
instantiate `de1soc_top` itself, so the real `matrix_ab.v`/`matrix_c.v`
Quartus `altsyncram` IPs are in the loop for A/B reads and the C write,
instead of `dual_port_bram`. Use this to test whether a board-only bug
(corruption that doesn't show up in the `gpu_top_tb` run above) is caused by
a genuine IP timing mismatch versus the simulation memory model, or whether
it's downstream of the RTL entirely (stale `.sof`, JTAG sampling, etc.):

```
do "C:/Users/User/Desktop/Year 3/DE1-SoC-GPU/tb/Top/run_hw.do"
```

Requires the `altera_mf` simulation library to elaborate `altsyncram`.
ModelSim-Altera/Intel-FPGA Starter/ASE Edition does not ship this
precompiled, so `run_hw.do` compiles the `altera_mf.v` *source* (shipped
with every Quartus install, under `<quartus install>/eda/sim_lib/`) directly
into `work` — set the `ALTERA_MF` variable near the top of `run_hw.do` to
your install's copy of that file if it differs from the path already there.

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

Open `DE1-Soc/DE1_SoC_GPU.qpf`. Its `.qsf` already has the file set
(`rtl/*.sv` + `matrix_ab.v` + `matrix_c.qip`), top-level entity (`de1soc_top`), device
(`5CSEMA5F31C6`, Cyclone V), and `CLOCK_50`/`KEY`/`LEDR`/`HEX0-3` pin
locations configured — just run Compile. Pin locations were copied from
Terasic's stock `SDRAM/DE1_SoC_Default.qsf` (those are fixed by the
physical board); unused peripherals (ADC, audio, DRAM, GPIO, HEX4/5) are
deliberately left out of this project's pin map and file set.
`gpu_mem_master.sv` and `mem_controller.sv` are also deliberately excluded
from the file set — Quartus parses every added HDL file regardless of
whether it's instantiated, and `gpu_mem_master.sv` has a known unresolved
syntax error that would otherwise block compilation of dead code.

Hardware bring-up (push-button start, LED done indicator, HEX display
readback) is in progress and tracked separately.

**Matrix A/B memory on real hardware:** `de1soc_top.sv` no longer uses
`dual_port_bram` for matrices A and B — it instantiates `matrix_ab`
(`DE1-Soc/matrix_ab.v`, a Quartus `altsyncram` megafunction in
`BIDIR_DUAL_PORT` mode). This is **one** 256-word x 16-bit physical block
with two independent access ports, not two separate buffers: port A serves
matrix A starting at `base_addr_A = 0`, port B serves matrix B starting at
`base_addr_B = N*N`, both within the same underlying array. This is a more
faithful use of the M10K's native dual-port hardware than the simulation
path's two separate single-port-used BRAMs (which is unaffected — `gpu_top_tb.sv`
instantiates `gpu_top` directly and still uses two independent
`dual_port_bram` instances for A/B, so ModelSim results aren't touched by
this change).

`matrix_ab` is preloaded at configuration time from `DE1-Soc/matrix_ab.mif`
(word 0..N*N-1 = matrix A, word N*N..2*N*N-1 = matrix B; currently filled
with `A[i] = B[i] = i+1` for `i = 0..15`, matching `gpu_top_tb.sv`'s 4x4 test
vectors so a hardware run is directly comparable to the passing simulation).
`wren_a`/`wren_b` are tied low — there is no runtime write path into this
block; to change the input matrices, edit `matrix_ab.mif` and recompile.

**Matrix C (output) on real hardware:** `de1soc_top.sv` also no longer uses
`dual_port_bram` for matrix C — it instantiates `matrix_c`
(`DE1-Soc/matrix_c.v`, a Quartus `altsyncram` megafunction in `SINGLE_PORT`
mode with `lpm_hint = "ENABLE_RUNTIME_MOD=YES,INSTANCE_NAME=C"` and
`JTAG_ENABLED = "1"`). The GPU's write arbiter drives `wren`/`address`/`data`
exactly as it drove `dual_port_bram`'s port A before; `rden` is tied high and
`q` is left unused since the GPU itself never reads C back. Runtime-mod +
JTAG together make Quartus auto-insert a virtual-JTAG/SLD hub for this block
at compile time — no extra top-level pins are needed for it. After
programming the board, open Tools > In-System Memory Content Editor in
Quartus, connect to the JTAG chain, and the block shows up as instance `C`;
reading it there is the intended way to inspect the matmul result on
hardware, instead of (or in addition to) the HEX0-3 display, which still only
shows `C[0][0]`. As with `matrix_ab`, this is hardware-only — `gpu_top_tb.sv`
still uses an independent `dual_port_bram` for C in simulation, unaffected.
Add `<quartus_install>/eda/sim_lib/altera_mf.v` (or `-L altera_mf_ver`) to
the ModelSim compile/elaborate step if you ever need to simulate
`de1soc_top.sv` itself, since `altsyncram` needs the `altera_mf` simulation
library — `gpu_top_tb.sv` avoids this today by testing `gpu_top` directly.

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
| `gpu_top_tb`    | passing | 4x4 system-level matmul with `NUM_CORES=4`, shared-memory-controller architecture, against `dual_port_bram` (`BRAM_READ_LATENCY=1`). Prints stall/grant counters. |
| `de1soc_top_tb` | passing | Hardware-accurate variant of the above: instantiates `de1soc_top` directly, so the real `matrix_ab`/`matrix_c` Quartus `altsyncram` IPs (`BRAM_READ_LATENCY=2`) are exercised instead of `dual_port_bram`. This is the test that caught and now confirms the fix for the matrix-C read-latency corruption bug (see architecture history above) — it's the one that currently proves the v2 architecture end-to-end against the actual hardware IPs. |

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


