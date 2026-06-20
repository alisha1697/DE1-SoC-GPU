// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthread.h for the primary calling header

#include "Vthread__pch.h"

void Vthread___024root___timing_ready(Vthread___024root* vlSelf);

VL_ATTR_COLD void Vthread___024root___eval_static(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_static\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thread_tb__DOT__errors = 0U;
    vlSelfRef.thread_tb__DOT__test_count = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0 
        = vlSelfRef.thread_tb__DOT__clk;
    Vthread___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vthread___024root___eval_static__TOP(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_static__TOP\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thread_tb__DOT__errors = 0U;
    vlSelfRef.thread_tb__DOT__test_count = 0U;
}

VL_ATTR_COLD void Vthread___024root___eval_initial__TOP(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_initial__TOP\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ thread_tb__DOT__unnamedblk1__DOT__i;
    thread_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    thread_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, thread_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.thread_tb__DOT__mem_A[(0x000000ffU 
                                         & thread_tb__DOT__unnamedblk1__DOT__i)] 
            = (0x0000ffffU & ((IData)(1U) + thread_tb__DOT__unnamedblk1__DOT__i));
        vlSelfRef.thread_tb__DOT__mem_B[(0x000000ffU 
                                         & thread_tb__DOT__unnamedblk1__DOT__i)] 
            = (0x0000ffffU & VL_MULS_III(32, (IData)(2U), 
                                         ((IData)(1U) 
                                          + thread_tb__DOT__unnamedblk1__DOT__i)));
        thread_tb__DOT__unnamedblk1__DOT__i = ((IData)(1U) 
                                               + thread_tb__DOT__unnamedblk1__DOT__i);
    }
}

VL_ATTR_COLD void Vthread___024root___eval_final(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_final\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthread___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vthread___024root___eval_phase__stl(Vthread___024root* vlSelf);

VL_ATTR_COLD void Vthread___024root___eval_settle(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_settle\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vthread___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/thread/thread_tb.sv", 3, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vthread___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vthread___024root___eval_triggers_vec__stl(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_triggers_vec__stl\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vthread___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthread___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vthread___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vthread___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vthread___024root___eval_stl(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_stl\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in 
            = ((IData)(vlSelfRef.thread_tb__DOT__en) 
               & (IData)(vlSelfRef.thread_tb__DOT__data_valid));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = 
            (0x0000ffffU & ((0x000000ffU & VL_DIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N))) 
                            * (IData)(vlSelfRef.thread_tb__DOT__N)));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = 
            (0x000000ffU & VL_MODDIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N)));
        vlSelfRef.thread_tb__DOT__addr_A = (0x0000ffffU 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                               + ((IData)(vlSelfRef.thread_tb__DOT__base_addr_A) 
                                                  + (IData)(vlSelfRef.thread_tb__DOT__k))));
        vlSelfRef.thread_tb__DOT__addr_C = (0x0000ffffU 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                               + ((IData)(vlSelfRef.thread_tb__DOT__base_addr_C) 
                                                  + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0))));
        vlSelfRef.thread_tb__DOT__addr_B = (0x0000ffffU 
                                            & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                               + ((IData)(vlSelfRef.thread_tb__DOT__base_addr_B) 
                                                  + 
                                                  ((IData)(vlSelfRef.thread_tb__DOT__k) 
                                                   * (IData)(vlSelfRef.thread_tb__DOT__N)))));
    }
}

VL_ATTR_COLD bool Vthread___024root___eval_phase__stl(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_phase__stl\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vthread___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vthread___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vthread___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vthread___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vthread___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vthread___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vthread___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge thread_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vthread___024root___ctor_var_reset(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___ctor_var_reset\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->thread_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 448554790433174862ull);
    vlSelf->thread_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13779393205678109962ull);
    vlSelf->thread_tb__DOT__en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6267980237218019603ull);
    vlSelf->thread_tb__DOT__N = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10066394136797716940ull);
    vlSelf->thread_tb__DOT__k = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15593411472547871644ull);
    vlSelf->thread_tb__DOT__thread_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6236567141296754061ull);
    vlSelf->thread_tb__DOT__base_addr_A = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15017292739755918475ull);
    vlSelf->thread_tb__DOT__base_addr_B = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8770509074796361425ull);
    vlSelf->thread_tb__DOT__base_addr_C = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16498308632072954392ull);
    vlSelf->thread_tb__DOT__data_valid = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2787314645097404083ull);
    vlSelf->thread_tb__DOT__addr_A = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8845589835411212146ull);
    vlSelf->thread_tb__DOT__addr_B = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3089160072031187423ull);
    vlSelf->thread_tb__DOT__addr_C = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 18427028603762932020ull);
    vlSelf->thread_tb__DOT__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12817878529337090531ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->thread_tb__DOT__mem_A[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16581632564589834127ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->thread_tb__DOT__mem_B[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7716705271271197040ull);
    }
    vlSelf->thread_tb__DOT__dut__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9808000653410994204ull);
    vlSelf->thread_tb__DOT__dut__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3214027071333976287ull);
    vlSelf->thread_tb__DOT__dut__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11898509840666440865ull);
    vlSelf->thread_tb__DOT__dut__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6060869674064302484ull);
    vlSelf->thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_0 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
