// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfma.h for the primary calling header

#include "Vfma__pch.h"

void Vfma___024root___timing_ready(Vfma___024root* vlSelf);

VL_ATTR_COLD void Vfma___024root___eval_static(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_static\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fma_tb__DOT__errors = 0U;
    vlSelfRef.__Vtrigprevexpr___TOP__fma_tb__DOT__clk__0 
        = vlSelfRef.fma_tb__DOT__clk;
    Vfma___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vfma___024root___eval_static__TOP(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_static__TOP\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fma_tb__DOT__errors = 0U;
}

VL_ATTR_COLD void Vfma___024root___eval_final(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_final\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VL_ATTR_COLD void Vfma___024root___eval_settle(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_settle\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

bool Vfma___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfma___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vfma___024root___trigger_anySet__act(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge fma_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfma___024root___ctor_var_reset(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___ctor_var_reset\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->fma_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 6113381709542267494ull);
    vlSelf->fma_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1913392768445516653ull);
    vlSelf->fma_tb__DOT__a = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15696895125889294486ull);
    vlSelf->fma_tb__DOT__b = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15086711973085002343ull);
    vlSelf->fma_tb__DOT__c = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2840596162316535610ull);
    vlSelf->fma_tb__DOT__valid_in = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16824240899772440225ull);
    vlSelf->fma_tb__DOT__result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2674068270070745339ull);
    vlSelf->fma_tb__DOT__valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15116783898095821514ull);
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__fma_tb__DOT__clk__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
