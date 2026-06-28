// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscheduler.h for the primary calling header

#include "Vscheduler__pch.h"

void Vscheduler___024root___timing_ready(Vscheduler___024root* vlSelf);

VL_ATTR_COLD void Vscheduler___024root___eval_static(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_static\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (2ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__VactTriggered[0U] = (4ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__clk__0 
        = vlSelfRef.scheduler_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done__0 
        = vlSelfRef.scheduler_tb__DOT__done;
    vlSelfRef.__Vtrigprevexpr___TOP__scheduler_tb__DOT__done_lat2__0 
        = vlSelfRef.scheduler_tb__DOT__done_lat2;
    Vscheduler___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vscheduler___024root___eval_final(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_final\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscheduler___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vscheduler___024root___eval_phase__stl(Vscheduler___024root* vlSelf);

VL_ATTR_COLD void Vscheduler___024root___eval_settle(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_settle\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vscheduler___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/scheduler/scheduler_tb.sv", 16, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vscheduler___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vscheduler___024root___eval_triggers_vec__stl(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_triggers_vec__stl\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vscheduler___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscheduler___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vscheduler___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vscheduler___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vscheduler___024root___eval_stl(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_stl\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
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

VL_ATTR_COLD bool Vscheduler___024root___eval_phase__stl(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___eval_phase__stl\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vscheduler___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vscheduler___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vscheduler___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vscheduler___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vscheduler___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vscheduler___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vscheduler___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge scheduler_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @( scheduler_tb.done)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @( scheduler_tb.done_lat2)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vscheduler___024root___ctor_var_reset(Vscheduler___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vscheduler___024root___ctor_var_reset\n"); );
    Vscheduler__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->scheduler_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14418733764384036144ull);
    vlSelf->scheduler_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4805660042685288647ull);
    vlSelf->scheduler_tb__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6776994874307324177ull);
    vlSelf->scheduler_tb__DOT__N = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 6119733845486241711ull);
    vlSelf->scheduler_tb__DOT__thread_count = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10892268852484329327ull);
    vlSelf->scheduler_tb__DOT__data_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 3817285725150345741ull);
    vlSelf->scheduler_tb__DOT__fma_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1152659110939586452ull);
    vlSelf->scheduler_tb__DOT__mem_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17975523176650826173ull);
    vlSelf->scheduler_tb__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4777873554930122441ull);
    vlSelf->scheduler_tb__DOT__fsm_state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 5829697018073503398ull);
    vlSelf->scheduler_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2708912279593794224ull);
    vlSelf->scheduler_tb__DOT__fma_count = 0;
    vlSelf->scheduler_tb__DOT__write_count = 0;
    vlSelf->scheduler_tb__DOT__kernel_init_count = 0;
    vlSelf->scheduler_tb__DOT__expected_t = 0;
    vlSelf->scheduler_tb__DOT__expected_k = 0;
    vlSelf->scheduler_tb__DOT__errors = 0;
    vlSelf->scheduler_tb__DOT__rst_lat2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2508217331390028791ull);
    vlSelf->scheduler_tb__DOT__start_lat2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17634338387334757104ull);
    vlSelf->scheduler_tb__DOT__N_lat2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13625928230007232017ull);
    vlSelf->scheduler_tb__DOT__thread_count_lat2 = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 8074641556494542236ull);
    vlSelf->scheduler_tb__DOT__fma_en_lat2 = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5117789465349148390ull);
    vlSelf->scheduler_tb__DOT__mem_write_en_lat2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7998104608139622278ull);
    vlSelf->scheduler_tb__DOT__kernel_init_lat2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3246392132858842270ull);
    vlSelf->scheduler_tb__DOT__fsm_state_lat2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 6658886209067477885ull);
    vlSelf->scheduler_tb__DOT__done_lat2 = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16541941815346368624ull);
    vlSelf->scheduler_tb__DOT__fma_count_lat2 = 0;
    vlSelf->scheduler_tb__DOT__write_count_lat2 = 0;
    vlSelf->scheduler_tb__DOT__kernel_init_count_lat2 = 0;
    vlSelf->scheduler_tb__DOT__expected_t_lat2 = 0;
    vlSelf->scheduler_tb__DOT__expected_k_lat2 = 0;
    vlSelf->scheduler_tb__DOT__wait_cycles_lat2 = 0;
    vlSelf->scheduler_tb__DOT__wait_run_lat2 = 0;
    vlSelf->scheduler_tb__DOT__prev_state_lat2 = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 14179789198299494608ull);
    vlSelf->scheduler_tb__DOT__dut__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 16308468112390925705ull);
    vlSelf->scheduler_tb__DOT__dut__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11766865161397197433ull);
    vlSelf->scheduler_tb__DOT__dut__DOT__wait_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9424833904705497162ull);
    vlSelf->scheduler_tb__DOT__dut__DOT__is_last_thread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9991562792081803186ull);
    vlSelf->scheduler_tb__DOT__dut_lat2__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 593235764851602401ull);
    vlSelf->scheduler_tb__DOT__dut_lat2__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10743871582941038752ull);
    vlSelf->scheduler_tb__DOT__dut_lat2__DOT__wait_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16997737197947811589ull);
    vlSelf->scheduler_tb__DOT__dut_lat2__DOT__is_last_thread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 558343540144147834ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__scheduler_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__scheduler_tb__DOT__done__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__scheduler_tb__DOT__done_lat2__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
