# DE1-SoC-GPU

A 2-core SIMT GPU written in SystemVerilog, targeting the Terasic DE1-SoC FPGA
(Cyclone V). Executes parameterised NxN integer matrix multiply across multiple
hardware threads, with a dispatcher that hands out work blocks to free cores
as they become available.

The project is built from scratch for educational and portfolio purposes; it
does not depend on any vendor GPU IP. All RTL is hand-written and verified
in ModelSim ASE.


The current configuration is `NUM_CORES = 2`, `THREADS_PER_CORE = 2`.

### Memory architecture

Three dual-port BRAMs back the design: one each for input matrices `A`, `B`
and output matrix `C`. Port A of every BRAM is dedicated to core 0; port B
of every BRAM is dedicated to core 1.

```
              bram_A (dual-port)    bram_B (dual-port)    bram_C (dual-port)
              ┌──── portA ────┐    ┌──── portA ────┐    ┌──── portA ────┐
              │               │    │               │    │               │
              └──── portB ────┘    └──── portB ────┘    └──── portB ────┘
                  │       │            │       │            │       │
                  v       v            v       v            v       v
                Core 0  Core 1       Core 0  Core 1       Core 0  Core 1
```

This is intentional. The Cyclone V M10K block RAMs are natively true dual-port,
meaning each block already provides exactly the two simultaneous accesses
that a 2-core SIMT machine needs. Each core gets one read of A, one read of B
and one write of C per cycle, all in parallel, with **zero memory arbitration**.

Scaling beyond two cores requires either banking (splitting A across multiple
BRAMs by address bit) or arbitration. The `mem_controller.sv` module is the
arbitration path — verified standalone, ready for the next architectural
revision, but deliberately unused here because dual-port BRAMs already
saturate the bandwidth requirement at this scale.

The board-level wrapper `rtl/de1soc_top.sv` instantiates these three BRAMs
and wires them to `gpu_top`. The simulation testbench instantiates the same
three BRAM modules, so what runs in ModelSim is what gets synthesised.

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

| File | Lines | Role |
|---|---:|---|
| `rtl/de1soc_top.sv`     | 150 | Board-level wrapper. Instantiates gpu_top + 3 dual-port BRAMs + button/LED/HEX I/O. **This is the synthesis top.** |
| `rtl/gpu_top.sv`        |  94 | GPU top. Instantiates dispatcher and N cores. Exposes per-core BRAM ports. |
| `rtl/dispatcher.sv`     | 158 | Greedy block dispatcher with a priority encoder picking the lowest-index free core each cycle. |
| `rtl/core.sv`           | 160 | Per-core wrapper. Owns the scheduler, the thread instances and the address MUXes. |
| `rtl/scheduler.sv`      | 161 | Kernel FSM: IDLE -> INIT -> WAIT -> FMA -> NEXT_T/NEXT_K -> WRITE -> NEXT_W -> DONE. |
| `rtl/thread.sv`         |  75 | One output element. Address generation + accumulator + one FMA. |
| `rtl/fma.sv`            |  27 | Integer fused multiply-add: `result = a*b + c`. |
| `rtl/dual_port_bram.sv` |  60 | True dual-port BRAM, inferable to Cyclone V M10K. Three instances back the GPU. |
| `rtl/mem_controller.sv` | 152 | Round-robin memory arbiter. Unit-tested in isolation (`src/tb/MemController/mem_controller_tb.sv`). Not used in the current top because dual-port BRAMs already provide enough bandwidth for 2 cores; reserved for the NUM_CORES > 2 case. |
| `rtl/gpu_mem_master.sv` |  36 | Avalon-MM master stub for future SDRAM integration. |

### Parameters

All sizes are parameterised on every module so the same RTL can scale to
larger configurations without source edits.

| Parameter | Default | Meaning |
|---|---:|---|
| `DATA_WIDTH` | 16 | Width of A, B, C elements. |
| `ADDR_WIDTH` | 16 | Width of memory addresses. |
| `NUM_CORES`  |  2 | Number of compute cores instantiated. |
| `THREADS_PER_CORE` | 2 | Threads per core (block size). |

---

## Repository layout

```
DE1-SoC-GPU/
|- rtl/                  Canonical synthesisable SystemVerilog. Source of truth.
|- tb/                   ModelSim testbenches organised by module under test.
|  |- Top/               System-level testbench (gpu_top_tb.sv) - the main one.
|  |- core/              Unit-level testbench for a single core.
|  |- dispatcher/        ...
|  |- fma/               ...
|  |- scheduler/         ...
|  |- thread/            ...
|- src/tb/Top/           ModelSim project working directory. Loads from src/tb/Top/rtl/.
|  |- rtl/               WORKING COPY of rtl/ - kept in sync manually.
|- DE1-Soc/              Quartus project (DE1_SoC_Default.qpf and friends).
|- SDRAM/                SDRAM controller IP scaffolding (work-in-progress).
```

> Note: the duplicate `src/tb/Top/rtl/` exists because the ModelSim project's
> compile paths point there. Any change to `rtl/` must be mirrored. Eliminating
> this duplication is on the short-term cleanup list.

---

## Building and running

### Simulation (ModelSim ASE)

The system-level testbench at `tb/Top/gpu_top_tb.sv` exercises the full
pipeline end-to-end on a 4x4 matmul. It models per-core BRAMs, sources
inputs, monitors C writes, and checks against a software golden reference.

From a ModelSim shell in `src/tb/Top/`:

```
vlib work
vlog -sv rtl/*.sv gpu_top_tb.sv
vsim -gui work.gpu_top_tb
run -all
```

A passing run prints:

```
=== GPU SYSTEM TEST: 4x4 matmul (NUM_CORES=2, T/C=2) ===
  ...
  PASS  C[0][0] = 90
  PASS  C[0][1] = 100
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
| `thread_tb`     | passing | Address gen and accumulator. |
| `scheduler_tb`  | passing | FSM coverage including DONE re-entry. |
| `dispatcher_tb` | passing | Single-core and multi-core dispatch ordering. |
| `core_tb`       | passing | Two-thread block end-to-end. |
| `mem_controller_tb` | passing | Round-robin arbiter standalone — tracks per-core read/write grants for fairness. Module not yet integrated into `gpu_top`. |
| `gpu_top_tb`    | passing | 4x4 system-level matmul, exercises 8-block dispatch and `kernel_init` reset. |

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
- Scales to 2 cores natively, no further. Beyond `NUM_CORES = 2` the
  dual-port BRAM bandwidth runs out and you need either banking or
  arbitration. The verified `mem_controller.sv` is the arbitration path
  when that day comes.
- No DRAM. SDRAM controller IP is scaffolded under `SDRAM/` but the GPU
  currently runs entirely against on-chip BRAM.


