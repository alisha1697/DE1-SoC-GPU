# =============================================================================
# run.do — ModelSim TCL script for mem_controller_tb
#
# Self-contained: no altera_mf, no Quartus IP. Pure SystemVerilog only.
#
# Usage:  do "C:/Users/User/Desktop/Year 3/DE1-SoC-GPU/src/tb/MemController/run.do"
# =============================================================================

# ──────────────────────────────────────────────────────────────
# 0. Absolute paths
# ──────────────────────────────────────────────────────────────
set PROJ_ROOT  "C:/Users/User/Desktop/Year 3/DE1-SoC-GPU"
set TB_DIR     "$PROJ_ROOT/src/tb/MemController"
set DUT_FILE   "$PROJ_ROOT/src/mem_controller.sv"
set TB_FILE    "$TB_DIR/mem_controller_tb.sv"

cd $TB_DIR
puts "Working dir: [pwd]"

# ──────────────────────────────────────────────────────────────
# 1. Clean libraries
# ──────────────────────────────────────────────────────────────
if {[file isdirectory altera_mf]} { vdel -lib altera_mf -all }
if {[file isdirectory work]}      { vdel -lib work      -all }
vlib work

# ──────────────────────────────────────────────────────────────
# 2. Compile DUT and testbench (pure SV, no vendor libs needed)
# ──────────────────────────────────────────────────────────────
puts "Compiling DUT:  $DUT_FILE"
vlog -sv $DUT_FILE

puts "Compiling TB:   $TB_FILE"
vlog -sv $TB_FILE

# ──────────────────────────────────────────────────────────────
# 3. Elaborate
# ──────────────────────────────────────────────────────────────
vsim -voptargs="+acc" work.mem_controller_tb

# ──────────────────────────────────────────────────────────────
# 4. Waveform setup (interactive only)
# ──────────────────────────────────────────────────────────────
if {![batch_mode]} {
    add wave -divider "Top-level"
    add wave -position end sim:/mem_controller_tb/clk
    add wave -position end sim:/mem_controller_tb/rst

    add wave -divider "Core read"
    add wave -position end sim:/mem_controller_tb/core_read_valid
    add wave -position end sim:/mem_controller_tb/core_read_ready
    add wave -position end sim:/mem_controller_tb/core_read_addr

    add wave -divider "Core write"
    add wave -position end sim:/mem_controller_tb/core_write_valid
    add wave -position end sim:/mem_controller_tb/core_write_ready
    add wave -position end sim:/mem_controller_tb/core_write_addr
    add wave -position end sim:/mem_controller_tb/core_write_data

    add wave -divider "BRAM_A (behavioral, 1-cycle latency)"
    add wave -position end sim:/mem_controller_tb/bram_a_addr
    add wave -position end sim:/mem_controller_tb/bram_a_rd_en
    add wave -position end sim:/mem_controller_tb/bram_a_rd_data

    add wave -divider "BRAM_C (behavioral, 1-cycle latency)"
    add wave -position end sim:/mem_controller_tb/bram_c_addr
    add wave -position end sim:/mem_controller_tb/bram_c_wr_data
    add wave -position end sim:/mem_controller_tb/bram_c_wr_en

    add wave -divider "Arbiter internals"
    add wave -position end sim:/mem_controller_tb/dut/read_ptr
    add wave -position end sim:/mem_controller_tb/dut/write_ptr
    add wave -position end sim:/mem_controller_tb/dut/read_grant
    add wave -position end sim:/mem_controller_tb/dut/write_grant

    configure wave -timelineunits ns
}

# ──────────────────────────────────────────────────────────────
# 5. Run
# ──────────────────────────────────────────────────────────────
run -all

puts ""
puts "Simulation complete. Browse waveforms or 'quit -f' to exit."
