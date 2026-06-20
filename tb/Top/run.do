# =============================================================================
# run.do — system-level testbench for the full GPU (gpu_top_tb)
#
# Usage: do "C:/Users/User/Desktop/Year 3/DE1-SoC-GPU/tb/Top/run.do"
# =============================================================================

# Hardcoded absolute paths (forward slashes — Tcl-safe)
set PROJ_ROOT "C:/Users/User/Desktop/Year 3/DE1-SoC-GPU"
set TB_DIR    "$PROJ_ROOT/tb/Top"
set RTL_DIR   "$PROJ_ROOT/rtl"

cd $TB_DIR
puts "Working dir: [pwd]"

# Clean work library
if {[file isdirectory work]} { vdel -lib work -all }
vlib work

# ── Compile all RTL sources from rtl/ ─────────────────────────
puts "Compiling RTL..."
vlog -sv "$RTL_DIR/fma.sv"
vlog -sv "$RTL_DIR/thread.sv"
vlog -sv "$RTL_DIR/scheduler.sv"
vlog -sv "$RTL_DIR/core.sv"
vlog -sv "$RTL_DIR/dispatcher.sv"
vlog -sv "$RTL_DIR/mem_controller.sv"
vlog -sv "$RTL_DIR/gpu_top.sv"

# ── Compile testbench ────────────────────────────────────────
puts "Compiling testbench..."
vlog -sv "$TB_DIR/gpu_top_tb.sv"

# ── Elaborate ────────────────────────────────────────────────
vsim -voptargs="+acc" work.gpu_top_tb

# ── Waveform setup (interactive only) ────────────────────────
if {![batch_mode]} {
    add wave -divider "Top-level control"
    add wave -position end sim:/gpu_top_tb/clk
    add wave -position end sim:/gpu_top_tb/rst
    add wave -position end sim:/gpu_top_tb/start
    add wave -position end sim:/gpu_top_tb/done
    add wave -position end sim:/gpu_top_tb/N

    add wave -divider "BRAM_A (input matrices)"
    add wave -position end sim:/gpu_top_tb/bram_a_addr
    add wave -position end sim:/gpu_top_tb/bram_a_rd_en
    add wave -position end sim:/gpu_top_tb/bram_a_rd_data

    add wave -divider "BRAM_C (output matrix)"
    add wave -position end sim:/gpu_top_tb/bram_c_addr
    add wave -position end sim:/gpu_top_tb/bram_c_wr_data
    add wave -position end sim:/gpu_top_tb/bram_c_wr_en

    add wave -divider "Dispatcher state"
    add wave -position end sim:/gpu_top_tb/dut/u_dispatcher/state
    add wave -position end sim:/gpu_top_tb/dut/u_dispatcher/core_valid
    add wave -position end sim:/gpu_top_tb/dut/u_dispatcher/core_ready
    add wave -position end sim:/gpu_top_tb/dut/u_dispatcher/core_start
    add wave -position end sim:/gpu_top_tb/dut/u_dispatcher/core_done

    add wave -divider "Per-core memory traffic"
    add wave -position end sim:/gpu_top_tb/dut/core_mem_read_valid
    add wave -position end sim:/gpu_top_tb/dut/core_mem_read_ready
    add wave -position end sim:/gpu_top_tb/dut/core_mem_read_addr
    add wave -position end sim:/gpu_top_tb/dut/core_mem_write_valid
    add wave -position end sim:/gpu_top_tb/dut/core_mem_write_ready
    add wave -position end sim:/gpu_top_tb/dut/core_mem_write_addr
    add wave -position end sim:/gpu_top_tb/dut/core_mem_write_data

    add wave -divider "Mem controller arbiter"
    add wave -position end sim:/gpu_top_tb/dut/u_mem_controller/read_ptr
    add wave -position end sim:/gpu_top_tb/dut/u_mem_controller/write_ptr
    add wave -position end sim:/gpu_top_tb/dut/u_mem_controller/read_grant
    add wave -position end sim:/gpu_top_tb/dut/u_mem_controller/write_grant

    configure wave -timelineunits ns
}

# ── Run ──────────────────────────────────────────────────────
run -all

puts ""
puts "Simulation complete. Browse waveforms or 'quit -f' to exit."
