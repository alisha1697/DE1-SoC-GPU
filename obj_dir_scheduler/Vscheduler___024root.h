// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vscheduler.h for the primary calling header

#ifndef VERILATED_VSCHEDULER___024ROOT_H_
#define VERILATED_VSCHEDULER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vscheduler__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vscheduler___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ scheduler_tb__DOT__clk;
    CData/*0:0*/ scheduler_tb__DOT__rst;
    CData/*0:0*/ scheduler_tb__DOT__start;
    CData/*7:0*/ scheduler_tb__DOT__N;
    CData/*7:0*/ scheduler_tb__DOT__thread_count;
    CData/*1:0*/ scheduler_tb__DOT__data_valid;
    CData/*1:0*/ scheduler_tb__DOT__fma_en;
    CData/*0:0*/ scheduler_tb__DOT__mem_write_en;
    CData/*0:0*/ scheduler_tb__DOT__kernel_init;
    CData/*3:0*/ scheduler_tb__DOT__fsm_state;
    CData/*0:0*/ scheduler_tb__DOT__done;
    CData/*0:0*/ scheduler_tb__DOT__rst_lat2;
    CData/*0:0*/ scheduler_tb__DOT__start_lat2;
    CData/*7:0*/ scheduler_tb__DOT__N_lat2;
    CData/*7:0*/ scheduler_tb__DOT__thread_count_lat2;
    CData/*1:0*/ scheduler_tb__DOT__fma_en_lat2;
    CData/*0:0*/ scheduler_tb__DOT__mem_write_en_lat2;
    CData/*0:0*/ scheduler_tb__DOT__kernel_init_lat2;
    CData/*3:0*/ scheduler_tb__DOT__fsm_state_lat2;
    CData/*0:0*/ scheduler_tb__DOT__done_lat2;
    CData/*3:0*/ scheduler_tb__DOT__prev_state_lat2;
    CData/*7:0*/ scheduler_tb__DOT__dut__DOT__t_cnt;
    CData/*7:0*/ scheduler_tb__DOT__dut__DOT__k_cnt;
    CData/*0:0*/ scheduler_tb__DOT__dut__DOT__wait_cnt;
    CData/*0:0*/ scheduler_tb__DOT__dut__DOT__is_last_thread;
    CData/*7:0*/ scheduler_tb__DOT__dut_lat2__DOT__t_cnt;
    CData/*7:0*/ scheduler_tb__DOT__dut_lat2__DOT__k_cnt;
    CData/*0:0*/ scheduler_tb__DOT__dut_lat2__DOT__wait_cnt;
    CData/*0:0*/ scheduler_tb__DOT__dut_lat2__DOT__is_last_thread;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__scheduler_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__scheduler_tb__DOT__done__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__scheduler_tb__DOT__done_lat2__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    IData/*31:0*/ scheduler_tb__DOT__fma_count;
    IData/*31:0*/ scheduler_tb__DOT__write_count;
    IData/*31:0*/ scheduler_tb__DOT__kernel_init_count;
    IData/*31:0*/ scheduler_tb__DOT__expected_t;
    IData/*31:0*/ scheduler_tb__DOT__expected_k;
    IData/*31:0*/ scheduler_tb__DOT__errors;
    IData/*31:0*/ scheduler_tb__DOT__fma_count_lat2;
    IData/*31:0*/ scheduler_tb__DOT__write_count_lat2;
    IData/*31:0*/ scheduler_tb__DOT__kernel_init_count_lat2;
    IData/*31:0*/ scheduler_tb__DOT__expected_t_lat2;
    IData/*31:0*/ scheduler_tb__DOT__expected_k_lat2;
    IData/*31:0*/ scheduler_tb__DOT__wait_cycles_lat2;
    IData/*31:0*/ scheduler_tb__DOT__wait_run_lat2;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    std::string __Vtask_scheduler_tb__DOT__run_kernel__2__label;
    std::string __Vtask_scheduler_tb__DOT__check_block_counts__5__label;
    std::string __Vtask_scheduler_tb__DOT__run_kernel__6__label;
    std::string __Vtask_scheduler_tb__DOT__check_block_counts__9__label;
    std::string __Vtask_scheduler_tb__DOT__run_kernel__10__label;
    std::string __Vtask_scheduler_tb__DOT__check_block_counts__13__label;
    std::string __Vtask_scheduler_tb__DOT__run_kernel__14__label;
    std::string __Vtask_scheduler_tb__DOT__check_block_counts__17__label;
    std::string __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__label;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hcb5df0f3__0;
    VlTriggerScheduler __VtrigSched_h1f37aafa__0;
    VlTriggerScheduler __VtrigSched_h345ff2b5__0;

    // INTERNAL VARIABLES
    Vscheduler__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vscheduler___024root(Vscheduler__Syms* symsp, const char* namep);
    ~Vscheduler___024root();
    VL_UNCOPYABLE(Vscheduler___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
