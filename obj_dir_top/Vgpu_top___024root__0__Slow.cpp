// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu_top.h for the primary calling header

#include "Vgpu_top__pch.h"

void Vgpu_top___024root___timing_ready(Vgpu_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_top___024root___eval_static(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_static\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    Vgpu_top___024root___timing_ready(vlSelf);
    do {
        vlSelfRef.__VactTriggeredAcc[vlSelfRef.__Vi] 
            = vlSelfRef.__VactTriggered[vlSelfRef.__Vi];
        vlSelfRef.__Vi = ((IData)(1U) + vlSelfRef.__Vi);
    } while ((0U >= vlSelfRef.__Vi));
}

VL_ATTR_COLD void Vgpu_top___024root___eval_static__TOP(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_static__TOP\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top_tb__DOT__errors = 0U;
    vlSelfRef.gpu_top_tb__DOT__writes_observed = 0U;
}

VL_ATTR_COLD VlCoroutine Vgpu_top___024root___eval_initial__TOP____Vfork_1__0(Vgpu_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_top___024root___eval_initial__TOP(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial__TOP\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ gpu_top_tb__DOT__unnamedblk3__DOT__i;
    gpu_top_tb__DOT__unnamedblk3__DOT__i = 0;
    // Body
    Vgpu_top___024root___eval_initial__TOP____Vfork_1__0(vlSelf);
    gpu_top_tb__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, gpu_top_tb__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.gpu_top_tb__DOT__mem_A[(0x000000ffU 
                                          & gpu_top_tb__DOT__unnamedblk3__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__mem_B[(0x000000ffU 
                                          & gpu_top_tb__DOT__unnamedblk3__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__mem_C[(0x000000ffU 
                                          & gpu_top_tb__DOT__unnamedblk3__DOT__i)] = 0xdeadU;
        gpu_top_tb__DOT__unnamedblk3__DOT__i = ((IData)(1U) 
                                                + gpu_top_tb__DOT__unnamedblk3__DOT__i);
    }
    vlSelfRef.gpu_top_tb__DOT__mem_A[0U] = 1U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[0U] = 1U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[1U] = 2U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[1U] = 2U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[2U] = 3U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[2U] = 3U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[3U] = 4U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[3U] = 4U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[4U] = 5U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[4U] = 5U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[5U] = 6U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[5U] = 6U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[6U] = 7U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[6U] = 7U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[7U] = 8U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[7U] = 8U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[8U] = 9U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[8U] = 9U;
    vlSelfRef.gpu_top_tb__DOT__mem_A[9U] = 0x000aU;
    vlSelfRef.gpu_top_tb__DOT__mem_B[9U] = 0x000aU;
    vlSelfRef.gpu_top_tb__DOT__mem_A[10U] = 0x000bU;
    vlSelfRef.gpu_top_tb__DOT__mem_B[10U] = 0x000bU;
    vlSelfRef.gpu_top_tb__DOT__mem_A[11U] = 0x000cU;
    vlSelfRef.gpu_top_tb__DOT__mem_B[11U] = 0x000cU;
    vlSelfRef.gpu_top_tb__DOT__mem_A[12U] = 0x000dU;
    vlSelfRef.gpu_top_tb__DOT__mem_B[12U] = 0x000dU;
    vlSelfRef.gpu_top_tb__DOT__mem_A[13U] = 0x000eU;
    vlSelfRef.gpu_top_tb__DOT__mem_B[13U] = 0x000eU;
    vlSelfRef.gpu_top_tb__DOT__mem_A[14U] = 0x000fU;
    vlSelfRef.gpu_top_tb__DOT__mem_B[14U] = 0x000fU;
    vlSelfRef.gpu_top_tb__DOT__mem_A[15U] = 0x0010U;
    vlSelfRef.gpu_top_tb__DOT__mem_B[15U] = 0x0010U;
}

void Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(Vgpu_top___024root* vlSelf, const char* __VeventDescription);

VL_ATTR_COLD VlCoroutine Vgpu_top___024root___eval_initial__TOP____Vfork_1__0(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial__TOP____Vfork_1__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0xffffffffffffffffULL, 
                                         nullptr, "tb/Top/gpu_top_tb.sv", 
                                         68);
    while (true) {
        Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                       "@(posedge gpu_top_tb.clk)");
        co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge gpu_top_tb.clk)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             70);
        if ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst)))) {
            if (VL_UNLIKELY(((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__bram_c_wr_en))))) {
                vlSelfRef.gpu_top_tb__DOT__writes_observed 
                    = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__writes_observed);
                VL_WRITEF_NX("  [t=%0t] core0 -> mem_C[%0d] <= %0d (write #%0d)\n",5, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_c_addr[0U]
                             , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[0U]
                             , '~',32,vlSelfRef.gpu_top_tb__DOT__writes_observed);
            }
            if (VL_UNLIKELY(((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__bram_c_wr_en))))) {
                vlSelfRef.gpu_top_tb__DOT__writes_observed 
                    = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__writes_observed);
                VL_WRITEF_NX("  [t=%0t] core1 -> mem_C[%0d] <= %0d (write #%0d)\n",5, 'T',-9
                             , '#',64,VL_TIME_UNITED_Q(1000)
                             , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_c_addr[1U]
                             , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[1U]
                             , '~',32,vlSelfRef.gpu_top_tb__DOT__writes_observed);
            }
        }
    }
    co_return;
}

VL_ATTR_COLD void Vgpu_top___024root___eval_final(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_final\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
VL_ATTR_COLD bool Vgpu_top___024root___eval_phase__stl(Vgpu_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_top___024root___eval_settle(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_settle\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VstlIterCount;
    // Body
    __VstlIterCount = 0U;
    vlSelfRef.__VstlFirstIteration = 1U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VstlIterCount)))) {
#ifdef VL_DEBUG
            Vgpu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
#endif
            VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 6, "", "DIDNOTCONVERGE: Settle region did not converge after '--converge-limit' of 10000 tries");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        vlSelfRef.__VstlPhaseResult = Vgpu_top___024root___eval_phase__stl(vlSelf);
        vlSelfRef.__VstlFirstIteration = 0U;
    } while (vlSelfRef.__VstlPhaseResult);
}

VL_ATTR_COLD void Vgpu_top___024root___eval_triggers_vec__stl(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_triggers_vec__stl\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VstlTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VstlTriggered[0U]) 
                                     | (IData)((IData)(vlSelfRef.__VstlFirstIteration)));
}

VL_ATTR_COLD bool Vgpu_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_top___024root___dump_triggers__stl(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(Vgpu_top___024root___trigger_anySet__stl(triggers))))) {
        VL_DBG_MSGS("         No '" + tag + "' region triggers active\n");
    }
    if ((1U & (IData)(triggers[0U]))) {
        VL_DBG_MSGS("         '" + tag + "' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD bool Vgpu_top___024root___trigger_anySet__stl(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___trigger_anySet__stl\n"); );
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

VL_ATTR_COLD void Vgpu_top___024root___stl_sequent__TOP__0(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___stl_sequent__TOP__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_3;
    __VdfgRegularize_hebeb780c_0_3 = 0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_4;
    __VdfgRegularize_hebeb780c_0_4 = 0;
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
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt) 
           == (0x000000ffU & (vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[0U] 
                              - (IData)(1U))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread 
        = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt) 
           == (0x000000ffU & (vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[1U] 
                              - (IData)(1U))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & (vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data[0U] 
                          * vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data[0U]));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & (vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data[1U] 
                          * vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data[1U]));
    vlSelfRef.gpu_top_tb__DOT__bram_c_wr_en = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__mem_write_en) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__mem_write_en));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done 
        = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done) 
            << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake 
        = ((~ (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy) 
                << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy))) 
           & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid));
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
    __VdfgRegularize_hebeb780c_0_3 = (0x000000ffU & 
                                      VL_MODDIV_III(16, 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_4 = (0x000000ffU & 
                                      VL_MODDIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_5 = (0x000000ffU & 
                                      VL_MODDIV_III(16, 
                                                    (0x0000ffffU 
                                                     & ((IData)(1U) 
                                                        + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_6 = (0x000000ffU & 
                                      VL_MODDIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_7 = (0x0000ffffU & 
                                      ((0x000000ffU 
                                        & VL_DIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                       * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_8 = (0x0000ffffU & 
                                      ((0x000000ffU 
                                        & VL_DIV_III(16, 
                                                     (0x0000ffffU 
                                                      & ((IData)(1U) 
                                                         + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                       * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_9 = (0x0000ffffU & 
                                      ((0x000000ffU 
                                        & VL_DIV_III(16, (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                       * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    __VdfgRegularize_hebeb780c_0_10 = (0x0000ffffU 
                                       & ((0x000000ffU 
                                           & VL_DIV_III(16, 
                                                        (0x0000ffffU 
                                                         & ((IData)(1U) 
                                                            + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U]))), (IData)(vlSelfRef.gpu_top_tb__DOT__N))) 
                                          * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
    vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[0U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[1U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
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
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B[1U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_3) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B[0U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_4) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_2)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B[1U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_5) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B[0U] 
        = (0x0000ffffU & ((IData)(__VdfgRegularize_hebeb780c_0_6) 
                          + (IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_7))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_6) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_7))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_8))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_5) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_8))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_9))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C[0U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_4) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_9))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_A) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_10))));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C[1U] 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_C) 
                          + ((IData)(__VdfgRegularize_hebeb780c_0_3) 
                             + (IData)(__VdfgRegularize_hebeb780c_0_10))));
    vlSelfRef.gpu_top_tb__DOT__bram_b_addr[1U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_b_addr[0U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_a_addr[0U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_c_addr[0U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_a_addr[1U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_c_addr[1U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
}

VL_ATTR_COLD void Vgpu_top___024root___eval_stl(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_stl\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VstlTriggered[0U])) {
        Vgpu_top___024root___stl_sequent__TOP__0(vlSelf);
    }
}

VL_ATTR_COLD bool Vgpu_top___024root___eval_phase__stl(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_phase__stl\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VstlExecute;
    // Body
    Vgpu_top___024root___eval_triggers_vec__stl(vlSelf);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpu_top___024root___dump_triggers__stl(vlSelfRef.__VstlTriggered, "stl"s);
    }
#endif
    __VstlExecute = Vgpu_top___024root___trigger_anySet__stl(vlSelfRef.__VstlTriggered);
    if (__VstlExecute) {
        Vgpu_top___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

bool Vgpu_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

#ifdef VL_DEBUG
VL_ATTR_COLD void Vgpu_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(Vgpu_top___024root___trigger_anySet__act(triggers))))) {
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

VL_ATTR_COLD void Vgpu_top___024root___ctor_var_reset(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___ctor_var_reset\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_a_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 10446945485113697454ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_a_rd_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 16590956568099262242ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_b_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8455312916813039714ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_b_rd_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9859359529031406305ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_c_addr[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8376538855763122910ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__bram_c_wr_data[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 7085972788086795895ull);
    }
    vlSelf->gpu_top_tb__DOT__bram_c_wr_en = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 5076788375607686009ull);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__mem_A[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8914289888007979669ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__mem_B[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15942540762198376728ull);
    }
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__mem_C[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 1957665571211353046ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT__core_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 16098204017887737256ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__core_start = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15522422890620048222ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__core_done = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 8084529293186396062ull);
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__core_thread_id[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 9188827475999191186ull);
    }
    for (int __Vi0 = 0; __Vi0 < 2; ++__Vi0) {
        vlSelf->gpu_top_tb__DOT__dut__DOT__core_thread_count[__Vi0] = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 14020280710403724720ull);
    }
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done = 0;
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 4536202352307724785ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 15665819642056601548ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 3301312312157193023ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 13889610337283085269ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 15178541934431578181ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 2599712164906445497ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 17939553416829722566ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size = VL_SCOPED_RAND_RESET_I(16, __VscopeHash, 8481711304123580834ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15564586012176264311ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid = VL_SCOPED_RAND_RESET_I(2, __VscopeHash, 11054884632125620759ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__mem_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 9356731378553125895ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 15857036541243596733ull);
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
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2299802438825763780ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15937124735631574885ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 10512464858684523674ull);
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
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__mem_write_en = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 4485352398932741399ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 1904857680263120219ull);
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
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 15178394229743939078ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = VL_SCOPED_RAND_RESET_I(8, __VscopeHash, 2348002069212802937ull);
    vlSelf->gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = VL_SCOPED_RAND_RESET_I(1, __VscopeHash, 14818007590771026803ull);
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
    vlSelf->__VdfgRegularize_hebeb780c_0_1 = 0;
    vlSelf->__VdfgRegularize_hebeb780c_0_2 = 0;
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
