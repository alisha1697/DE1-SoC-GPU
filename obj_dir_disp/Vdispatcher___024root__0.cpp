// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdispatcher.h for the primary calling header

#include "Vdispatcher__pch.h"

VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__0(Vdispatcher___024root* vlSelf);
VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__1(Vdispatcher___024root* vlSelf);

void Vdispatcher___024root___eval_initial(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_initial\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vdispatcher___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vdispatcher___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__0(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dispatcher_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/dispatcher/dispatcher_tb.sv", 
                                             58);
        vlSelfRef.dispatcher_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__clk)));
    }
    co_return;
}

void Vdispatcher___024root____VbeforeTrig_h76981d66__0(Vdispatcher___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vdispatcher___024root* vlSelf);
VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vdispatcher___024root* vlSelf);
void Vdispatcher___024root____VbeforeTrig_h7d556d12__0(Vdispatcher___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__1(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ dispatcher_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    dispatcher_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    vlSelfRef.dispatcher_tb__DOT__rst = 1U;
    vlSelfRef.dispatcher_tb__DOT__N = 4U;
    vlSelfRef.dispatcher_tb__DOT__start = 0U;
    vlSelfRef.dispatcher_tb__DOT__core_ready = 3U;
    vlSelfRef.dispatcher_tb__DOT__core_done = 0U;
    dispatcher_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 2U;
    while (VL_LTS_III(32, 0U, dispatcher_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                          "@(posedge dispatcher_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dispatcher_tb.clk)", 
                                                             "tb/dispatcher/dispatcher_tb.sv", 
                                                             111);
        dispatcher_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (dispatcher_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.dispatcher_tb__DOT__rst = 0U;
    Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                      "@(posedge dispatcher_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dispatcher_tb.clk)", 
                                                         "tb/dispatcher/dispatcher_tb.sv", 
                                                         115);
    vlSelfRef.dispatcher_tb__DOT__start = 1U;
    Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                      "@(posedge dispatcher_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dispatcher_tb.clk)", 
                                                         "tb/dispatcher/dispatcher_tb.sv", 
                                                         118);
    vlSelfRef.dispatcher_tb__DOT__start = 0U;
    Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(vlSelf);
    Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(vlSelf);
    while ((1U & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__done)))) {
        Vdispatcher___024root____VbeforeTrig_h7d556d12__0(vlSelf, 
                                                          "@( dispatcher_tb.done)");
        co_await vlSelfRef.__VtrigSched_h7d556d12__0.trigger(1U, 
                                                             nullptr, 
                                                             "@( dispatcher_tb.done)", 
                                                             "tb/dispatcher/dispatcher_tb.sv", 
                                                             142);
    }
    Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                      "@(posedge dispatcher_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge dispatcher_tb.clk)", 
                                                         "tb/dispatcher/dispatcher_tb.sv", 
                                                         144);
    if (VL_UNLIKELY(((vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                      != ((IData)(vlSelfRef.dispatcher_tb__DOT__N) 
                          * (IData)(vlSelfRef.dispatcher_tb__DOT__N)))))) {
        VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:147: Assertion failed in %m: Wrong total threads assigned: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"dispatcher_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1), '#',8,
                     (0x000000ffU & ((IData)(vlSelfRef.dispatcher_tb__DOT__N) 
                                     * (IData)(vlSelfRef.dispatcher_tb__DOT__N)))
                     , '~',32,vlSelfRef.dispatcher_tb__DOT__total_threads_seen);
        VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 147, "");
        vlSelfRef.dispatcher_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.dispatcher_tb__DOT__errors);
    }
    if ((0U == vlSelfRef.dispatcher_tb__DOT__errors)) {
        VL_WRITEF_NX("\n=== PASS ===\n",0);
    } else {
        VL_WRITEF_NX("\n=== FAIL: %0d errors ===\n",1
                     , '~',32,vlSelfRef.dispatcher_tb__DOT__errors);
    }
    VL_FINISH_MT("tb/dispatcher/dispatcher_tb.sv", 158, "");
    co_return;
}

VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__1\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_dispatcher_tb__DOT__fake_core_done__1__core_id;
    __Vtask_dispatcher_tb__DOT__fake_core_done__1__core_id = 0;
    IData/*31:0*/ __Vtask_dispatcher_tb__DOT__fake_core_done__1__delay_cycles;
    __Vtask_dispatcher_tb__DOT__fake_core_done__1__delay_cycles = 0;
    IData/*31:0*/ __Vtask_dispatcher_tb__DOT__fake_core_done__1__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_dispatcher_tb__DOT__fake_core_done__1__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xffffffffffffffffULL, 
                                         nullptr, "tb/dispatcher/dispatcher_tb.sv", 
                                         122);
    while (true) {
        Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                          "@(posedge dispatcher_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dispatcher_tb.clk)", 
                                                             "tb/dispatcher/dispatcher_tb.sv", 
                                                             134);
        if ((2U & (IData)(vlSelfRef.dispatcher_tb__DOT__core_start))) {
            __Vtask_dispatcher_tb__DOT__fake_core_done__1__delay_cycles = 5U;
            __Vtask_dispatcher_tb__DOT__fake_core_done__1__core_id = 1U;
            __Vtask_dispatcher_tb__DOT__fake_core_done__1__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_dispatcher_tb__DOT__fake_core_done__1__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_dispatcher_tb__DOT__fake_core_done__1__delay_cycles;
            while (VL_LTS_III(32, 0U, __Vtask_dispatcher_tb__DOT__fake_core_done__1__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                                  "@(posedge dispatcher_tb.clk)");
                co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge dispatcher_tb.clk)", 
                                                                     "tb/dispatcher/dispatcher_tb.sv", 
                                                                     65);
                __Vtask_dispatcher_tb__DOT__fake_core_done__1__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_dispatcher_tb__DOT__fake_core_done__1__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.dispatcher_tb__DOT__core_done 
                = ((IData)(vlSelfRef.dispatcher_tb__DOT__core_done) 
                   | (3U & ((IData)(1U) << (1U & __Vtask_dispatcher_tb__DOT__fake_core_done__1__core_id))));
            Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                              "@(posedge dispatcher_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dispatcher_tb.clk)", 
                                                                 "tb/dispatcher/dispatcher_tb.sv", 
                                                                 67);
            vlSelfRef.dispatcher_tb__DOT__core_done 
                = ((~ ((IData)(1U) << (1U & __Vtask_dispatcher_tb__DOT__fake_core_done__1__core_id))) 
                   & (IData)(vlSelfRef.dispatcher_tb__DOT__core_done));
        }
    }
    co_return;
}

VlCoroutine Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_initial__TOP__Vtiming__1____Vfork_1__0\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_dispatcher_tb__DOT__fake_core_done__0__core_id;
    __Vtask_dispatcher_tb__DOT__fake_core_done__0__core_id = 0;
    IData/*31:0*/ __Vtask_dispatcher_tb__DOT__fake_core_done__0__delay_cycles;
    __Vtask_dispatcher_tb__DOT__fake_core_done__0__delay_cycles = 0;
    IData/*31:0*/ __Vtask_dispatcher_tb__DOT__fake_core_done__0__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_dispatcher_tb__DOT__fake_core_done__0__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xffffffffffffffffULL, 
                                         nullptr, "tb/dispatcher/dispatcher_tb.sv", 
                                         122);
    while (true) {
        Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                          "@(posedge dispatcher_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge dispatcher_tb.clk)", 
                                                             "tb/dispatcher/dispatcher_tb.sv", 
                                                             125);
        if ((1U & (IData)(vlSelfRef.dispatcher_tb__DOT__core_start))) {
            __Vtask_dispatcher_tb__DOT__fake_core_done__0__delay_cycles = 3U;
            __Vtask_dispatcher_tb__DOT__fake_core_done__0__core_id = 0U;
            __Vtask_dispatcher_tb__DOT__fake_core_done__0__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
            __Vtask_dispatcher_tb__DOT__fake_core_done__0__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                = __Vtask_dispatcher_tb__DOT__fake_core_done__0__delay_cycles;
            while (VL_LTS_III(32, 0U, __Vtask_dispatcher_tb__DOT__fake_core_done__0__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
                Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                                  "@(posedge dispatcher_tb.clk)");
                co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                                     nullptr, 
                                                                     "@(posedge dispatcher_tb.clk)", 
                                                                     "tb/dispatcher/dispatcher_tb.sv", 
                                                                     65);
                __Vtask_dispatcher_tb__DOT__fake_core_done__0__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                    = (__Vtask_dispatcher_tb__DOT__fake_core_done__0__dispatcher_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
                       - (IData)(1U));
            }
            vlSelfRef.dispatcher_tb__DOT__core_done 
                = ((IData)(vlSelfRef.dispatcher_tb__DOT__core_done) 
                   | (3U & ((IData)(1U) << (1U & __Vtask_dispatcher_tb__DOT__fake_core_done__0__core_id))));
            Vdispatcher___024root____VbeforeTrig_h76981d66__0(vlSelf, 
                                                              "@(posedge dispatcher_tb.clk)");
            co_await vlSelfRef.__VtrigSched_h76981d66__0.trigger(0U, 
                                                                 nullptr, 
                                                                 "@(posedge dispatcher_tb.clk)", 
                                                                 "tb/dispatcher/dispatcher_tb.sv", 
                                                                 67);
            vlSelfRef.dispatcher_tb__DOT__core_done 
                = ((~ ((IData)(1U) << (1U & __Vtask_dispatcher_tb__DOT__fake_core_done__0__core_id))) 
                   & (IData)(vlSelfRef.dispatcher_tb__DOT__core_done));
        }
    }
    co_return;
}

void Vdispatcher___024root___eval_triggers_vec__act(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_triggers_vec__act\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.dispatcher_tb__DOT__done) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__done__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.dispatcher_tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.dispatcher_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__clk__0 
        = vlSelfRef.dispatcher_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__rst__0 
        = vlSelfRef.dispatcher_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__done__0 
        = vlSelfRef.dispatcher_tb__DOT__done;
}

bool Vdispatcher___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___trigger_anySet__act\n"); );
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

void Vdispatcher___024root___act_comb__TOP__0(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___act_comb__TOP__0\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake 
        = ((IData)(vlSelfRef.dispatcher_tb__DOT__core_ready) 
           & (IData)(vlSelfRef.dispatcher_tb__DOT__core_valid));
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 0U;
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 0U;
    if ((1U & (((~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy)) 
                & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__core_valid))) 
               & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake))))) {
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 0U;
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 1U;
    }
    if ((1U & ((((~ ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy) 
                     >> 1U)) & (~ ((IData)(vlSelfRef.dispatcher_tb__DOT__core_valid) 
                                   >> 1U))) & (~ ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake) 
                                                  >> 1U))) 
               & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected))))) {
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 1U;
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 1U;
    }
}

void Vdispatcher___024root___eval_act(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_act\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake 
            = ((IData)(vlSelfRef.dispatcher_tb__DOT__core_ready) 
               & (IData)(vlSelfRef.dispatcher_tb__DOT__core_valid));
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 0U;
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 0U;
        if ((1U & (((~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy)) 
                    & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__core_valid))) 
                   & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake))))) {
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 0U;
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 1U;
        }
        if ((1U & ((((~ ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy) 
                         >> 1U)) & (~ ((IData)(vlSelfRef.dispatcher_tb__DOT__core_valid) 
                                       >> 1U))) & (~ 
                                                   ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake) 
                                                    >> 1U))) 
                   & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected))))) {
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 1U;
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 1U;
        }
    }
}

void Vdispatcher___024root___nba_sequent__TOP__0(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___nba_sequent__TOP__0\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__dispatcher_tb__DOT__dut__DOT__state;
    __Vdly__dispatcher_tb__DOT__dut__DOT__state = 0;
    SData/*15:0*/ __Vdly__dispatcher_tb__DOT__dut__DOT__next_thread_id;
    __Vdly__dispatcher_tb__DOT__dut__DOT__next_thread_id = 0;
    SData/*15:0*/ __Vdly__dispatcher_tb__DOT__dut__DOT__threads_remaining;
    __Vdly__dispatcher_tb__DOT__dut__DOT__threads_remaining = 0;
    CData/*1:0*/ __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy;
    __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy = 0;
    // Body
    __Vdly__dispatcher_tb__DOT__dut__DOT__state = vlSelfRef.dispatcher_tb__DOT__dut__DOT__state;
    __Vdly__dispatcher_tb__DOT__dut__DOT__next_thread_id 
        = vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_thread_id;
    __Vdly__dispatcher_tb__DOT__dut__DOT__threads_remaining 
        = vlSelfRef.dispatcher_tb__DOT__dut__DOT__threads_remaining;
    __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy 
        = vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy;
    vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v0 = 0U;
    vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v2 = 0U;
    vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid 
        = vlSelfRef.dispatcher_tb__DOT__core_valid;
    if (vlSelfRef.dispatcher_tb__DOT__rst) {
        __Vdly__dispatcher_tb__DOT__dut__DOT__state = 0U;
        __Vdly__dispatcher_tb__DOT__dut__DOT__next_thread_id = 0U;
        __Vdly__dispatcher_tb__DOT__dut__DOT__threads_remaining 
            = (0x0000ffffU & ((IData)(vlSelfRef.dispatcher_tb__DOT__N) 
                              * (IData)(vlSelfRef.dispatcher_tb__DOT__N)));
        __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy = 0U;
        vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid = 0U;
        vlSelfRef.dispatcher_tb__DOT__core_start = 0U;
        vlSelfRef.dispatcher_tb__DOT__done = 0U;
        vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v0 = 1U;
    } else if ((0U == (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__state))) {
        vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid = 0U;
        if (vlSelfRef.dispatcher_tb__DOT__start) {
            vlSelfRef.dispatcher_tb__DOT__done = 0U;
            __Vdly__dispatcher_tb__DOT__dut__DOT__next_thread_id = 0U;
            __Vdly__dispatcher_tb__DOT__dut__DOT__state = 1U;
        }
    } else if ((1U == (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__state))) {
        vlSelfRef.dispatcher_tb__DOT__core_start = 0U;
        if ((1U & (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake))) {
            vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid 
                = (2U & (IData)(vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid));
            vlSelfRef.dispatcher_tb__DOT__core_start 
                = (1U | (IData)(vlSelfRef.dispatcher_tb__DOT__core_start));
            __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy 
                = (1U | (IData)(__Vdly__dispatcher_tb__DOT__dut__DOT__core_busy));
        }
        if ((2U & (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake))) {
            vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid 
                = (1U & (IData)(vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid));
            vlSelfRef.dispatcher_tb__DOT__core_start 
                = (2U | (IData)(vlSelfRef.dispatcher_tb__DOT__core_start));
            __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy 
                = (2U | (IData)(__Vdly__dispatcher_tb__DOT__dut__DOT__core_busy));
        }
        if ((1U & (IData)(vlSelfRef.dispatcher_tb__DOT__core_done))) {
            __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy 
                = (2U & (IData)(__Vdly__dispatcher_tb__DOT__dut__DOT__core_busy));
        }
        if ((2U & (IData)(vlSelfRef.dispatcher_tb__DOT__core_done))) {
            __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy 
                = (1U & (IData)(__Vdly__dispatcher_tb__DOT__dut__DOT__core_busy));
        }
        if (((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected) 
             & (0U < (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__threads_remaining)))) {
            __Vdly__dispatcher_tb__DOT__dut__DOT__threads_remaining 
                = (0x0000ffffU & ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__threads_remaining) 
                                  - (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_block_size)));
            vlSelfRef.__VdlyVal__dispatcher_tb__DOT__core_thread_id__v2 
                = vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_thread_id;
            vlSelfRef.__VdlyDim0__dispatcher_tb__DOT__core_thread_id__v2 
                = vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx;
            vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v2 = 1U;
            vlSelfRef.__VdlyVal__dispatcher_tb__DOT__core_thread_count__v2 
                = vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_block_size;
            vlSelfRef.__VdlyDim0__dispatcher_tb__DOT__core_thread_count__v2 
                = vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx;
            vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid 
                = ((IData)(vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid) 
                   | (3U & ((IData)(1U) << (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx))));
            __Vdly__dispatcher_tb__DOT__dut__DOT__next_thread_id 
                = (0x0000ffffU & ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_thread_id) 
                                  + (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_block_size)));
        }
        if ((((0U == (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__threads_remaining)) 
              & (0U == (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy))) 
             & (0U == (IData)(vlSelfRef.dispatcher_tb__DOT__core_valid)))) {
            __Vdly__dispatcher_tb__DOT__dut__DOT__state = 2U;
        }
    } else if ((2U == (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__state))) {
        vlSelfRef.dispatcher_tb__DOT__done = 1U;
        __Vdly__dispatcher_tb__DOT__dut__DOT__state = 0U;
    } else {
        __Vdly__dispatcher_tb__DOT__dut__DOT__state = 0U;
    }
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__state = __Vdly__dispatcher_tb__DOT__dut__DOT__state;
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_thread_id 
        = __Vdly__dispatcher_tb__DOT__dut__DOT__next_thread_id;
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__threads_remaining 
        = __Vdly__dispatcher_tb__DOT__dut__DOT__threads_remaining;
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy 
        = __Vdly__dispatcher_tb__DOT__dut__DOT__core_busy;
    vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_block_size 
        = ((2U <= (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__threads_remaining))
            ? 2U : (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__threads_remaining));
}

void Vdispatcher___024root___nba_sequent__TOP__1(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___nba_sequent__TOP__1\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1U & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__rst)))) {
        if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.dispatcher_tb__DOT__core_valid) 
                                & (IData)(vlSelfRef.dispatcher_tb__DOT__core_ready)))))) {
            VL_WRITEF_NX("Handshake core 0: thread_id=%0d, count=%0d\n",2
                         , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U]
                         , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
            vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                = (vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                   + vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
            if (VL_UNLIKELY(((vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U] 
                              != (0x0000ffffU & vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id))))) {
                VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:83: Assertion failed in %m: Wrong thread_id on core 0: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '~',32,vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U]);
                vlSelfRef.dispatcher_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 83, "");
            }
            if (VL_UNLIKELY(((2U < vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U])))) {
                vlSelfRef.dispatcher_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:89: Assertion failed in %m: core_thread_count too large on core 0: got %0d\n",4, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
                VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 89, "");
            }
            vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                = (vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                   + vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
        }
        if (VL_UNLIKELY(((2U & ((IData)(vlSelfRef.dispatcher_tb__DOT__core_valid) 
                                & (IData)(vlSelfRef.dispatcher_tb__DOT__core_ready)))))) {
            vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                = (vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                   + vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
            VL_WRITEF_NX("Handshake core 1: thread_id=%0d, count=%0d\n",2
                         , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U]
                         , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
            if (VL_UNLIKELY(((vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U] 
                              != (0x0000ffffU & vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id))))) {
                vlSelfRef.dispatcher_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:83: Assertion failed in %m: Wrong thread_id on core 1: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '~',32,vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U]);
                VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 83, "");
            }
            if (VL_UNLIKELY(((2U < vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U])))) {
                vlSelfRef.dispatcher_tb__DOT__errors 
                    = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:89: Assertion failed in %m: core_thread_count too large on core 1: got %0d\n",4, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1)
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
                VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 89, "");
            }
            vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                = (vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                   + vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
        }
    }
}

void Vdispatcher___024root___nba_sequent__TOP__2(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___nba_sequent__TOP__2\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if (vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v0) {
        vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U] = 0U;
        vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U] = 0U;
        vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U] = 0U;
        vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U] = 0U;
    }
    if (vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v2) {
        vlSelfRef.dispatcher_tb__DOT__core_thread_id[vlSelfRef.__VdlyDim0__dispatcher_tb__DOT__core_thread_id__v2] 
            = vlSelfRef.__VdlyVal__dispatcher_tb__DOT__core_thread_id__v2;
        vlSelfRef.dispatcher_tb__DOT__core_thread_count[vlSelfRef.__VdlyDim0__dispatcher_tb__DOT__core_thread_count__v2] 
            = vlSelfRef.__VdlyVal__dispatcher_tb__DOT__core_thread_count__v2;
    }
    vlSelfRef.dispatcher_tb__DOT__core_valid = vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid;
}

void Vdispatcher___024root___eval_nba(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_nba\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vdispatcher___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if ((1U & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__rst)))) {
            if (VL_UNLIKELY(((1U & ((IData)(vlSelfRef.dispatcher_tb__DOT__core_valid) 
                                    & (IData)(vlSelfRef.dispatcher_tb__DOT__core_ready)))))) {
                VL_WRITEF_NX("Handshake core 0: thread_id=%0d, count=%0d\n",2
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U]
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
                vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                    = (vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                       + vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
                if (VL_UNLIKELY(((vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U] 
                                  != (0x0000ffffU & vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id))))) {
                    VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:83: Assertion failed in %m: Wrong thread_id on core 0: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '~',32,vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id
                                 , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U]);
                    vlSelfRef.dispatcher_tb__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                    VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 83, "");
                }
                if (VL_UNLIKELY(((2U < vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U])))) {
                    vlSelfRef.dispatcher_tb__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                    VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:89: Assertion failed in %m: core_thread_count too large on core 0: got %0d\n",4, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
                    VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 89, "");
                }
                vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                    = (vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                       + vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U]);
            }
            if (VL_UNLIKELY(((2U & ((IData)(vlSelfRef.dispatcher_tb__DOT__core_valid) 
                                    & (IData)(vlSelfRef.dispatcher_tb__DOT__core_ready)))))) {
                vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                    = (vlSelfRef.dispatcher_tb__DOT__total_threads_seen 
                       + vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
                VL_WRITEF_NX("Handshake core 1: thread_id=%0d, count=%0d\n",2
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U]
                             , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
                if (VL_UNLIKELY(((vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U] 
                                  != (0x0000ffffU & vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id))))) {
                    vlSelfRef.dispatcher_tb__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                    VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:83: Assertion failed in %m: Wrong thread_id on core 1: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '~',32,vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id
                                 , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U]);
                    VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 83, "");
                }
                if (VL_UNLIKELY(((2U < vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U])))) {
                    vlSelfRef.dispatcher_tb__DOT__errors 
                        = ((IData)(1U) + vlSelfRef.dispatcher_tb__DOT__errors);
                    VL_WRITEF_NX("[%0t] %%Error: dispatcher_tb.sv:89: Assertion failed in %m: core_thread_count too large on core 1: got %0d\n",4, 'M',vlSymsp->name(),"dispatcher_tb.unnamedblk1", 'T',-9
                                 , '#',64,VL_TIME_UNITED_Q(1)
                                 , '#',16,vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
                    VL_STOP_MT("tb/dispatcher/dispatcher_tb.sv", 89, "");
                }
                vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                    = (vlSelfRef.dispatcher_tb__DOT__expected_next_thread_id 
                       + vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U]);
            }
        }
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        if (vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v0) {
            vlSelfRef.dispatcher_tb__DOT__core_thread_id[0U] = 0U;
            vlSelfRef.dispatcher_tb__DOT__core_thread_id[1U] = 0U;
            vlSelfRef.dispatcher_tb__DOT__core_thread_count[0U] = 0U;
            vlSelfRef.dispatcher_tb__DOT__core_thread_count[1U] = 0U;
        }
        if (vlSelfRef.__VdlySet__dispatcher_tb__DOT__core_thread_id__v2) {
            vlSelfRef.dispatcher_tb__DOT__core_thread_id[vlSelfRef.__VdlyDim0__dispatcher_tb__DOT__core_thread_id__v2] 
                = vlSelfRef.__VdlyVal__dispatcher_tb__DOT__core_thread_id__v2;
            vlSelfRef.dispatcher_tb__DOT__core_thread_count[vlSelfRef.__VdlyDim0__dispatcher_tb__DOT__core_thread_count__v2] 
                = vlSelfRef.__VdlyVal__dispatcher_tb__DOT__core_thread_count__v2;
        }
        vlSelfRef.dispatcher_tb__DOT__core_valid = vlSelfRef.__Vdly__dispatcher_tb__DOT__core_valid;
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake 
            = ((IData)(vlSelfRef.dispatcher_tb__DOT__core_ready) 
               & (IData)(vlSelfRef.dispatcher_tb__DOT__core_valid));
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 0U;
        vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 0U;
        if ((1U & (((~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy)) 
                    & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__core_valid))) 
                   & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake))))) {
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 0U;
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 1U;
        }
        if ((1U & ((((~ ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__core_busy) 
                         >> 1U)) & (~ ((IData)(vlSelfRef.dispatcher_tb__DOT__core_valid) 
                                       >> 1U))) & (~ 
                                                   ((IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__handshake) 
                                                    >> 1U))) 
                   & (~ (IData)(vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected))))) {
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__next_core_idx = 1U;
            vlSelfRef.dispatcher_tb__DOT__dut__DOT__any_cores_selected = 1U;
        }
    }
}

void Vdispatcher___024root___timing_ready(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___timing_ready\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h76981d66__0.ready("@(posedge dispatcher_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h7d556d12__0.ready("@( dispatcher_tb.done)");
    }
}

void Vdispatcher___024root___timing_resume(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___timing_resume\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h76981d66__0.moveToResumeQueue(
                                                          "@(posedge dispatcher_tb.clk)");
    vlSelfRef.__VtrigSched_h7d556d12__0.moveToResumeQueue(
                                                          "@( dispatcher_tb.done)");
    vlSelfRef.__VtrigSched_h76981d66__0.resume("@(posedge dispatcher_tb.clk)");
    vlSelfRef.__VtrigSched_h7d556d12__0.resume("@( dispatcher_tb.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vdispatcher___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vdispatcher___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vdispatcher___024root___eval_phase__act(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_phase__act\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vdispatcher___024root___eval_triggers_vec__act(vlSelf);
    Vdispatcher___024root___timing_ready(vlSelf);
    Vdispatcher___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vdispatcher___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vdispatcher___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vdispatcher___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vdispatcher___024root___timing_resume(vlSelf);
        Vdispatcher___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vdispatcher___024root___eval_phase__inact(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_phase__inact\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/dispatcher/dispatcher_tb.sv", 14, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vdispatcher___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vdispatcher___024root___eval_phase__nba(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_phase__nba\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vdispatcher___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vdispatcher___024root___eval_nba(vlSelf);
        Vdispatcher___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vdispatcher___024root___eval(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vdispatcher___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/dispatcher/dispatcher_tb.sv", 14, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/dispatcher/dispatcher_tb.sv", 14, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vdispatcher___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/dispatcher/dispatcher_tb.sv", 14, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vdispatcher___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vdispatcher___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vdispatcher___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vdispatcher___024root____VbeforeTrig_h76981d66__0(Vdispatcher___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root____VbeforeTrig_h76981d66__0\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.dispatcher_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__clk__0 
        = vlSelfRef.dispatcher_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h76981d66__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vdispatcher___024root____VbeforeTrig_h7d556d12__0(Vdispatcher___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root____VbeforeTrig_h7d556d12__0\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.dispatcher_tb__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__done__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__dispatcher_tb__DOT__done__0 
        = vlSelfRef.dispatcher_tb__DOT__done;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h7d556d12__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vdispatcher___024root___eval_debug_assertions(Vdispatcher___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vdispatcher___024root___eval_debug_assertions\n"); );
    Vdispatcher__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
