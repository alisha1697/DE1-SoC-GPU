# DE1-SoC-GPU

## Top Level Structure Version 1

## Design

- Data width: 16-bit, Address width: 16-bit (both as parameters)
- Default: `NUM_CORES = 2`, `THREADS_PER_CORE = 2` as sim

## Handshake Protocol: Valid/Ready

All data transfers between modules use valid/ready:

- Producer asserts `valid` when data is available on the bus
- Consumer asserts `ready` when it can accept data
- Transfer occurs when both `valid` and `ready` are high on the same clock cyc

Applied to:

- dispatcher -> core: `core_valid` / `core_ready` for thread assignment data
- core -> scheduler: `sched_valid` / `sched_ready` for memory read data
- scheduler -> threads: `thread_valid` / `thread_ready` for load data to threads
- core -> gpu_top : `mem_read_valid`/`mem_read_ready`, `mem_write_valid`/`mem_write_ready`

## BRAM

The external RAM is a dual port BRAM instantiated in Quartus. `gpu_top` has these ports that connect to the RAM IP. Allows simultaneous r/w on the same clk cyc. 

- Port A (read): `ram_addr_a`, `ram_rd_en_a`, `ram_rd_data_a`
- Port B (write): `ram_addr_b`, `ram_wr_en_b`, `ram_wr_data_b`

## Initial Design - 6 Modules

### 1. `gpu_top.sv` -- Top-level module

- **Params**: `DATA_WIDTH`, `ADDR_WIDTH`, `NUM_CORES`, `THREADS_PER_CORE`
- **Inputs**: `clk`, `rst`, `start`, `N[7:0]`, `base_addr_A/B/C[ADDR_WIDTH-1:0]`
- **RAM Port A (r)**: output `ram_addr_a[ADDR_WIDTH-1:0]`,  `ram_rd_en_a`, input `ram_rd_data_a[DATA_WIDTH-1:0]`
- **RAM Port B (w)**: output `ram_addr_b[ADDR_WIDTH-1:0]`,  `ram_wr_en_b`, output `ram_wr_data_b[DATA_WIDTH-1:0]`
- **Outputs**: `done` to external

### 2. `dispatcher.sv` -- Splits N^2 threads across cores, assigns thread IDs and counts

- **Params**: `NUM_CORES`, `THREADS_PER_CORE`
- **Inputs**: `clk`, `rst`, `start`, `N[7:0]`, `core_done[NUM_CORES-1:0]`, `core_ready[NUM_CORES-1:0]`
- **Outputs**: `core_valid[NUM_CORES-1:0]`, `core_start[NUM_CORES-1:0]`, `core_thread_id_start[NUM_CORES-1:0][15:0]`, `core_thread_count[NUM_CORES-1:0][15:0]`, `done`

### 3. `core.sv` -- Executes a block of threads with shared scheduler and memory bus

- **Params**: `DATA_WIDTH`, `ADDR_WIDTH`, `THREADS_PER_CORE`
- **Inputs**: `clk`, `rst`, `start`, `dispatch_valid`, `thread_id_start[15:0]`, `thread_count[15:0]`, `base_addr_A/B/C[ADDR_WIDTH-1:0]`, `N[7:0]`
- **Outputs**: `dispatch_ready`, `done`
- **Memory read bus**: output `mem_read_valid`,  `mem_read_addr[ADDR_WIDTH-1:0]`, input `mem_read_ready`,  `mem_read_data[DATA_WIDTH-1:0]`
- **Memory write bus**: output `mem_write_valid`,  `mem_write_addr[ADDR_WIDTH-1:0]`,  `mem_write_data[DATA_WIDTH-1:0]`, input `mem_write_ready`

### 4. `scheduler.sv` -- Main FSM

 (IDLE->INIT->LOAD<->COMPUTE->WRITE->DONE)

- **Params**: `DATA_WIDTH`, `ADDR_WIDTH`, `THREADS_PER_CORE`
- **Inputs**: `clk`, `rst`, `start`, `N[7:0]`, `thread_count[15:0]`, `mem_read_ready`, `mem_read_data[DATA_WIDTH-1:0]`, `mem_write_ready`
- **Outputs**: `k[7:0]`, `thread_valid`, `fma_en`, `state[2:0]`, `mem_read_valid`, `mem_read_addr[ADDR_WIDTH-1:0]`, `mem_write_valid`, `mem_write_addr[ADDR_WIDTH-1:0]`, `mem_write_data[DATA_WIDTH-1:0]`, `done`
- **Thread data handshake**: output `thread_valid`, input `thread_ready`

### 5. `thread.sv` -- Computes one C[i][j] element using index/address generation and FMA

- **Params**: `DATA_WIDTH`, `ADDR_WIDTH`
- **Inputs**: `clk`, `rst`, `thread_id[15:0]`, `base_addr_A/B/C[ADDR_WIDTH-1:0]`, `N[7:0]`, `k[7:0]`, `en`, `data_valid`, `a_val[DATA_WIDTH-1:0]`, `b_val[DATA_WIDTH-1:0]`, `fma_result[DATA_WIDTH-1:0]`
- **Outputs**: `data_ready`, `addr_A/B/C[ADDR_WIDTH-1:0]`, `fma_a[DATA_WIDTH-1:0]`, `fma_b[DATA_WIDTH-1:0]`, `result[DATA_WIDTH-1:0]`

### 6. `fma.sv` -- Fused multiply-add unit: computes (a * b) + c

- **Params**: `DATA_WIDTH`
- **Inputs**: `clk`, `rst`, `a[DATA_WIDTH-1:0]`, `b[DATA_WIDTH-1:0]`, `c[DATA_WIDTH-1:0]`, `valid_in`
- **Outputs**: `result[DATA_WIDTH-1:0]`, `valid_out`, `ready`