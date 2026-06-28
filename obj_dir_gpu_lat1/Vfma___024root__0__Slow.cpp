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
    vlSelfRef.gpu_top_tb__DOT__errors = 0U;
    vlSelfRef.gpu_top_tb__DOT__writes_observed = 0U;
    vlSelfRef.__VactTriggered[0U] = (8ULL | vlSelfRef.__VactTriggered[0U]);
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0 
        = vlSelfRef.gpu_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__rst__0 
        = vlSelfRef.gpu_top_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0 
        = vlSelfRef.gpu_top_tb__DOT__done;
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
    vlSelfRef.gpu_top_tb__DOT__errors = 0U;
    vlSelfRef.gpu_top_tb__DOT__writes_observed = 0U;
}

VL_ATTR_COLD VlCoroutine Vfma___024root___eval_initial__TOP____Vfork_1__0(Vfma___024root* vlSelf);

VL_ATTR_COLD void Vfma___024root___eval_initial__TOP(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ gpu_top_tb__DOT__unnamedblk2__DOT__i;
    gpu_top_tb__DOT__unnamedblk2__DOT__i = 0;
    // Body
    Vfma___024root___eval_initial__TOP____Vfork_1__0(vlSelf);
    gpu_top_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, gpu_top_tb__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[(0x000000ffU 
                                                     & gpu_top_tb__DOT__unnamedblk2__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[(0x000000ffU 
                                                     & gpu_top_tb__DOT__unnamedblk2__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[(0x000000ffU 
                                                     & gpu_top_tb__DOT__unnamedblk2__DOT__i)] = 0xdeadU;
        gpu_top_tb__DOT__unnamedblk2__DOT__i = ((IData)(1U) 
                                                + gpu_top_tb__DOT__unnamedblk2__DOT__i);
    }
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U] = 1U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U] = 1U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U] = 2U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U] = 2U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U] = 3U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U] = 3U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U] = 4U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U] = 4U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U] = 5U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U] = 5U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U] = 6U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U] = 6U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U] = 7U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U] = 7U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U] = 8U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U] = 8U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U] = 9U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U] = 9U;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U] = 0x000aU;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U] = 0x000aU;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U] = 0x000bU;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U] = 0x000bU;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U] = 0x000cU;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U] = 0x000cU;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U] = 0x000dU;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U] = 0x000dU;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U] = 0x000eU;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U] = 0x000eU;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U] = 0x000fU;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U] = 0x000fU;
    vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U] = 0x0010U;
    vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U] = 0x0010U;
}

void Vfma___024root____VbeforeTrig_ha5c6da72__0(Vfma___024root* vlSelf, const char* __VeventDescription);

VL_ATTR_COLD VlCoroutine Vfma___024root___eval_initial__TOP____Vfork_1__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP____Vfork_1__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xffffffffffffffffULL, 
                                         nullptr, "tb/Top/gpu_top_tb.sv", 
                                         119);
    while (true) {
        Vfma___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                   "@(posedge gpu_top_tb.clk)");
        co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge gpu_top_tb.clk)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             121);
        if (VL_UNLIKELY((((~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst)) 
                          & (0U != (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant)))))) {
            vlSelfRef.gpu_top_tb__DOT__writes_observed 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__writes_observed);
            VL_WRITEF_NX("  [t=%0t] bram_C[%0d] <= %0d (write #%0d)\n",5, 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '#',16,(IData)(vlSelfRef.gpu_top_tb__DOT__bram_c_addr)
                         , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data
                         , '~',32,vlSelfRef.gpu_top_tb__DOT__writes_observed);
        }
    }
    co_return;
}

VL_ATTR_COLD void Vfma___024root___eval_final(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_final\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfma___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vfma___024root___eval_phase__stl(Vfma___024root* vlSelf);

VL_ATTR_COLD void Vfma___024root___eval_settle(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_settle\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vfma___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 17, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vfma___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vfma___024root___eval_triggers_vec__stl(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_triggers_vec__stl\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vfma___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vfma___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vfma___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vfma___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vfma___024root___stl_sequent__TOP__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___stl_sequent__TOP__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    IData/*31:0*/ gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    IData/*31:0*/ gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_5;
    __VdfgRegularize_hebeb780c_0_5 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_6;
    __VdfgRegularize_hebeb780c_0_6 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_7;
    __VdfgRegularize_hebeb780c_0_7 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_8;
    __VdfgRegularize_hebeb780c_0_8 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_9;
    __VdfgRegularize_hebeb780c_0_9 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_10;
    __VdfgRegularize_hebeb780c_0_10 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_11;
    __VdfgRegularize_hebeb780c_0_11 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_12;
    __VdfgRegularize_hebeb780c_0_12 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_13;
    __VdfgRegularize_hebeb780c_0_13 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_14;
    __VdfgRegularize_hebeb780c_0_14 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_15;
    __VdfgRegularize_hebeb780c_0_15 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_16;
    __VdfgRegularize_hebeb780c_0_16 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_17;
    __VdfgRegularize_hebeb780c_0_17 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_18;
    __VdfgRegularize_hebeb780c_0_18 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_19;
    __VdfgRegularize_hebeb780c_0_19 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_20;
    __VdfgRegularize_hebeb780c_0_20 = 0;
    // Body
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size 
        = ((2U <= (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining))
            ? 2U : (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid) 
           & (0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[0U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid) 
            >> 1U) & (1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[0U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid) 
           & (0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[1U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid) 
            >> 1U) & (1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[1U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid) 
           & (0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[2U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid) 
            >> 1U) & (1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[2U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid) 
           & (0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[3U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in 
        = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid) 
            >> 1U) & (1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[3U])));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt) 
           == (0x000000ffU & (vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[0U] 
                              - (IData)(1U))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt) 
           == (0x000000ffU & (vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[1U] 
                              - (IData)(1U))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt) 
           == (0x000000ffU & (vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[2U] 
                              - (IData)(1U))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt) 
           == (0x000000ffU & (vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[3U] 
                              - (IData)(1U))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[2U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[3U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done 
        = ((~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start)) 
           & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__done_r));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start) 
               >> 1U)) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__done_r));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__done 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start) 
               >> 2U)) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__done_r));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__done 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start) 
               >> 3U)) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__done_r));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake 
        = ((~ ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__busy) 
                 << 3U) | ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__busy) 
                           << 2U)) | (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy) 
                                       << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy)))) 
           & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid 
        = ((((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
             << 3U) | ((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                       << 2U)) | (((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                                   << 1U) | (6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                                                   + 
                                                   ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                                                    * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                                                   + 
                                                   ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                                                    * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                                                   + 
                                                   ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                                                    * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = (0x0000ffffU 
                                                & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                                                   + 
                                                   ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                                                    * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
    __VdfgRegularize_hebeb780c_0_5 = (0x000000ffU & 
                                      VL_MODDIV_III(16, 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[3U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_6 = (0x000000ffU & 
                                      VL_MODDIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[3U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_7 = (0x000000ffU & 
                                      VL_MODDIV_III(16, 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[2U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_8 = (0x000000ffU & 
                                      VL_MODDIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[2U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_9 = (0x000000ffU & 
                                      VL_MODDIV_III(16, 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_10 = (0x000000ffU 
                                       & VL_MODDIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_11 = (0x000000ffU 
                                       & VL_MODDIV_III(16, 
                                                       (0x0000ffffU 
                                                        & ((IData)(1U) 
                                                           + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_12 = (0x000000ffU 
                                       & VL_MODDIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_13 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_14 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_15 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_16 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_17 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[2U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_18 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[2U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_19 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[3U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_20 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[3U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done 
        = ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__done) 
             << 3U) | ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__done) 
                       << 2U)) | (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done) 
                                   << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = 0U;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = 0U;
    if ((1U & (((~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy)) 
                & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid))) 
               & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake))))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = 1U;
    }
    if ((1U & ((((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy) 
                     >> 1U)) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid) 
                                   >> 1U))) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake) 
                                                  >> 1U))) 
               & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected))))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = 1U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = 1U;
    }
    if ((1U & ((((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy) 
                     >> 2U)) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid) 
                                   >> 2U))) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake) 
                                                  >> 2U))) 
               & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected))))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = 2U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = 1U;
    }
    if ((1U & ((((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy) 
                     >> 3U)) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid) 
                                   >> 3U))) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake) 
                                                  >> 3U))) 
               & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected))))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = 3U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = 1U;
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[2U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[3U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant = 0U;
    gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr), (IData)(4U));
    if ((1U & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid) 
               >> (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(2U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(3U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_valid 
        = ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__a_req_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__a_req_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__a_req_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__a_req_valid)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_valid 
        = ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__b_req_valid) 
             << 3U) | ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__b_req_valid) 
                       << 2U)) | (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__b_req_valid) 
                                   << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__b_req_valid)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_B[1U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_5) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_B[0U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_6) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_4)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_B[1U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_7) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_B[0U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_8) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_3)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B[1U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_9) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B[0U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_10) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B[1U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_11) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B[0U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_12) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_13))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_12) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_13))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_14))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_11) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_14))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_15))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_10) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_15))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_16))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_9) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_16))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_A[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_17))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_C[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_8) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_17))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_A[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_18))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_C[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_7) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_18))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_A[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_19))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_C[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_6) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_19))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_A[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_20))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_C[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_5) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_20))));
    vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data = 0U;
    if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[0U];
    }
    if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[1U];
    }
    if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[2U];
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant = 0U;
    gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr), (IData)(4U));
    if ((1U & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_valid) 
               >> (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(2U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(3U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant = 0U;
    gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr), (IData)(4U));
    if ((1U & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_valid) 
               >> (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(2U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx 
        = VL_MODDIVS_III(32, ((IData)(3U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr)), (IData)(4U));
    if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_valid) 
          >> (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx)) 
         & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant)))) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant 
            = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant) 
               | (0x0fU & ((IData)(1U) << (3U & gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx))));
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[3U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_B
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[2U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_B
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[2U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_A
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[2U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_C
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[3U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_A
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[3U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_C
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_b_addr = 0U;
    if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_b_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[0U];
    }
    if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_b_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[1U];
    }
    if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_b_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[2U];
    }
    if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_b_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_addr[3U];
    }
    vlSelfRef.gpu_top_tb__DOT__bram_a_addr = 0U;
    if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_a_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[0U];
    }
    if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_a_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[1U];
    }
    if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_a_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[2U];
    }
    if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_a_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_addr[3U];
    }
    vlSelfRef.gpu_top_tb__DOT__bram_c_addr = 0U;
    if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[0U];
    }
    if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[1U];
    }
    if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[2U];
    }
    if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[3U];
        vlSelfRef.gpu_top_tb__DOT__bram_c_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[3U];
    }
}

VL_ATTR_COLD void Vfma___024root___eval_stl(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_stl\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vfma___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vfma___024root___eval_phase__stl(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_phase__stl\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vfma___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfma___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vfma___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vfma___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
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
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: @(posedge gpu_top_tb.clk)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 1U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 1 is active: @(posedge gpu_top_tb.rst)\n");
    }
    if ((1U & (IData)((triggers[0U] >> 2U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 2 is active: @([true] __VdlySched.awaitingCurrentTime())\n");
    }
    if ((1U & (IData)((triggers[0U] >> 3U)))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 3 is active: @( gpu_top_tb.done)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void Vfma___024root___ctor_var_reset(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___ctor_var_reset\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    const uint64_t __VscopeHash = VL_MURMUR64_HASH(vlSelf->vlNamep);
    vlSelf->gpu_top_tb__DOT__clk = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1567791773516132949ull);
    vlSelf->gpu_top_tb__DOT__rst = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13681386501990845021ull);
    vlSelf->gpu_top_tb__DOT__start = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8676878366022966368ull);
    vlSelf->gpu_top_tb__DOT__N = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 10404006694022104572ull);
    vlSelf->gpu_top_tb__DOT__base_addr_A = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 260034025431433235ull);
    vlSelf->gpu_top_tb__DOT__base_addr_B = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8191377542193272365ull);
    vlSelf->gpu_top_tb__DOT__base_addr_C = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7771101206599694049ull);
    vlSelf->gpu_top_tb__DOT__done = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3815093347631788348ull);
    vlSelf->gpu_top_tb__DOT__bram_a_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10446945485113697454ull);
    vlSelf->gpu_top_tb__DOT__bram_a_rd_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16590956568099262242ull);
    vlSelf->gpu_top_tb__DOT__bram_b_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8455312916813039714ull);
    vlSelf->gpu_top_tb__DOT__bram_b_rd_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9859359529031406305ull);
    vlSelf->gpu_top_tb__DOT__bram_c_addr = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8376538855763122910ull);
    vlSelf->gpu_top_tb__DOT__bram_c_wr_data = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7085972788086795895ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__a_grant_count[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 13205654669564131576ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__b_grant_count[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 12523002016133848504ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__c_grant_count[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10712360147573856973ull);
    }
    vlSelf->gpu_top_tb__DOT__a_stall_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10464194894071988157ull);
    vlSelf->gpu_top_tb__DOT__b_stall_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 438626167985519007ull);
    vlSelf->gpu_top_tb__DOT__c_stall_cycles = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 10112186647857189890ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__core_stall_cycles[__Vi0] = VL_SCOPED_RAND_RESET_I(32, __VscopeHash, 16807143468217525147ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__core_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 16098204017887737256ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__core_start = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15522422890620048222ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__core_done = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8084529293186396062ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__core_thread_id[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9188827475999191186ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__core_thread_count[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14020280710403724720ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__a_req_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 2286130773582218103ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__a_req_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10882730224214191712ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__b_req_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 8725329259750741424ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__b_req_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9177311856993775066ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__c_req_valid = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12867915691254124260ull);
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__c_req_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9308972321795853206ull);
    }
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__c_req_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1993325556908172401ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__b_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__a_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__b_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__a_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__done = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__b_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__a_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__done = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__b_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__a_req_valid = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4536202352307724785ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15665819642056601548ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3301312312157193023ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13889610337283085269ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15178541934431578181ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2599712164906445497ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17939553416829722566ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8481711304123580834ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13163128465256004193ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1076536024131622929ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 13097968666121764714ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 6778140436488099259ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 15611507531149322695ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[__Vi0] = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 120774452497792991ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 12556427779254421142ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 3329143781369188767ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15564586012176264311ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11054884632125620759ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15857036541243596733ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__a_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6750871664383197835ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__b_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11275836714671446114ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4414873262413865339ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4732689549658584397ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16691367696790106359ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3514724392932545216ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 1340337498461023571ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 18150139613908609304ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2299802438825763780ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15937124735631574885ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 101825990476053806ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4203630085902740491ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16525811636885507969ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 5864583572842573295ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 8754429096486908602ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8837609960657652472ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4057586782242034835ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15153372866479768831ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6166422602451109442ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12362520278503391122ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 11939694469440756425ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10046687215418748364ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1400509492486782215ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 1230725503269099010ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1904857680263120219ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__a_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3595688175326921588ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__b_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14409172291389505093ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10758006773899432343ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5425412810389502242ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16499901691181526930ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7996638358222166462ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7866707323011486349ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2830829286159391755ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15178394229743939078ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2348002069212802937ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10534825938512090377ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 560424705393740546ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 77780766491151238ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 436210548479785639ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13063245474610163207ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10833530046859414422ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1181590657243622633ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9441979897113145050ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9412640253158484371ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5283922021923758021ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12407033135552343843ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15108497774305449742ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10630341956107719071ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8044875070166179272ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2570037399380367819ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__a_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14294438184458335529ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__b_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 12437425457911059777ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_A[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1600753334028582321ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_B[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7768219242488889474ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_C[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13636664735613806339ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_result[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14196819353978397166ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 7040921615295649718ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 12814039044081006017ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2440967276818037452ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 13030853919631741798ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9885406049101113626ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17414965660098803863ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7445838506097956810ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 13853638765186759076ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4292129010940063676ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13749068764857256586ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 17550973404984686359ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16278425065908272360ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 2871644009575058060ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3978153346163255835ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1751496342915343971ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 11398619032184071271ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 3070678230098762743ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 2523449227477472729ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 7548816049210907636ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__a_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9363012205828933448ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__b_latched = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 166950606122401911ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_A[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9233454811844946840ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_B[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10761724831566643454ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_C[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16305938045309914163ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_result[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3937259126237081049ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = VL_SCOPED_RAND_RESET_I(4, __VscopeHash, 12364170655377857498ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17927969592571238332ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 12756653050733337029ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 11443763618691012160ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9626801938157437978ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 572205453780956120ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9949944448210396018ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10375739334777181377ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 16476619554008810630ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16889827302924019659ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8839113057089894832ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2218155200596979877ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 6267212090705908866ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 5788337330634066612ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 13574021703536188090ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 617671586648725119ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in = 0;
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_A__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10366400926392861301ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_B__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 4870574904724479455ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_C__DOT__mem[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1487417082790118652ull);
    }
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_3 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_4 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VstlTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggered[__Vi0] = 0;
    }
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VactTriggeredAcc[__Vi0] = 0;
    }
    vlSelf->__Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu_top_tb__DOT__rst__0 = 0;
    vlSelf->__Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0 = 0;
    for (int __Vi0 = 0; __Vi0 < 1; ++__Vi0) {
        vlSelf->__VnbaTriggered[__Vi0] = 0;
    }
    vlSelf->__Vi = 0;
}
