// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfma.h for the primary calling header

#include "Vfma__pch.h"

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__0(Vfma___024root* vlSelf);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1(Vfma___024root* vlSelf);

void Vfma___024root___eval_initial(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfma___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfma___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fma_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(5ULL, 
                                             nullptr, 
                                             "tb/fma/fma_tb.sv", 
                                             28);
        vlSelfRef.fma_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.fma_tb__DOT__clk)));
    }
    co_return;
}

void Vfma___024root____VbeforeTrig_h61621ddf__0(Vfma___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ fma_tb__DOT__expected;
    fma_tb__DOT__expected = 0;
    IData/*31:0*/ fma_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    fma_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__0__test_a;
    __Vtask_fma_tb__DOT__run_test__0__test_a = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__0__test_b;
    __Vtask_fma_tb__DOT__run_test__0__test_b = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__0__test_c;
    __Vtask_fma_tb__DOT__run_test__0__test_c = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__1__Vfuncout;
    __Vfunc_fma_tb__DOT__compute_golden__1__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__1__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__1__test_a = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__1__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__1__test_b = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__1__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__1__test_c = 0;
    IData/*31:0*/ __Vfunc_fma_tb__DOT__compute_golden__1__product;
    __Vfunc_fma_tb__DOT__compute_golden__1__product = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__2__test_a;
    __Vtask_fma_tb__DOT__run_test__2__test_a = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__2__test_b;
    __Vtask_fma_tb__DOT__run_test__2__test_b = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__2__test_c;
    __Vtask_fma_tb__DOT__run_test__2__test_c = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__3__Vfuncout;
    __Vfunc_fma_tb__DOT__compute_golden__3__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__3__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__3__test_a = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__3__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__3__test_b = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__3__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__3__test_c = 0;
    IData/*31:0*/ __Vfunc_fma_tb__DOT__compute_golden__3__product;
    __Vfunc_fma_tb__DOT__compute_golden__3__product = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__4__test_a;
    __Vtask_fma_tb__DOT__run_test__4__test_a = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__4__test_b;
    __Vtask_fma_tb__DOT__run_test__4__test_b = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__4__test_c;
    __Vtask_fma_tb__DOT__run_test__4__test_c = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__5__Vfuncout;
    __Vfunc_fma_tb__DOT__compute_golden__5__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__5__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__5__test_a = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__5__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__5__test_b = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__5__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__5__test_c = 0;
    IData/*31:0*/ __Vfunc_fma_tb__DOT__compute_golden__5__product;
    __Vfunc_fma_tb__DOT__compute_golden__5__product = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__6__test_a;
    __Vtask_fma_tb__DOT__run_test__6__test_a = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__6__test_b;
    __Vtask_fma_tb__DOT__run_test__6__test_b = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__6__test_c;
    __Vtask_fma_tb__DOT__run_test__6__test_c = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__7__Vfuncout;
    __Vfunc_fma_tb__DOT__compute_golden__7__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__7__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__7__test_a = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__7__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__7__test_b = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__7__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__7__test_c = 0;
    IData/*31:0*/ __Vfunc_fma_tb__DOT__compute_golden__7__product;
    __Vfunc_fma_tb__DOT__compute_golden__7__product = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__8__test_a;
    __Vtask_fma_tb__DOT__run_test__8__test_a = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__8__test_b;
    __Vtask_fma_tb__DOT__run_test__8__test_b = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__8__test_c;
    __Vtask_fma_tb__DOT__run_test__8__test_c = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__9__Vfuncout;
    __Vfunc_fma_tb__DOT__compute_golden__9__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__9__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__9__test_a = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__9__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__9__test_b = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__9__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__9__test_c = 0;
    IData/*31:0*/ __Vfunc_fma_tb__DOT__compute_golden__9__product;
    __Vfunc_fma_tb__DOT__compute_golden__9__product = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__10__test_a;
    __Vtask_fma_tb__DOT__run_test__10__test_a = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__10__test_b;
    __Vtask_fma_tb__DOT__run_test__10__test_b = 0;
    SData/*15:0*/ __Vtask_fma_tb__DOT__run_test__10__test_c;
    __Vtask_fma_tb__DOT__run_test__10__test_c = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__11__Vfuncout;
    __Vfunc_fma_tb__DOT__compute_golden__11__Vfuncout = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__11__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__11__test_a = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__11__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__11__test_b = 0;
    SData/*15:0*/ __Vfunc_fma_tb__DOT__compute_golden__11__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__11__test_c = 0;
    IData/*31:0*/ __Vfunc_fma_tb__DOT__compute_golden__11__product;
    __Vfunc_fma_tb__DOT__compute_golden__11__product = 0;
    // Body
    vlSelfRef.fma_tb__DOT__rst = 1U;
    vlSelfRef.fma_tb__DOT__a = 0U;
    vlSelfRef.fma_tb__DOT__b = 0U;
    vlSelfRef.fma_tb__DOT__c = 0U;
    vlSelfRef.fma_tb__DOT__valid_in = 0U;
    fma_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 2U;
    while (VL_LTS_III(32, 0U, fma_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                                   "@(posedge fma_tb.clk)");
        co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge fma_tb.clk)", 
                                                             "tb/fma/fma_tb.sv", 
                                                             93);
        fma_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (fma_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.fma_tb__DOT__rst = 0U;
    __Vtask_fma_tb__DOT__run_test__0__test_c = 4U;
    __Vtask_fma_tb__DOT__run_test__0__test_b = 3U;
    __Vtask_fma_tb__DOT__run_test__0__test_a = 2U;
    __Vfunc_fma_tb__DOT__compute_golden__1__test_c 
        = __Vtask_fma_tb__DOT__run_test__0__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__1__test_b 
        = __Vtask_fma_tb__DOT__run_test__0__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__1__test_a 
        = __Vtask_fma_tb__DOT__run_test__0__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__1__Vfuncout = 0;
    __Vfunc_fma_tb__DOT__compute_golden__1__product = 0;
    __Vfunc_fma_tb__DOT__compute_golden__1__product 
        = ((IData)(__Vfunc_fma_tb__DOT__compute_golden__1__test_a) 
           * (IData)(__Vfunc_fma_tb__DOT__compute_golden__1__test_b));
    __Vfunc_fma_tb__DOT__compute_golden__1__Vfuncout 
        = (0x0000ffffU & (__Vfunc_fma_tb__DOT__compute_golden__1__product 
                          + (IData)(__Vfunc_fma_tb__DOT__compute_golden__1__test_c)));
    fma_tb__DOT__expected = __Vfunc_fma_tb__DOT__compute_golden__1__Vfuncout;
    VL_WRITEF_NX("--- TEST: a=%0d, b=%0d, c=%0d, expected=%0d ---\n",4
                 , '#',16,__Vtask_fma_tb__DOT__run_test__0__test_a
                 , '#',16,(IData)(__Vtask_fma_tb__DOT__run_test__0__test_b)
                 , '#',16,__Vtask_fma_tb__DOT__run_test__0__test_c
                 , '#',16,(IData)(fma_tb__DOT__expected));
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         58);
    vlSelfRef.fma_tb__DOT__a = __Vtask_fma_tb__DOT__run_test__0__test_a;
    vlSelfRef.fma_tb__DOT__b = __Vtask_fma_tb__DOT__run_test__0__test_b;
    vlSelfRef.fma_tb__DOT__c = __Vtask_fma_tb__DOT__run_test__0__test_c;
    vlSelfRef.fma_tb__DOT__valid_in = 1U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         64);
    vlSelfRef.fma_tb__DOT__valid_in = 0U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         68);
    __Vtask_fma_tb__DOT__run_test__2__test_c = 7U;
    __Vtask_fma_tb__DOT__run_test__2__test_b = 6U;
    __Vtask_fma_tb__DOT__run_test__2__test_a = 5U;
    __Vfunc_fma_tb__DOT__compute_golden__3__test_c 
        = __Vtask_fma_tb__DOT__run_test__2__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__3__test_b 
        = __Vtask_fma_tb__DOT__run_test__2__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__3__test_a 
        = __Vtask_fma_tb__DOT__run_test__2__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__3__Vfuncout = 0;
    __Vfunc_fma_tb__DOT__compute_golden__3__product = 0;
    __Vfunc_fma_tb__DOT__compute_golden__3__product 
        = ((IData)(__Vfunc_fma_tb__DOT__compute_golden__3__test_a) 
           * (IData)(__Vfunc_fma_tb__DOT__compute_golden__3__test_b));
    __Vfunc_fma_tb__DOT__compute_golden__3__Vfuncout 
        = (0x0000ffffU & (__Vfunc_fma_tb__DOT__compute_golden__3__product 
                          + (IData)(__Vfunc_fma_tb__DOT__compute_golden__3__test_c)));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__valid_out)))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:71: Assertion failed in %m: valid_out wrong: expected 1, got %0b\n",4, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',1,(IData)(vlSelfRef.fma_tb__DOT__valid_out));
        VL_STOP_MT("tb/fma/fma_tb.sv", 71, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.fma_tb__DOT__result) 
                      != (IData)(fma_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:76: Assertion failed in %m: result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,(IData)(fma_tb__DOT__expected)
                     , '#',16,vlSelfRef.fma_tb__DOT__result);
        VL_STOP_MT("tb/fma/fma_tb.sv", 76, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("    result = %0d  PASS\n",1, '#',16,vlSelfRef.fma_tb__DOT__result);
    }
    fma_tb__DOT__expected = __Vfunc_fma_tb__DOT__compute_golden__3__Vfuncout;
    VL_WRITEF_NX("--- TEST: a=%0d, b=%0d, c=%0d, expected=%0d ---\n",4
                 , '#',16,__Vtask_fma_tb__DOT__run_test__2__test_a
                 , '#',16,(IData)(__Vtask_fma_tb__DOT__run_test__2__test_b)
                 , '#',16,__Vtask_fma_tb__DOT__run_test__2__test_c
                 , '#',16,(IData)(fma_tb__DOT__expected));
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         58);
    vlSelfRef.fma_tb__DOT__a = __Vtask_fma_tb__DOT__run_test__2__test_a;
    vlSelfRef.fma_tb__DOT__b = __Vtask_fma_tb__DOT__run_test__2__test_b;
    vlSelfRef.fma_tb__DOT__c = __Vtask_fma_tb__DOT__run_test__2__test_c;
    vlSelfRef.fma_tb__DOT__valid_in = 1U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         64);
    vlSelfRef.fma_tb__DOT__valid_in = 0U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         68);
    __Vtask_fma_tb__DOT__run_test__4__test_c = 1U;
    __Vtask_fma_tb__DOT__run_test__4__test_b = 1U;
    __Vtask_fma_tb__DOT__run_test__4__test_a = 1U;
    __Vfunc_fma_tb__DOT__compute_golden__5__test_c 
        = __Vtask_fma_tb__DOT__run_test__4__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__5__test_b 
        = __Vtask_fma_tb__DOT__run_test__4__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__5__test_a 
        = __Vtask_fma_tb__DOT__run_test__4__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__5__Vfuncout = 0;
    __Vfunc_fma_tb__DOT__compute_golden__5__product = 0;
    __Vfunc_fma_tb__DOT__compute_golden__5__product 
        = ((IData)(__Vfunc_fma_tb__DOT__compute_golden__5__test_a) 
           * (IData)(__Vfunc_fma_tb__DOT__compute_golden__5__test_b));
    __Vfunc_fma_tb__DOT__compute_golden__5__Vfuncout 
        = (0x0000ffffU & (__Vfunc_fma_tb__DOT__compute_golden__5__product 
                          + (IData)(__Vfunc_fma_tb__DOT__compute_golden__5__test_c)));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__valid_out)))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:71: Assertion failed in %m: valid_out wrong: expected 1, got %0b\n",4, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',1,(IData)(vlSelfRef.fma_tb__DOT__valid_out));
        VL_STOP_MT("tb/fma/fma_tb.sv", 71, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.fma_tb__DOT__result) 
                      != (IData)(fma_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:76: Assertion failed in %m: result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,(IData)(fma_tb__DOT__expected)
                     , '#',16,vlSelfRef.fma_tb__DOT__result);
        VL_STOP_MT("tb/fma/fma_tb.sv", 76, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("    result = %0d  PASS\n",1, '#',16,vlSelfRef.fma_tb__DOT__result);
    }
    fma_tb__DOT__expected = __Vfunc_fma_tb__DOT__compute_golden__5__Vfuncout;
    VL_WRITEF_NX("--- TEST: a=%0d, b=%0d, c=%0d, expected=%0d ---\n",4
                 , '#',16,__Vtask_fma_tb__DOT__run_test__4__test_a
                 , '#',16,(IData)(__Vtask_fma_tb__DOT__run_test__4__test_b)
                 , '#',16,__Vtask_fma_tb__DOT__run_test__4__test_c
                 , '#',16,(IData)(fma_tb__DOT__expected));
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         58);
    vlSelfRef.fma_tb__DOT__a = __Vtask_fma_tb__DOT__run_test__4__test_a;
    vlSelfRef.fma_tb__DOT__b = __Vtask_fma_tb__DOT__run_test__4__test_b;
    vlSelfRef.fma_tb__DOT__c = __Vtask_fma_tb__DOT__run_test__4__test_c;
    vlSelfRef.fma_tb__DOT__valid_in = 1U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         64);
    vlSelfRef.fma_tb__DOT__valid_in = 0U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         68);
    __Vtask_fma_tb__DOT__run_test__6__test_c = 5U;
    __Vtask_fma_tb__DOT__run_test__6__test_b = 0x000aU;
    __Vtask_fma_tb__DOT__run_test__6__test_a = 0x000aU;
    __Vfunc_fma_tb__DOT__compute_golden__7__test_c 
        = __Vtask_fma_tb__DOT__run_test__6__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__7__test_b 
        = __Vtask_fma_tb__DOT__run_test__6__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__7__test_a 
        = __Vtask_fma_tb__DOT__run_test__6__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__7__Vfuncout = 0;
    __Vfunc_fma_tb__DOT__compute_golden__7__product = 0;
    __Vfunc_fma_tb__DOT__compute_golden__7__product 
        = ((IData)(__Vfunc_fma_tb__DOT__compute_golden__7__test_a) 
           * (IData)(__Vfunc_fma_tb__DOT__compute_golden__7__test_b));
    __Vfunc_fma_tb__DOT__compute_golden__7__Vfuncout 
        = (0x0000ffffU & (__Vfunc_fma_tb__DOT__compute_golden__7__product 
                          + (IData)(__Vfunc_fma_tb__DOT__compute_golden__7__test_c)));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__valid_out)))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:71: Assertion failed in %m: valid_out wrong: expected 1, got %0b\n",4, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',1,(IData)(vlSelfRef.fma_tb__DOT__valid_out));
        VL_STOP_MT("tb/fma/fma_tb.sv", 71, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.fma_tb__DOT__result) 
                      != (IData)(fma_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:76: Assertion failed in %m: result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,(IData)(fma_tb__DOT__expected)
                     , '#',16,vlSelfRef.fma_tb__DOT__result);
        VL_STOP_MT("tb/fma/fma_tb.sv", 76, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("    result = %0d  PASS\n",1, '#',16,vlSelfRef.fma_tb__DOT__result);
    }
    fma_tb__DOT__expected = __Vfunc_fma_tb__DOT__compute_golden__7__Vfuncout;
    VL_WRITEF_NX("--- TEST: a=%0d, b=%0d, c=%0d, expected=%0d ---\n",4
                 , '#',16,__Vtask_fma_tb__DOT__run_test__6__test_a
                 , '#',16,(IData)(__Vtask_fma_tb__DOT__run_test__6__test_b)
                 , '#',16,__Vtask_fma_tb__DOT__run_test__6__test_c
                 , '#',16,(IData)(fma_tb__DOT__expected));
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         58);
    vlSelfRef.fma_tb__DOT__a = __Vtask_fma_tb__DOT__run_test__6__test_a;
    vlSelfRef.fma_tb__DOT__b = __Vtask_fma_tb__DOT__run_test__6__test_b;
    vlSelfRef.fma_tb__DOT__c = __Vtask_fma_tb__DOT__run_test__6__test_c;
    vlSelfRef.fma_tb__DOT__valid_in = 1U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         64);
    vlSelfRef.fma_tb__DOT__valid_in = 0U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         68);
    __Vtask_fma_tb__DOT__run_test__8__test_c = 3U;
    __Vtask_fma_tb__DOT__run_test__8__test_b = 9U;
    __Vtask_fma_tb__DOT__run_test__8__test_a = 0U;
    __Vfunc_fma_tb__DOT__compute_golden__9__test_c 
        = __Vtask_fma_tb__DOT__run_test__8__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__9__test_b 
        = __Vtask_fma_tb__DOT__run_test__8__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__9__test_a 
        = __Vtask_fma_tb__DOT__run_test__8__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__9__Vfuncout = 0;
    __Vfunc_fma_tb__DOT__compute_golden__9__product = 0;
    __Vfunc_fma_tb__DOT__compute_golden__9__product 
        = ((IData)(__Vfunc_fma_tb__DOT__compute_golden__9__test_a) 
           * (IData)(__Vfunc_fma_tb__DOT__compute_golden__9__test_b));
    __Vfunc_fma_tb__DOT__compute_golden__9__Vfuncout 
        = (0x0000ffffU & (__Vfunc_fma_tb__DOT__compute_golden__9__product 
                          + (IData)(__Vfunc_fma_tb__DOT__compute_golden__9__test_c)));
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__valid_out)))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:71: Assertion failed in %m: valid_out wrong: expected 1, got %0b\n",4, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',1,(IData)(vlSelfRef.fma_tb__DOT__valid_out));
        VL_STOP_MT("tb/fma/fma_tb.sv", 71, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.fma_tb__DOT__result) 
                      != (IData)(fma_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:76: Assertion failed in %m: result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,(IData)(fma_tb__DOT__expected)
                     , '#',16,vlSelfRef.fma_tb__DOT__result);
        VL_STOP_MT("tb/fma/fma_tb.sv", 76, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("    result = %0d  PASS\n",1, '#',16,vlSelfRef.fma_tb__DOT__result);
    }
    fma_tb__DOT__expected = __Vfunc_fma_tb__DOT__compute_golden__9__Vfuncout;
    VL_WRITEF_NX("--- TEST: a=%0d, b=%0d, c=%0d, expected=%0d ---\n",4
                 , '#',16,__Vtask_fma_tb__DOT__run_test__8__test_a
                 , '#',16,(IData)(__Vtask_fma_tb__DOT__run_test__8__test_b)
                 , '#',16,__Vtask_fma_tb__DOT__run_test__8__test_c
                 , '#',16,(IData)(fma_tb__DOT__expected));
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         58);
    vlSelfRef.fma_tb__DOT__a = __Vtask_fma_tb__DOT__run_test__8__test_a;
    vlSelfRef.fma_tb__DOT__b = __Vtask_fma_tb__DOT__run_test__8__test_b;
    vlSelfRef.fma_tb__DOT__c = __Vtask_fma_tb__DOT__run_test__8__test_c;
    vlSelfRef.fma_tb__DOT__valid_in = 1U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         64);
    vlSelfRef.fma_tb__DOT__valid_in = 0U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         68);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__valid_out)))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:71: Assertion failed in %m: valid_out wrong: expected 1, got %0b\n",4, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',1,(IData)(vlSelfRef.fma_tb__DOT__valid_out));
        VL_STOP_MT("tb/fma/fma_tb.sv", 71, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    }
    __Vtask_fma_tb__DOT__run_test__10__test_c = 1U;
    __Vtask_fma_tb__DOT__run_test__10__test_b = 2U;
    __Vtask_fma_tb__DOT__run_test__10__test_a = 0x000fU;
    __Vfunc_fma_tb__DOT__compute_golden__11__test_c 
        = __Vtask_fma_tb__DOT__run_test__10__test_c;
    __Vfunc_fma_tb__DOT__compute_golden__11__test_b 
        = __Vtask_fma_tb__DOT__run_test__10__test_b;
    __Vfunc_fma_tb__DOT__compute_golden__11__test_a 
        = __Vtask_fma_tb__DOT__run_test__10__test_a;
    __Vfunc_fma_tb__DOT__compute_golden__11__Vfuncout = 0;
    __Vfunc_fma_tb__DOT__compute_golden__11__product = 0;
    __Vfunc_fma_tb__DOT__compute_golden__11__product 
        = ((IData)(__Vfunc_fma_tb__DOT__compute_golden__11__test_a) 
           * (IData)(__Vfunc_fma_tb__DOT__compute_golden__11__test_b));
    __Vfunc_fma_tb__DOT__compute_golden__11__Vfuncout 
        = (0x0000ffffU & (__Vfunc_fma_tb__DOT__compute_golden__11__product 
                          + (IData)(__Vfunc_fma_tb__DOT__compute_golden__11__test_c)));
    if (VL_UNLIKELY((((IData)(vlSelfRef.fma_tb__DOT__result) 
                      != (IData)(fma_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:76: Assertion failed in %m: result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,(IData)(fma_tb__DOT__expected)
                     , '#',16,vlSelfRef.fma_tb__DOT__result);
        VL_STOP_MT("tb/fma/fma_tb.sv", 76, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("    result = %0d  PASS\n",1, '#',16,vlSelfRef.fma_tb__DOT__result);
    }
    fma_tb__DOT__expected = __Vfunc_fma_tb__DOT__compute_golden__11__Vfuncout;
    VL_WRITEF_NX("--- TEST: a=%0d, b=%0d, c=%0d, expected=%0d ---\n",4
                 , '#',16,__Vtask_fma_tb__DOT__run_test__10__test_a
                 , '#',16,(IData)(__Vtask_fma_tb__DOT__run_test__10__test_b)
                 , '#',16,__Vtask_fma_tb__DOT__run_test__10__test_c
                 , '#',16,(IData)(fma_tb__DOT__expected));
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         58);
    vlSelfRef.fma_tb__DOT__a = __Vtask_fma_tb__DOT__run_test__10__test_a;
    vlSelfRef.fma_tb__DOT__b = __Vtask_fma_tb__DOT__run_test__10__test_b;
    vlSelfRef.fma_tb__DOT__c = __Vtask_fma_tb__DOT__run_test__10__test_c;
    vlSelfRef.fma_tb__DOT__valid_in = 1U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         64);
    vlSelfRef.fma_tb__DOT__valid_in = 0U;
    Vfma___024root____VbeforeTrig_h61621ddf__0(vlSelf, 
                                               "@(posedge fma_tb.clk)");
    co_await vlSelfRef.__VtrigSched_h61621ddf__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge fma_tb.clk)", 
                                                         "tb/fma/fma_tb.sv", 
                                                         68);
    if (VL_UNLIKELY(((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__valid_out)))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:71: Assertion failed in %m: valid_out wrong: expected 1, got %0b\n",4, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',1,(IData)(vlSelfRef.fma_tb__DOT__valid_out));
        VL_STOP_MT("tb/fma/fma_tb.sv", 71, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.fma_tb__DOT__result) 
                      != (IData)(fma_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: fma_tb.sv:76: Assertion failed in %m: result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"fma_tb.run_test", 'T',-12
                     , '#',64,VL_TIME_UNITED_Q(1), '#',16,(IData)(fma_tb__DOT__expected)
                     , '#',16,vlSelfRef.fma_tb__DOT__result);
        VL_STOP_MT("tb/fma/fma_tb.sv", 76, "");
        vlSelfRef.fma_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.fma_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("    result = %0d  PASS\n",1, '#',16,vlSelfRef.fma_tb__DOT__result);
    }
    if ((0U == vlSelfRef.fma_tb__DOT__errors)) {
        VL_WRITEF_NX("\n=== PASS ===\n",0);
    } else {
        VL_WRITEF_NX("\n=== FAIL: %0d errors ===\n",1
                     , '~',32,vlSelfRef.fma_tb__DOT__errors);
    }
    co_return;
}

void Vfma___024root___eval_triggers_vec__act(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_triggers_vec__act\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.fma_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fma_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__fma_tb__DOT__clk__0 
        = vlSelfRef.fma_tb__DOT__clk;
}

bool Vfma___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___trigger_anySet__act\n"); );
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

void Vfma___024root___nba_sequent__TOP__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_sequent__TOP__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.fma_tb__DOT__valid_out = ((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__rst))) 
                                        && (IData)(vlSelfRef.fma_tb__DOT__valid_in));
    if (vlSelfRef.fma_tb__DOT__rst) {
        vlSelfRef.fma_tb__DOT__result = 0U;
    } else if (vlSelfRef.fma_tb__DOT__valid_in) {
        vlSelfRef.fma_tb__DOT__result = (0x0000ffffU 
                                         & (((IData)(vlSelfRef.fma_tb__DOT__b) 
                                             * (IData)(vlSelfRef.fma_tb__DOT__a)) 
                                            + (IData)(vlSelfRef.fma_tb__DOT__c)));
    }
}

void Vfma___024root___eval_nba(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_nba\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.fma_tb__DOT__valid_out = ((1U & (~ (IData)(vlSelfRef.fma_tb__DOT__rst))) 
                                            && (IData)(vlSelfRef.fma_tb__DOT__valid_in));
        if (vlSelfRef.fma_tb__DOT__rst) {
            vlSelfRef.fma_tb__DOT__result = 0U;
        } else if (vlSelfRef.fma_tb__DOT__valid_in) {
            vlSelfRef.fma_tb__DOT__result = (0x0000ffffU 
                                             & (((IData)(vlSelfRef.fma_tb__DOT__b) 
                                                 * (IData)(vlSelfRef.fma_tb__DOT__a)) 
                                                + (IData)(vlSelfRef.fma_tb__DOT__c)));
        }
    }
}

void Vfma___024root___timing_ready(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___timing_ready\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_h61621ddf__0.ready("@(posedge fma_tb.clk)");
    }
}

void Vfma___024root___timing_resume(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___timing_resume\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_h61621ddf__0.moveToResumeQueue(
                                                          "@(posedge fma_tb.clk)");
    vlSelfRef.__VtrigSched_h61621ddf__0.resume("@(posedge fma_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vfma___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vfma___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vfma___024root___eval_phase__act(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_phase__act\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vfma___024root___eval_triggers_vec__act(vlSelf);
    Vfma___024root___timing_ready(vlSelf);
    Vfma___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vfma___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vfma___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vfma___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vfma___024root___timing_resume(vlSelf);
    }
    return (__VactExecute);
}

bool Vfma___024root___eval_phase__inact(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_phase__inact\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/fma/fma_tb.sv", 1, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vfma___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vfma___024root___eval_phase__nba(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_phase__nba\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vfma___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vfma___024root___eval_nba(vlSelf);
        Vfma___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vfma___024root___eval(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vfma___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/fma/fma_tb.sv", 1, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/fma/fma_tb.sv", 1, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vfma___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/fma/fma_tb.sv", 1, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vfma___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vfma___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vfma___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vfma___024root____VbeforeTrig_h61621ddf__0(Vfma___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root____VbeforeTrig_h61621ddf__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.fma_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__fma_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__fma_tb__DOT__clk__0 
        = vlSelfRef.fma_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_h61621ddf__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vfma___024root___eval_debug_assertions(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_debug_assertions\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
