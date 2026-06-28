// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscheduler.h for the primary calling header

#include "Vscheduler__pch.h"

VlCoroutine Vscheduler___024root___eval_initial__TOP__Vtiming__0(Vscheduler___024root* vlSelf);
VlCoroutine Vscheduler___024root___eval_initial__TOP__Vtiming__1(Vscheduler___024root* vlSelf);

void Vscheduler___024root___eval_initial(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_initial\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vscheduler___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vscheduler___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

void Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(Vscheduler___024root* vlSelf, const char* __VeventDescription);
void Vscheduler___024root____VbeforeTrig_h1f37aafa__0(Vscheduler___024root* vlSelf, const char* __VeventDescription);
void Vscheduler___024root____VbeforeTrig_h345ff2b5__0(Vscheduler___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vscheduler___024root___eval_initial__TOP__Vtiming__0(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ scheduler_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    scheduler_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__2__test_N;
    __Vtask_scheduler_tb__DOT__run_kernel__2__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__2__test_tc;
    __Vtask_scheduler_tb__DOT__run_kernel__2__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__2__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__run_kernel__2__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__5__test_N;
    __Vtask_scheduler_tb__DOT__check_block_counts__5__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__5__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__5__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__5__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__5__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__6__test_N;
    __Vtask_scheduler_tb__DOT__run_kernel__6__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__6__test_tc;
    __Vtask_scheduler_tb__DOT__run_kernel__6__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__6__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__run_kernel__6__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__9__test_N;
    __Vtask_scheduler_tb__DOT__check_block_counts__9__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__9__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__9__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__9__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__9__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__10__test_N;
    __Vtask_scheduler_tb__DOT__run_kernel__10__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__10__test_tc;
    __Vtask_scheduler_tb__DOT__run_kernel__10__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__10__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__run_kernel__10__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__13__test_N;
    __Vtask_scheduler_tb__DOT__check_block_counts__13__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__13__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__13__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__13__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__13__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__14__test_N;
    __Vtask_scheduler_tb__DOT__run_kernel__14__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__14__test_tc;
    __Vtask_scheduler_tb__DOT__run_kernel__14__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__run_kernel__14__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__run_kernel__14__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__17__test_N;
    __Vtask_scheduler_tb__DOT__check_block_counts__17__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__17__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__17__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts__17__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__17__expect_kernel_init = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_N;
    __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_N = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc = 0;
    IData/*31:0*/ __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__expect_kernel_init = 0;
    // Body
    vlSelfRef.scheduler_tb__DOT__clk = 0U;
    vlSelfRef.scheduler_tb__DOT__rst = 1U;
    vlSelfRef.scheduler_tb__DOT__start = 0U;
    vlSelfRef.scheduler_tb__DOT__N = 3U;
    vlSelfRef.scheduler_tb__DOT__thread_count = 2U;
    vlSelfRef.scheduler_tb__DOT__errors = 0U;
    vlSelfRef.scheduler_tb__DOT__rst_lat2 = 1U;
    vlSelfRef.scheduler_tb__DOT__start_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__N_lat2 = 2U;
    vlSelfRef.scheduler_tb__DOT__thread_count_lat2 = 2U;
    vlSelfRef.scheduler_tb__DOT__fma_count = 0U;
    vlSelfRef.scheduler_tb__DOT__write_count = 0U;
    vlSelfRef.scheduler_tb__DOT__kernel_init_count = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_t = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_k = 0U;
    vlSelfRef.scheduler_tb__DOT__fma_count_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__write_count_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__kernel_init_count_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_t_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_k_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__wait_cycles_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__wait_run_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__prev_state_lat2 = 2U;
    scheduler_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, scheduler_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                         "@(posedge scheduler_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge scheduler_tb.clk)", 
                                                             "tb/scheduler/scheduler_tb.sv", 
                                                             316);
        scheduler_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (scheduler_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.scheduler_tb__DOT__rst = 0U;
    __Vtask_scheduler_tb__DOT__run_kernel__2__expect_kernel_init = 1U;
    __Vtask_scheduler_tb__DOT__run_kernel__2__test_tc = 2U;
    __Vtask_scheduler_tb__DOT__run_kernel__2__test_N = 3U;
    vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__2__label = "single block"s;
    vlSelfRef.scheduler_tb__DOT__N = (0x000000ffU & __Vtask_scheduler_tb__DOT__run_kernel__2__test_N);
    vlSelfRef.scheduler_tb__DOT__thread_count = (0x000000ffU 
                                                 & __Vtask_scheduler_tb__DOT__run_kernel__2__test_tc);
    vlSelfRef.scheduler_tb__DOT__fma_count = 0U;
    vlSelfRef.scheduler_tb__DOT__write_count = 0U;
    vlSelfRef.scheduler_tb__DOT__kernel_init_count = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_t = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_k = 0U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         132);
    vlSelfRef.scheduler_tb__DOT__start = 1U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         134);
    vlSelfRef.scheduler_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__done)))) {
        Vscheduler___024root____VbeforeTrig_h1f37aafa__0(vlSelf, 
                                                         "@( scheduler_tb.done)");
        co_await vlSelfRef.__VtrigSched_h1f37aafa__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( scheduler_tb.done)", 
                                                             "tb/scheduler/scheduler_tb.sv", 
                                                             295);
    }
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         296);
    __Vtask_scheduler_tb__DOT__check_block_counts__5__expect_kernel_init 
        = __Vtask_scheduler_tb__DOT__run_kernel__2__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__5__test_tc 
        = __Vtask_scheduler_tb__DOT__run_kernel__2__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__5__test_N 
        = __Vtask_scheduler_tb__DOT__run_kernel__2__test_N;
    vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__5__label 
        = vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__2__label;
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__fma_count 
                      != VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__5__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__5__test_tc))))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:236: Assertion failed in %m: %s: wrong FMA count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__5__label)
                     , '~',32,VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__5__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__5__test_tc)
                     , '~',32,vlSelfRef.scheduler_tb__DOT__fma_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 236, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__write_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__5__test_tc)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:242: Assertion failed in %m: %s: wrong write count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__5__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__5__test_tc
                     , '~',32,vlSelfRef.scheduler_tb__DOT__write_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 242, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__kernel_init_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__5__expect_kernel_init)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:248: Assertion failed in %m: %s: wrong kernel_init count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__5__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__5__expect_kernel_init
                     , '~',32,vlSelfRef.scheduler_tb__DOT__kernel_init_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 248, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    __Vtask_scheduler_tb__DOT__run_kernel__6__expect_kernel_init = 1U;
    __Vtask_scheduler_tb__DOT__run_kernel__6__test_tc = 2U;
    __Vtask_scheduler_tb__DOT__run_kernel__6__test_N = 3U;
    vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__6__label = "multi-block re-entry"s;
    vlSelfRef.scheduler_tb__DOT__N = (0x000000ffU & __Vtask_scheduler_tb__DOT__run_kernel__6__test_N);
    vlSelfRef.scheduler_tb__DOT__thread_count = (0x000000ffU 
                                                 & __Vtask_scheduler_tb__DOT__run_kernel__6__test_tc);
    vlSelfRef.scheduler_tb__DOT__fma_count = 0U;
    vlSelfRef.scheduler_tb__DOT__write_count = 0U;
    vlSelfRef.scheduler_tb__DOT__kernel_init_count = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_t = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_k = 0U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         132);
    vlSelfRef.scheduler_tb__DOT__start = 1U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         134);
    vlSelfRef.scheduler_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__done)))) {
        Vscheduler___024root____VbeforeTrig_h1f37aafa__0(vlSelf, 
                                                         "@( scheduler_tb.done)");
        co_await vlSelfRef.__VtrigSched_h1f37aafa__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( scheduler_tb.done)", 
                                                             "tb/scheduler/scheduler_tb.sv", 
                                                             295);
    }
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         296);
    __Vtask_scheduler_tb__DOT__check_block_counts__9__expect_kernel_init 
        = __Vtask_scheduler_tb__DOT__run_kernel__6__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__9__test_tc 
        = __Vtask_scheduler_tb__DOT__run_kernel__6__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__9__test_N 
        = __Vtask_scheduler_tb__DOT__run_kernel__6__test_N;
    vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__9__label 
        = vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__6__label;
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__fma_count 
                      != VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__9__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__9__test_tc))))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:236: Assertion failed in %m: %s: wrong FMA count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__9__label)
                     , '~',32,VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__9__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__9__test_tc)
                     , '~',32,vlSelfRef.scheduler_tb__DOT__fma_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 236, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__write_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__9__test_tc)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:242: Assertion failed in %m: %s: wrong write count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__9__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__9__test_tc
                     , '~',32,vlSelfRef.scheduler_tb__DOT__write_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 242, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__kernel_init_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__9__expect_kernel_init)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:248: Assertion failed in %m: %s: wrong kernel_init count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__9__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__9__expect_kernel_init
                     , '~',32,vlSelfRef.scheduler_tb__DOT__kernel_init_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 248, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    __Vtask_scheduler_tb__DOT__run_kernel__10__expect_kernel_init = 1U;
    __Vtask_scheduler_tb__DOT__run_kernel__10__test_tc = 1U;
    __Vtask_scheduler_tb__DOT__run_kernel__10__test_N = 3U;
    vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__10__label = "partial block (thread_count=1)"s;
    vlSelfRef.scheduler_tb__DOT__N = (0x000000ffU & __Vtask_scheduler_tb__DOT__run_kernel__10__test_N);
    vlSelfRef.scheduler_tb__DOT__thread_count = (0x000000ffU 
                                                 & __Vtask_scheduler_tb__DOT__run_kernel__10__test_tc);
    vlSelfRef.scheduler_tb__DOT__fma_count = 0U;
    vlSelfRef.scheduler_tb__DOT__write_count = 0U;
    vlSelfRef.scheduler_tb__DOT__kernel_init_count = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_t = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_k = 0U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         132);
    vlSelfRef.scheduler_tb__DOT__start = 1U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         134);
    vlSelfRef.scheduler_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__done)))) {
        Vscheduler___024root____VbeforeTrig_h1f37aafa__0(vlSelf, 
                                                         "@( scheduler_tb.done)");
        co_await vlSelfRef.__VtrigSched_h1f37aafa__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( scheduler_tb.done)", 
                                                             "tb/scheduler/scheduler_tb.sv", 
                                                             295);
    }
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         296);
    __Vtask_scheduler_tb__DOT__check_block_counts__13__expect_kernel_init 
        = __Vtask_scheduler_tb__DOT__run_kernel__10__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__13__test_tc 
        = __Vtask_scheduler_tb__DOT__run_kernel__10__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__13__test_N 
        = __Vtask_scheduler_tb__DOT__run_kernel__10__test_N;
    vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__13__label 
        = vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__10__label;
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__fma_count 
                      != VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__13__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__13__test_tc))))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:236: Assertion failed in %m: %s: wrong FMA count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__13__label)
                     , '~',32,VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__13__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__13__test_tc)
                     , '~',32,vlSelfRef.scheduler_tb__DOT__fma_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 236, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__write_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__13__test_tc)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:242: Assertion failed in %m: %s: wrong write count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__13__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__13__test_tc
                     , '~',32,vlSelfRef.scheduler_tb__DOT__write_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 242, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__kernel_init_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__13__expect_kernel_init)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:248: Assertion failed in %m: %s: wrong kernel_init count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__13__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__13__expect_kernel_init
                     , '~',32,vlSelfRef.scheduler_tb__DOT__kernel_init_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 248, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    __Vtask_scheduler_tb__DOT__run_kernel__14__expect_kernel_init = 1U;
    __Vtask_scheduler_tb__DOT__run_kernel__14__test_tc = 1U;
    __Vtask_scheduler_tb__DOT__run_kernel__14__test_N = 1U;
    vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__14__label = "N=1 edge case"s;
    vlSelfRef.scheduler_tb__DOT__N = (0x000000ffU & __Vtask_scheduler_tb__DOT__run_kernel__14__test_N);
    vlSelfRef.scheduler_tb__DOT__thread_count = (0x000000ffU 
                                                 & __Vtask_scheduler_tb__DOT__run_kernel__14__test_tc);
    vlSelfRef.scheduler_tb__DOT__fma_count = 0U;
    vlSelfRef.scheduler_tb__DOT__write_count = 0U;
    vlSelfRef.scheduler_tb__DOT__kernel_init_count = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_t = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_k = 0U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         132);
    vlSelfRef.scheduler_tb__DOT__start = 1U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         134);
    vlSelfRef.scheduler_tb__DOT__start = 0U;
    while ((1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__done)))) {
        Vscheduler___024root____VbeforeTrig_h1f37aafa__0(vlSelf, 
                                                         "@( scheduler_tb.done)");
        co_await vlSelfRef.__VtrigSched_h1f37aafa__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( scheduler_tb.done)", 
                                                             "tb/scheduler/scheduler_tb.sv", 
                                                             295);
    }
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         296);
    __Vtask_scheduler_tb__DOT__check_block_counts__17__expect_kernel_init 
        = __Vtask_scheduler_tb__DOT__run_kernel__14__expect_kernel_init;
    __Vtask_scheduler_tb__DOT__check_block_counts__17__test_tc 
        = __Vtask_scheduler_tb__DOT__run_kernel__14__test_tc;
    __Vtask_scheduler_tb__DOT__check_block_counts__17__test_N 
        = __Vtask_scheduler_tb__DOT__run_kernel__14__test_N;
    vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__17__label 
        = vlSelfRef.__Vtask_scheduler_tb__DOT__run_kernel__14__label;
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__fma_count 
                      != VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__17__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__17__test_tc))))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:236: Assertion failed in %m: %s: wrong FMA count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__17__label)
                     , '~',32,VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts__17__test_N, __Vtask_scheduler_tb__DOT__check_block_counts__17__test_tc)
                     , '~',32,vlSelfRef.scheduler_tb__DOT__fma_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 236, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__write_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__17__test_tc)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:242: Assertion failed in %m: %s: wrong write count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__17__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__17__test_tc
                     , '~',32,vlSelfRef.scheduler_tb__DOT__write_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 242, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__kernel_init_count 
                      != __Vtask_scheduler_tb__DOT__check_block_counts__17__expect_kernel_init)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:248: Assertion failed in %m: %s: wrong kernel_init count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts__17__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts__17__expect_kernel_init
                     , '~',32,vlSelfRef.scheduler_tb__DOT__kernel_init_count);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 248, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    vlSelfRef.scheduler_tb__DOT__rst_lat2 = 0U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         333);
    vlSelfRef.scheduler_tb__DOT__fma_count_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__write_count_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__kernel_init_count_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_t_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__expected_k_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__wait_cycles_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__wait_run_lat2 = 0U;
    vlSelfRef.scheduler_tb__DOT__prev_state_lat2 = 2U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         139);
    vlSelfRef.scheduler_tb__DOT__start_lat2 = 1U;
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         141);
    vlSelfRef.scheduler_tb__DOT__start_lat2 = 0U;
    while ((1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__done_lat2)))) {
        Vscheduler___024root____VbeforeTrig_h345ff2b5__0(vlSelf, 
                                                         "@( scheduler_tb.done_lat2)");
        co_await vlSelfRef.__VtrigSched_h345ff2b5__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( scheduler_tb.done_lat2)", 
                                                             "tb/scheduler/scheduler_tb.sv", 
                                                             336);
    }
    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(vlSelf, 
                                                     "@(posedge scheduler_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hcb5df0f3__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge scheduler_tb.clk)", 
                                                         "tb/scheduler/scheduler_tb.sv", 
                                                         337);
    __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__expect_kernel_init = 1U;
    __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc = 2U;
    __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_N = 2U;
    vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__label = "BRAM_LATENCY=2"s;
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__fma_count_lat2 
                      != VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_N, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc))))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:261: Assertion failed in %m: %s: wrong FMA count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts_lat2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__label)
                     , '~',32,VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_N, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc)
                     , '~',32,vlSelfRef.scheduler_tb__DOT__fma_count_lat2);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 261, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__write_count_lat2 
                      != __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:267: Assertion failed in %m: %s: wrong write count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts_lat2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc
                     , '~',32,vlSelfRef.scheduler_tb__DOT__write_count_lat2);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 267, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__kernel_init_count_lat2 
                      != __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__expect_kernel_init)))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:273: Assertion failed in %m: %s: wrong kernel_init count. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts_lat2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__label)
                     , '~',32,__Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__expect_kernel_init
                     , '~',32,vlSelfRef.scheduler_tb__DOT__kernel_init_count_lat2);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 273, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_UNLIKELY(((vlSelfRef.scheduler_tb__DOT__wait_cycles_lat2 
                      != VL_MULS_III(32, (IData)(2U), 
                                     VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_N, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc)))))) {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:279: Assertion failed in %m: %s: wrong total WAIT cycles. Expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"scheduler_tb.check_block_counts_lat2", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , 'S',&(vlSelfRef.__Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__label)
                     , '~',32,VL_MULS_III(32, (IData)(2U), 
                                          VL_MULS_III(32, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_N, __Vtask_scheduler_tb__DOT__check_block_counts_lat2__20__test_tc))
                     , '~',32,vlSelfRef.scheduler_tb__DOT__wait_cycles_lat2);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 279, "");
        vlSelfRef.scheduler_tb__DOT__errors = ((IData)(1U) 
                                               + vlSelfRef.scheduler_tb__DOT__errors);
    }
    if (VL_LIKELY(((0U == vlSelfRef.scheduler_tb__DOT__errors)))) {
        VL_WRITEF_NX("PASS: scheduler test passed (5 cases)\n",0);
    } else {
        VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:343: Assertion failed in %m: FAIL: scheduler test failed with %0d errors\n",4, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.scheduler_tb__DOT__errors);
        VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 343, "");
    }
    VL_FINISH_MT("tb/scheduler/scheduler_tb.sv", 345, "");
    co_return;
}

VlCoroutine Vscheduler___024root___eval_initial__TOP__Vtiming__1(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    while (VL_LIKELY(!vlSymsp->_vm_contextp__->gotFinish())) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/scheduler/scheduler_tb.sv", 
                                             110);
        vlSelfRef.scheduler_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__clk)));
    }
    co_return;
}

void Vscheduler___024root___eval_triggers_vec__act(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_triggers_vec__act\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                       << 3U) 
                                                      | (((IData)(vlSelfRef.scheduler_tb__DOT__done_lat2) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done_lat2__0)) 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.scheduler_tb__DOT__done) 
                                                          != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done__0)) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.scheduler_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__clk__0 
        = vlSelfRef.scheduler_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done__0 
        = vlSelfRef.scheduler_tb__DOT__done;
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done_lat2__0 
        = vlSelfRef.scheduler_tb__DOT__done_lat2;
}

bool Vscheduler___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vscheduler___024root___act_comb__TOP__0(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___act_comb__TOP__0\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.scheduler_tb__DOT__dut__DOT__is_last_thread 
        = ((IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt) 
           == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count) 
                              - (IData)(1U))));
    vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__is_last_thread 
        = ((IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt) 
           == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count_lat2) 
                              - (IData)(1U))));
}

void Vscheduler___024root___eval_act(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_act\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((7ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.scheduler_tb__DOT__dut__DOT__is_last_thread 
            = ((IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt) 
               == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count) 
                                  - (IData)(1U))));
        vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__is_last_thread 
            = ((IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt) 
               == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count_lat2) 
                                  - (IData)(1U))));
    }
}

void Vscheduler___024root___nba_sequent__TOP__0(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___nba_sequent__TOP__0\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ scheduler_tb__DOT__data_valid_lat2;
    scheduler_tb__DOT__data_valid_lat2 = 0;
    CData/*3:0*/ __Vdly__scheduler_tb__DOT__fsm_state;
    __Vdly__scheduler_tb__DOT__fsm_state = 0;
    CData/*7:0*/ __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt;
    __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt = 0;
    CData/*7:0*/ __Vdly__scheduler_tb__DOT__dut__DOT__k_cnt;
    __Vdly__scheduler_tb__DOT__dut__DOT__k_cnt = 0;
    CData/*0:0*/ __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt;
    __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt = 0;
    CData/*3:0*/ __Vdly__scheduler_tb__DOT__fsm_state_lat2;
    __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 0;
    CData/*7:0*/ __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt;
    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt = 0;
    CData/*7:0*/ __Vdly__scheduler_tb__DOT__dut_lat2__DOT__k_cnt;
    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__k_cnt = 0;
    CData/*0:0*/ __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt;
    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt = 0;
    // Body
    __Vdly__scheduler_tb__DOT__fsm_state = vlSelfRef.scheduler_tb__DOT__fsm_state;
    __Vdly__scheduler_tb__DOT__dut__DOT__k_cnt = vlSelfRef.scheduler_tb__DOT__dut__DOT__k_cnt;
    __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt = vlSelfRef.scheduler_tb__DOT__dut__DOT__wait_cnt;
    __Vdly__scheduler_tb__DOT__fsm_state_lat2 = vlSelfRef.scheduler_tb__DOT__fsm_state_lat2;
    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__k_cnt 
        = vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__k_cnt;
    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt 
        = vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__wait_cnt;
    __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt = vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt;
    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt 
        = vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt;
    if ((1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__rst_lat2)))) {
        if ((2U == (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
            vlSelfRef.scheduler_tb__DOT__wait_run_lat2 
                = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__wait_run_lat2);
        }
        if (vlSelfRef.scheduler_tb__DOT__kernel_init_lat2) {
            vlSelfRef.scheduler_tb__DOT__kernel_init_count_lat2 
                = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__kernel_init_count_lat2);
        }
        if (vlSelfRef.scheduler_tb__DOT__mem_write_en_lat2) {
            vlSelfRef.scheduler_tb__DOT__write_count_lat2 
                = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__write_count_lat2);
        }
        if (((2U == (IData)(vlSelfRef.scheduler_tb__DOT__prev_state_lat2)) 
             & (3U == (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2)))) {
            if (VL_UNLIKELY(((2U != vlSelfRef.scheduler_tb__DOT__wait_run_lat2)))) {
                VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:194: Assertion failed in %m: BRAM_LATENCY=2: expected 2 WAIT cycles, got %0d\n",4, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.scheduler_tb__DOT__wait_run_lat2);
                vlSelfRef.scheduler_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__errors);
                VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 194, "");
            }
            vlSelfRef.scheduler_tb__DOT__wait_cycles_lat2 
                = (vlSelfRef.scheduler_tb__DOT__wait_cycles_lat2 
                   + vlSelfRef.scheduler_tb__DOT__wait_run_lat2);
            vlSelfRef.scheduler_tb__DOT__wait_run_lat2 = 0U;
        }
        if ((2U != (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
            vlSelfRef.scheduler_tb__DOT__wait_run_lat2 = 0U;
        }
        vlSelfRef.scheduler_tb__DOT__prev_state_lat2 
            = vlSelfRef.scheduler_tb__DOT__fsm_state_lat2;
        if ((0U != (IData)(vlSelfRef.scheduler_tb__DOT__fma_en_lat2))) {
            if (VL_UNLIKELY((((1U & (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt)) 
                              != (1U & vlSelfRef.scheduler_tb__DOT__expected_t_lat2))))) {
                VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:209: Assertion failed in %m: [lat2] Expected thread %0d, got %0d\n",5, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.scheduler_tb__DOT__expected_t_lat2
                             , '#',1,(1U & (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt)));
                VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 209, "");
            }
            vlSelfRef.scheduler_tb__DOT__fma_count_lat2 
                = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__fma_count_lat2);
            if (VL_UNLIKELY((((IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__k_cnt) 
                              != (0x000000ffU & vlSelfRef.scheduler_tb__DOT__expected_k_lat2))))) {
                VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:212: Assertion failed in %m: [lat2] Expected k %0d, got %0d\n",5, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.scheduler_tb__DOT__expected_k_lat2
                             , '#',8,(IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__k_cnt));
                VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 212, "");
            }
            if ((vlSelfRef.scheduler_tb__DOT__expected_t_lat2 
                 == ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count_lat2) 
                     - (IData)(1U)))) {
                vlSelfRef.scheduler_tb__DOT__expected_k_lat2 
                    = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__expected_k_lat2);
                vlSelfRef.scheduler_tb__DOT__expected_t_lat2 = 0U;
            } else {
                vlSelfRef.scheduler_tb__DOT__expected_t_lat2 
                    = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__expected_t_lat2);
            }
        }
    }
    if ((1U & (~ (IData)(vlSelfRef.scheduler_tb__DOT__rst)))) {
        if (vlSelfRef.scheduler_tb__DOT__kernel_init) {
            vlSelfRef.scheduler_tb__DOT__kernel_init_count 
                = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__kernel_init_count);
        }
        if ((0U != (IData)(vlSelfRef.scheduler_tb__DOT__fma_en))) {
            if (VL_UNLIKELY((((IData)(vlSelfRef.scheduler_tb__DOT__fma_en) 
                              != (IData)(vlSelfRef.scheduler_tb__DOT__data_valid))))) {
                VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:153: Assertion failed in %m: fma_en and data_valid mismatch. fma_en=%b data_valid=%b\n",5, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',2,(IData)(vlSelfRef.scheduler_tb__DOT__fma_en)
                             , '#',2,vlSelfRef.scheduler_tb__DOT__data_valid);
                VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 153, "");
            }
            vlSelfRef.scheduler_tb__DOT__fma_count 
                = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__fma_count);
            if (VL_UNLIKELY((((1U & (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt)) 
                              != (1U & vlSelfRef.scheduler_tb__DOT__expected_t))))) {
                VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:157: Assertion failed in %m: Expected thread %0d, got %0d\n",5, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.scheduler_tb__DOT__expected_t
                             , '#',1,(1U & (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt)));
                VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 157, "");
            }
            if (VL_UNLIKELY((((IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__k_cnt) 
                              != (0x000000ffU & vlSelfRef.scheduler_tb__DOT__expected_k))))) {
                VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:160: Assertion failed in %m: Expected k %0d, got %0d\n",5, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '~',32,vlSelfRef.scheduler_tb__DOT__expected_k
                             , '#',8,(IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__k_cnt));
                VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 160, "");
            }
            if (VL_UNLIKELY(((1U & ((~ ((IData)(vlSelfRef.scheduler_tb__DOT__fma_en) 
                                        >> (1U & (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt)))) 
                                    | (~ ((IData)(vlSelfRef.scheduler_tb__DOT__data_valid) 
                                          >> (1U & (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt))))))))) {
                VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:163: Assertion failed in %m: Selected thread did not get fma_en/data_valid\n",3, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000));
                VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 163, "");
            }
            if ((vlSelfRef.scheduler_tb__DOT__expected_t 
                 == ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count) 
                     - (IData)(1U)))) {
                vlSelfRef.scheduler_tb__DOT__expected_k 
                    = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__expected_k);
                vlSelfRef.scheduler_tb__DOT__expected_t = 0U;
            } else {
                vlSelfRef.scheduler_tb__DOT__expected_t 
                    = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__expected_t);
            }
        }
        if (vlSelfRef.scheduler_tb__DOT__mem_write_en) {
            vlSelfRef.scheduler_tb__DOT__write_count 
                = ((IData)(1U) + vlSelfRef.scheduler_tb__DOT__write_count);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.scheduler_tb__DOT__mem_write_en) 
                          & (0U != (IData)(vlSelfRef.scheduler_tb__DOT__fma_en)))))) {
            VL_WRITEF_NX("[%0t] %%Error: scheduler_tb.sv:179: Assertion failed in %m: mem_write_en and fma_en were high in the same cycle\n",3, 'M',vlSymsp->name(),"scheduler_tb", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000));
            VL_STOP_MT("tb/scheduler/scheduler_tb.sv", 179, "");
        }
    }
    if (vlSelfRef.scheduler_tb__DOT__rst_lat2) {
        __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 0U;
        __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt = 0U;
        __Vdly__scheduler_tb__DOT__dut_lat2__DOT__k_cnt = 0U;
        __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt = 0U;
        vlSelfRef.scheduler_tb__DOT__done_lat2 = 0U;
        scheduler_tb__DOT__data_valid_lat2 = 0U;
        vlSelfRef.scheduler_tb__DOT__fma_en_lat2 = 0U;
        vlSelfRef.scheduler_tb__DOT__mem_write_en_lat2 = 0U;
        vlSelfRef.scheduler_tb__DOT__kernel_init_lat2 = 0U;
    } else {
        scheduler_tb__DOT__data_valid_lat2 = 0U;
        vlSelfRef.scheduler_tb__DOT__fma_en_lat2 = 0U;
        vlSelfRef.scheduler_tb__DOT__mem_write_en_lat2 = 0U;
        vlSelfRef.scheduler_tb__DOT__kernel_init_lat2 = 0U;
        if ((8U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
            if ((4U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 0U;
            } else if ((2U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 0U;
            } else if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 0U;
            } else {
                vlSelfRef.scheduler_tb__DOT__done_lat2 = 1U;
                if (vlSelfRef.scheduler_tb__DOT__start_lat2) {
                    vlSelfRef.scheduler_tb__DOT__done_lat2 = 0U;
                    __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 1U;
                    vlSelfRef.scheduler_tb__DOT__kernel_init_lat2 = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
            if ((2U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
                if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
                    if (vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__is_last_thread) {
                        __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 8U;
                    } else {
                        __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt)));
                        __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 6U;
                    }
                } else {
                    vlSelfRef.scheduler_tb__DOT__mem_write_en_lat2 = 1U;
                    __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
                if (((IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__k_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__N_lat2) 
                                        - (IData)(1U))))) {
                    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt = 0U;
                    __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 6U;
                } else {
                    __Vdly__scheduler_tb__DOT__dut_lat2__DOT__k_cnt 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__k_cnt)));
                    __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 2U;
                }
            } else if (vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__is_last_thread) {
                __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt = 0U;
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 5U;
            } else {
                __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt)));
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
            if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
                scheduler_tb__DOT__data_valid_lat2 
                    = ((IData)(scheduler_tb__DOT__data_valid_lat2) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt)))));
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 4U;
                vlSelfRef.scheduler_tb__DOT__fma_en_lat2 
                    = ((IData)(vlSelfRef.scheduler_tb__DOT__fma_en_lat2) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt)))));
            } else if (vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__wait_cnt) {
                __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt = 0U;
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 3U;
            } else {
                __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__wait_cnt)));
            }
        } else if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state_lat2))) {
            __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt = 0U;
            __Vdly__scheduler_tb__DOT__dut_lat2__DOT__k_cnt = 0U;
            __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt = 0U;
            __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 2U;
        } else {
            vlSelfRef.scheduler_tb__DOT__done_lat2 = 0U;
            if (vlSelfRef.scheduler_tb__DOT__start_lat2) {
                __Vdly__scheduler_tb__DOT__fsm_state_lat2 = 1U;
                vlSelfRef.scheduler_tb__DOT__kernel_init_lat2 = 1U;
            }
        }
    }
    if (vlSelfRef.scheduler_tb__DOT__rst) {
        __Vdly__scheduler_tb__DOT__fsm_state = 0U;
        __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt = 0U;
        __Vdly__scheduler_tb__DOT__dut__DOT__k_cnt = 0U;
        __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt = 0U;
        vlSelfRef.scheduler_tb__DOT__done = 0U;
        vlSelfRef.scheduler_tb__DOT__data_valid = 0U;
        vlSelfRef.scheduler_tb__DOT__fma_en = 0U;
        vlSelfRef.scheduler_tb__DOT__mem_write_en = 0U;
        vlSelfRef.scheduler_tb__DOT__kernel_init = 0U;
    } else {
        vlSelfRef.scheduler_tb__DOT__data_valid = 0U;
        vlSelfRef.scheduler_tb__DOT__fma_en = 0U;
        vlSelfRef.scheduler_tb__DOT__mem_write_en = 0U;
        vlSelfRef.scheduler_tb__DOT__kernel_init = 0U;
        if ((8U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
            if ((4U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
                __Vdly__scheduler_tb__DOT__fsm_state = 0U;
            } else if ((2U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
                __Vdly__scheduler_tb__DOT__fsm_state = 0U;
            } else if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
                __Vdly__scheduler_tb__DOT__fsm_state = 0U;
            } else {
                vlSelfRef.scheduler_tb__DOT__done = 1U;
                if (vlSelfRef.scheduler_tb__DOT__start) {
                    vlSelfRef.scheduler_tb__DOT__done = 0U;
                    __Vdly__scheduler_tb__DOT__fsm_state = 1U;
                    vlSelfRef.scheduler_tb__DOT__kernel_init = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
            if ((2U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
                if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
                    if (vlSelfRef.scheduler_tb__DOT__dut__DOT__is_last_thread) {
                        __Vdly__scheduler_tb__DOT__fsm_state = 8U;
                    } else {
                        __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt)));
                        __Vdly__scheduler_tb__DOT__fsm_state = 6U;
                    }
                } else {
                    vlSelfRef.scheduler_tb__DOT__mem_write_en = 1U;
                    __Vdly__scheduler_tb__DOT__fsm_state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
                if (((IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__k_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__N) 
                                        - (IData)(1U))))) {
                    __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt = 0U;
                    __Vdly__scheduler_tb__DOT__fsm_state = 6U;
                } else {
                    __Vdly__scheduler_tb__DOT__dut__DOT__k_cnt 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__k_cnt)));
                    __Vdly__scheduler_tb__DOT__fsm_state = 2U;
                }
            } else if (vlSelfRef.scheduler_tb__DOT__dut__DOT__is_last_thread) {
                __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt = 0U;
                __Vdly__scheduler_tb__DOT__fsm_state = 5U;
            } else {
                __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt)));
                __Vdly__scheduler_tb__DOT__fsm_state = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
            if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
                vlSelfRef.scheduler_tb__DOT__data_valid 
                    = ((IData)(vlSelfRef.scheduler_tb__DOT__data_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt)))));
                __Vdly__scheduler_tb__DOT__fsm_state = 4U;
                vlSelfRef.scheduler_tb__DOT__fma_en 
                    = ((IData)(vlSelfRef.scheduler_tb__DOT__fma_en) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt)))));
            } else if (vlSelfRef.scheduler_tb__DOT__dut__DOT__wait_cnt) {
                __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__wait_cnt)));
            } else {
                __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt = 0U;
                __Vdly__scheduler_tb__DOT__fsm_state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.scheduler_tb__DOT__fsm_state))) {
            __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt = 0U;
            __Vdly__scheduler_tb__DOT__dut__DOT__k_cnt = 0U;
            __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt = 0U;
            __Vdly__scheduler_tb__DOT__fsm_state = 2U;
        } else {
            vlSelfRef.scheduler_tb__DOT__done = 0U;
            if (vlSelfRef.scheduler_tb__DOT__start) {
                __Vdly__scheduler_tb__DOT__fsm_state = 1U;
                vlSelfRef.scheduler_tb__DOT__kernel_init = 1U;
            }
        }
    }
    vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__wait_cnt 
        = __Vdly__scheduler_tb__DOT__dut_lat2__DOT__wait_cnt;
    vlSelfRef.scheduler_tb__DOT__fsm_state_lat2 = __Vdly__scheduler_tb__DOT__fsm_state_lat2;
    vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__k_cnt 
        = __Vdly__scheduler_tb__DOT__dut_lat2__DOT__k_cnt;
    vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt 
        = __Vdly__scheduler_tb__DOT__dut_lat2__DOT__t_cnt;
    vlSelfRef.scheduler_tb__DOT__fsm_state = __Vdly__scheduler_tb__DOT__fsm_state;
    vlSelfRef.scheduler_tb__DOT__dut__DOT__wait_cnt 
        = __Vdly__scheduler_tb__DOT__dut__DOT__wait_cnt;
    vlSelfRef.scheduler_tb__DOT__dut__DOT__k_cnt = __Vdly__scheduler_tb__DOT__dut__DOT__k_cnt;
    vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt = __Vdly__scheduler_tb__DOT__dut__DOT__t_cnt;
}

void Vscheduler___024root___nba_comb__TOP__0(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___nba_comb__TOP__0\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__is_last_thread 
        = ((IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt) 
           == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count_lat2) 
                              - (IData)(1U))));
    vlSelfRef.scheduler_tb__DOT__dut__DOT__is_last_thread 
        = ((IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt) 
           == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count) 
                              - (IData)(1U))));
}

void Vscheduler___024root___eval_nba(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_nba\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vscheduler___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((7ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__is_last_thread 
            = ((IData)(vlSelfRef.scheduler_tb__DOT__dut_lat2__DOT__t_cnt) 
               == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count_lat2) 
                                  - (IData)(1U))));
        vlSelfRef.scheduler_tb__DOT__dut__DOT__is_last_thread 
            = ((IData)(vlSelfRef.scheduler_tb__DOT__dut__DOT__t_cnt) 
               == (0x000000ffU & ((IData)(vlSelfRef.scheduler_tb__DOT__thread_count) 
                                  - (IData)(1U))));
    }
}

void Vscheduler___024root___timing_ready(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___timing_ready\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready("@(posedge scheduler_tb.clk)");
    }
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h1f37aafa__0.ready("@( scheduler_tb.done)");
    }
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h345ff2b5__0.ready("@( scheduler_tb.done_lat2)");
    }
}

void Vscheduler___024root___timing_resume(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___timing_resume\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hcb5df0f3__0.moveToResumeQueue(
                                                          "@(posedge scheduler_tb.clk)");
    vlSelfRef.__VtrigSched_h1f37aafa__0.moveToResumeQueue(
                                                          "@( scheduler_tb.done)");
    vlSelfRef.__VtrigSched_h345ff2b5__0.moveToResumeQueue(
                                                          "@( scheduler_tb.done_lat2)");
    vlSelfRef.__VtrigSched_hcb5df0f3__0.resume("@(posedge scheduler_tb.clk)");
    vlSelfRef.__VtrigSched_h1f37aafa__0.resume("@( scheduler_tb.done)");
    vlSelfRef.__VtrigSched_h345ff2b5__0.resume("@( scheduler_tb.done_lat2)");
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vscheduler___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscheduler___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vscheduler___024root___eval_phase__act(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_phase__act\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vscheduler___024root___eval_triggers_vec__act(vlSelf);
    Vscheduler___024root___timing_ready(vlSelf);
    Vscheduler___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vscheduler___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vscheduler___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vscheduler___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vscheduler___024root___timing_resume(vlSelf);
        Vscheduler___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vscheduler___024root___eval_phase__inact(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_phase__inact\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/scheduler/scheduler_tb.sv", 16, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vscheduler___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vscheduler___024root___eval_phase__nba(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_phase__nba\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vscheduler___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vscheduler___024root___eval_nba(vlSelf);
        Vscheduler___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vscheduler___024root___eval(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vscheduler___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/scheduler/scheduler_tb.sv", 16, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/scheduler/scheduler_tb.sv", 16, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vscheduler___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/scheduler/scheduler_tb.sv", 16, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vscheduler___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vscheduler___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vscheduler___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vscheduler___024root____VbeforeTrig_hcb5df0f3__0(Vscheduler___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root____VbeforeTrig_hcb5df0f3__0\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.scheduler_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__clk__0 
        = vlSelfRef.scheduler_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hcb5df0f3__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vscheduler___024root____VbeforeTrig_h1f37aafa__0(Vscheduler___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root____VbeforeTrig_h1f37aafa__0\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.scheduler_tb__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done__0)) 
                                  << 1U)));
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done__0 
        = vlSelfRef.scheduler_tb__DOT__done;
    if ((2ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h1f37aafa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f37aafa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f37aafa__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h1f37aafa__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vscheduler___024root____VbeforeTrig_h345ff2b5__0(Vscheduler___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root____VbeforeTrig_h345ff2b5__0\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.scheduler_tb__DOT__done_lat2) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done_lat2__0)) 
                                  << 2U)));
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done_lat2__0 
        = vlSelfRef.scheduler_tb__DOT__done_lat2;
    if ((4ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h345ff2b5__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vscheduler___024root___eval_debug_assertions(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_debug_assertions\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
