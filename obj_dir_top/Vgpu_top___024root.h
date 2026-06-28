// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vgpu_top.h for the primary calling header

#ifndef VERILATED_VGPU_TOP___024ROOT_H_
#define VERILATED_VGPU_TOP___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vgpu_top__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vgpu_top___024root final {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ gpu_top_tb__DOT__clk;
        CData/*0:0*/ gpu_top_tb__DOT__rst;
        CData/*0:0*/ gpu_top_tb__DOT__start;
        CData/*7:0*/ gpu_top_tb__DOT__N;
        CData/*0:0*/ gpu_top_tb__DOT__done;
        CData/*1:0*/ gpu_top_tb__DOT__bram_c_wr_en;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__core_valid;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__core_start;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__core_done;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__mem_write_en;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__mem_write_en;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_top_tb__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ gpu_top_tb__DOT__base_addr_A;
        SData/*15:0*/ gpu_top_tb__DOT__base_addr_B;
        SData/*15:0*/ gpu_top_tb__DOT__base_addr_C;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    };
    struct {
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_1;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_2;
        IData/*31:0*/ gpu_top_tb__DOT__errors;
        IData/*31:0*/ gpu_top_tb__DOT__writes_observed;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__bram_a_addr;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__bram_a_rd_data;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__bram_b_addr;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__bram_b_rd_data;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__bram_c_addr;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__bram_c_wr_data;
        VlUnpacked<SData/*15:0*/, 256> gpu_top_tb__DOT__mem_A;
        VlUnpacked<SData/*15:0*/, 256> gpu_top_tb__DOT__mem_B;
        VlUnpacked<SData/*15:0*/, 256> gpu_top_tb__DOT__mem_C;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__core_thread_id;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__core_thread_count;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha5c6da72__0;
    VlTriggerScheduler __VtrigSched_hb5f69606__0;

    // INTERNAL VARIABLES
    Vgpu_top__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vgpu_top___024root(Vgpu_top__Syms* symsp, const char* namep);
    ~Vgpu_top___024root();
    VL_UNCOPYABLE(Vgpu_top___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
