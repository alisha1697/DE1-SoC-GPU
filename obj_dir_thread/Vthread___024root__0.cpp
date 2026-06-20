// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthread.h for the primary calling header

#include "Vthread__pch.h"

VlCoroutine Vthread___024root___eval_initial__TOP__Vtiming__0(Vthread___024root* vlSelf);
VlCoroutine Vthread___024root___eval_initial__TOP__Vtiming__1(Vthread___024root* vlSelf);

void Vthread___024root___eval_initial(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_initial\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i;
    __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i = 0;
    // Body
    __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i)) {
        vlSelfRef.thread_tb__DOT__mem_A[(0x000000ffU 
                                         & __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i)] 
            = (0x0000ffffU & ((IData)(1U) + __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i));
        vlSelfRef.thread_tb__DOT__mem_B[(0x000000ffU 
                                         & __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i)] 
            = (0x0000ffffU & VL_MULS_III(32, (IData)(2U), 
                                         ((IData)(1U) 
                                          + __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i)));
        __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i 
            = ((IData)(1U) + __Vinline__eval_initial__TOP_thread_tb__DOT__unnamedblk1__DOT__i);
    }
    Vthread___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vthread___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vthread___024root___eval_initial__TOP__Vtiming__0(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thread_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/thread/thread_tb.sv", 
                                             71);
        vlSelfRef.thread_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.thread_tb__DOT__clk)));
    }
    co_return;
}

void Vthread___024root____VbeforeTrig_hc1a933eb__0(Vthread___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vthread___024root___eval_initial__TOP__Vtiming__1(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ thread_tb__DOT__expected;
    thread_tb__DOT__expected = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__0__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__test_N;
    __Vtask_thread_tb__DOT__run_test__0__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk;
    __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__row;
    __Vtask_thread_tb__DOT__run_test__0__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__col;
    __Vtask_thread_tb__DOT__run_test__0__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__1__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__row;
    __Vfunc_thread_tb__DOT__compute_golden__1__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__col;
    __Vfunc_thread_tb__DOT__compute_golden__1__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__NN;
    __Vfunc_thread_tb__DOT__compute_golden__1__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__acc;
    __Vfunc_thread_tb__DOT__compute_golden__1__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__2__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__2__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__2__test_N;
    __Vtask_thread_tb__DOT__run_test__2__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk;
    __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__2__row;
    __Vtask_thread_tb__DOT__run_test__2__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__2__col;
    __Vtask_thread_tb__DOT__run_test__2__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__3__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__3__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__3__row;
    __Vfunc_thread_tb__DOT__compute_golden__3__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__3__col;
    __Vfunc_thread_tb__DOT__compute_golden__3__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__3__NN;
    __Vfunc_thread_tb__DOT__compute_golden__3__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__3__acc;
    __Vfunc_thread_tb__DOT__compute_golden__3__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__4__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__4__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__4__test_N;
    __Vtask_thread_tb__DOT__run_test__4__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk;
    __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__4__row;
    __Vtask_thread_tb__DOT__run_test__4__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__4__col;
    __Vtask_thread_tb__DOT__run_test__4__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__5__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__5__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__5__row;
    __Vfunc_thread_tb__DOT__compute_golden__5__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__5__col;
    __Vfunc_thread_tb__DOT__compute_golden__5__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__5__NN;
    __Vfunc_thread_tb__DOT__compute_golden__5__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__5__acc;
    __Vfunc_thread_tb__DOT__compute_golden__5__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__6__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__6__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__6__test_N;
    __Vtask_thread_tb__DOT__run_test__6__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk;
    __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__6__row;
    __Vtask_thread_tb__DOT__run_test__6__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__6__col;
    __Vtask_thread_tb__DOT__run_test__6__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__7__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__7__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__7__row;
    __Vfunc_thread_tb__DOT__compute_golden__7__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__7__col;
    __Vfunc_thread_tb__DOT__compute_golden__7__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__7__NN;
    __Vfunc_thread_tb__DOT__compute_golden__7__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__7__acc;
    __Vfunc_thread_tb__DOT__compute_golden__7__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__8__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__8__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__8__test_N;
    __Vtask_thread_tb__DOT__run_test__8__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk;
    __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__8__row;
    __Vtask_thread_tb__DOT__run_test__8__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__8__col;
    __Vtask_thread_tb__DOT__run_test__8__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__9__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__9__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__9__row;
    __Vfunc_thread_tb__DOT__compute_golden__9__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__9__col;
    __Vfunc_thread_tb__DOT__compute_golden__9__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__9__NN;
    __Vfunc_thread_tb__DOT__compute_golden__9__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__9__acc;
    __Vfunc_thread_tb__DOT__compute_golden__9__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__10__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__test_N;
    __Vtask_thread_tb__DOT__run_test__10__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk;
    __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__row;
    __Vtask_thread_tb__DOT__run_test__10__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__col;
    __Vtask_thread_tb__DOT__run_test__10__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__11__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__row;
    __Vfunc_thread_tb__DOT__compute_golden__11__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__col;
    __Vfunc_thread_tb__DOT__compute_golden__11__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__NN;
    __Vfunc_thread_tb__DOT__compute_golden__11__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__acc;
    __Vfunc_thread_tb__DOT__compute_golden__11__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__12__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__12__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__12__test_N;
    __Vtask_thread_tb__DOT__run_test__12__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk;
    __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__12__row;
    __Vtask_thread_tb__DOT__run_test__12__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__12__col;
    __Vtask_thread_tb__DOT__run_test__12__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__13__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__13__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__13__row;
    __Vfunc_thread_tb__DOT__compute_golden__13__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__13__col;
    __Vfunc_thread_tb__DOT__compute_golden__13__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__13__NN;
    __Vfunc_thread_tb__DOT__compute_golden__13__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__13__acc;
    __Vfunc_thread_tb__DOT__compute_golden__13__acc = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb/thread/thread_tb.sv", 
                                         159);
    __Vtask_thread_tb__DOT__run_test__0__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__0__test_thread_id = 0U;
    __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__0__row = 0U;
    __Vtask_thread_tb__DOT__run_test__0__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__0__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__0__test_thread_id, __Vtask_thread_tb__DOT__run_test__0__test_N);
    __Vtask_thread_tb__DOT__run_test__0__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__0__test_thread_id, __Vtask_thread_tb__DOT__run_test__0__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__1__NN = __Vtask_thread_tb__DOT__run_test__0__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__1__col 
        = __Vtask_thread_tb__DOT__run_test__0__col;
    __Vfunc_thread_tb__DOT__compute_golden__1__row 
        = __Vtask_thread_tb__DOT__run_test__0__row;
    __Vfunc_thread_tb__DOT__compute_golden__1__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__1__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__1__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__1__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__1__row, __Vfunc_thread_tb__DOT__compute_golden__1__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__1__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__1__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk2__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__1__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__1__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__1__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__0__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__0__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__0__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__0__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__0__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__0__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             110);
        __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                  "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         113);
    __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__0__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk);
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_test__0__row 
                               * __Vtask_thread_tb__DOT__run_test__0__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:122: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__0__row, __Vtask_thread_tb__DOT__run_test__0__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 122, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_test__0__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__0__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:127: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__0__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__0__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 127, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             133);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             135);
        __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_test__0__unnamedblk3__DOT__kk);
    }
    __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             139);
        __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:143: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 143, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__run_test__0__row 
                           * __Vtask_thread_tb__DOT__run_test__0__test_N) 
                          + __Vtask_thread_tb__DOT__run_test__0__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:149: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__0__row, __Vtask_thread_tb__DOT__run_test__0__test_N) 
                               + __Vtask_thread_tb__DOT__run_test__0__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 149, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__2__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__2__test_thread_id = 5U;
    __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__2__row = 0U;
    __Vtask_thread_tb__DOT__run_test__2__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__2__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__2__test_thread_id, __Vtask_thread_tb__DOT__run_test__2__test_N);
    __Vtask_thread_tb__DOT__run_test__2__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__2__test_thread_id, __Vtask_thread_tb__DOT__run_test__2__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__3__NN = __Vtask_thread_tb__DOT__run_test__2__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__3__col 
        = __Vtask_thread_tb__DOT__run_test__2__col;
    __Vfunc_thread_tb__DOT__compute_golden__3__row 
        = __Vtask_thread_tb__DOT__run_test__2__row;
    __Vfunc_thread_tb__DOT__compute_golden__3__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__3__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__3__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__3__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__3__row, __Vfunc_thread_tb__DOT__compute_golden__3__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__3__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__3__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__3__unnamedblk2__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__3__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__3__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__3__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__2__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__2__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__2__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__2__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__2__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__2__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             110);
        __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                  "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         113);
    __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__2__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk);
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_test__2__row 
                               * __Vtask_thread_tb__DOT__run_test__2__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:122: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__2__row, __Vtask_thread_tb__DOT__run_test__2__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 122, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_test__2__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__2__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:127: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__2__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__2__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 127, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             133);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             135);
        __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_test__2__unnamedblk3__DOT__kk);
    }
    __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             139);
        __Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__2__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:143: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 143, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__run_test__2__row 
                           * __Vtask_thread_tb__DOT__run_test__2__test_N) 
                          + __Vtask_thread_tb__DOT__run_test__2__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:149: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__2__row, __Vtask_thread_tb__DOT__run_test__2__test_N) 
                               + __Vtask_thread_tb__DOT__run_test__2__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 149, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__4__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__4__test_thread_id = 0x0000000fU;
    __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__4__row = 0U;
    __Vtask_thread_tb__DOT__run_test__4__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__4__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__4__test_thread_id, __Vtask_thread_tb__DOT__run_test__4__test_N);
    __Vtask_thread_tb__DOT__run_test__4__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__4__test_thread_id, __Vtask_thread_tb__DOT__run_test__4__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__5__NN = __Vtask_thread_tb__DOT__run_test__4__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__5__col 
        = __Vtask_thread_tb__DOT__run_test__4__col;
    __Vfunc_thread_tb__DOT__compute_golden__5__row 
        = __Vtask_thread_tb__DOT__run_test__4__row;
    __Vfunc_thread_tb__DOT__compute_golden__5__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__5__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__5__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__5__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__5__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__5__row, __Vfunc_thread_tb__DOT__compute_golden__5__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__5__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__5__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__5__unnamedblk2__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__5__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__5__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__5__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__4__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__4__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__4__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__4__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__4__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__4__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             110);
        __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                  "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         113);
    __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__4__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk);
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_test__4__row 
                               * __Vtask_thread_tb__DOT__run_test__4__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:122: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__4__row, __Vtask_thread_tb__DOT__run_test__4__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 122, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_test__4__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__4__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:127: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__4__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__4__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 127, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             133);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             135);
        __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_test__4__unnamedblk3__DOT__kk);
    }
    __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             139);
        __Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__4__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:143: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 143, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__run_test__4__row 
                           * __Vtask_thread_tb__DOT__run_test__4__test_N) 
                          + __Vtask_thread_tb__DOT__run_test__4__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:149: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__4__row, __Vtask_thread_tb__DOT__run_test__4__test_N) 
                               + __Vtask_thread_tb__DOT__run_test__4__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 149, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__6__test_N = 2U;
    __Vtask_thread_tb__DOT__run_test__6__test_thread_id = 0U;
    __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__6__row = 0U;
    __Vtask_thread_tb__DOT__run_test__6__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__6__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__6__test_thread_id, __Vtask_thread_tb__DOT__run_test__6__test_N);
    __Vtask_thread_tb__DOT__run_test__6__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__6__test_thread_id, __Vtask_thread_tb__DOT__run_test__6__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__7__NN = __Vtask_thread_tb__DOT__run_test__6__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__7__col 
        = __Vtask_thread_tb__DOT__run_test__6__col;
    __Vfunc_thread_tb__DOT__compute_golden__7__row 
        = __Vtask_thread_tb__DOT__run_test__6__row;
    __Vfunc_thread_tb__DOT__compute_golden__7__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__7__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__7__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__7__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__7__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__7__row, __Vfunc_thread_tb__DOT__compute_golden__7__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__7__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__7__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__7__unnamedblk2__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__7__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__7__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__7__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__6__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__6__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__6__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__6__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__6__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__6__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             110);
        __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                  "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         113);
    __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__6__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk);
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_test__6__row 
                               * __Vtask_thread_tb__DOT__run_test__6__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:122: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__6__row, __Vtask_thread_tb__DOT__run_test__6__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 122, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_test__6__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__6__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:127: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__6__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__6__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 127, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             133);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             135);
        __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_test__6__unnamedblk3__DOT__kk);
    }
    __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             139);
        __Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__6__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:143: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 143, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__run_test__6__row 
                           * __Vtask_thread_tb__DOT__run_test__6__test_N) 
                          + __Vtask_thread_tb__DOT__run_test__6__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:149: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__6__row, __Vtask_thread_tb__DOT__run_test__6__test_N) 
                               + __Vtask_thread_tb__DOT__run_test__6__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 149, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__8__test_N = 2U;
    __Vtask_thread_tb__DOT__run_test__8__test_thread_id = 3U;
    __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__8__row = 0U;
    __Vtask_thread_tb__DOT__run_test__8__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__8__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__8__test_thread_id, __Vtask_thread_tb__DOT__run_test__8__test_N);
    __Vtask_thread_tb__DOT__run_test__8__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__8__test_thread_id, __Vtask_thread_tb__DOT__run_test__8__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__9__NN = __Vtask_thread_tb__DOT__run_test__8__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__9__col 
        = __Vtask_thread_tb__DOT__run_test__8__col;
    __Vfunc_thread_tb__DOT__compute_golden__9__row 
        = __Vtask_thread_tb__DOT__run_test__8__row;
    __Vfunc_thread_tb__DOT__compute_golden__9__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__9__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__9__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__9__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__9__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__9__row, __Vfunc_thread_tb__DOT__compute_golden__9__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__9__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__9__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__9__unnamedblk2__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__9__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__9__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__9__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__8__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__8__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__8__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__8__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__8__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__8__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             110);
        __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                  "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         113);
    __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__8__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk);
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_test__8__row 
                               * __Vtask_thread_tb__DOT__run_test__8__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:122: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__8__row, __Vtask_thread_tb__DOT__run_test__8__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 122, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_test__8__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__8__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:127: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__8__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__8__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 127, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             133);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             135);
        __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_test__8__unnamedblk3__DOT__kk);
    }
    __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             139);
        __Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__8__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:143: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 143, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__run_test__8__row 
                           * __Vtask_thread_tb__DOT__run_test__8__test_N) 
                          + __Vtask_thread_tb__DOT__run_test__8__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:149: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__8__row, __Vtask_thread_tb__DOT__run_test__8__test_N) 
                               + __Vtask_thread_tb__DOT__run_test__8__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 149, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__10__test_N = 1U;
    __Vtask_thread_tb__DOT__run_test__10__test_thread_id = 0U;
    __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__10__row = 0U;
    __Vtask_thread_tb__DOT__run_test__10__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__10__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__10__test_thread_id, __Vtask_thread_tb__DOT__run_test__10__test_N);
    __Vtask_thread_tb__DOT__run_test__10__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__10__test_thread_id, __Vtask_thread_tb__DOT__run_test__10__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__11__NN 
        = __Vtask_thread_tb__DOT__run_test__10__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__11__col 
        = __Vtask_thread_tb__DOT__run_test__10__col;
    __Vfunc_thread_tb__DOT__compute_golden__11__row 
        = __Vtask_thread_tb__DOT__run_test__10__row;
    __Vfunc_thread_tb__DOT__compute_golden__11__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__11__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__11__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__11__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__11__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__11__row, __Vfunc_thread_tb__DOT__compute_golden__11__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__11__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__11__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk2__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__11__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__11__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__11__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__10__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__10__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__10__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__10__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__10__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__10__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             110);
        __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                  "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         113);
    __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__10__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk);
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_test__10__row 
                               * __Vtask_thread_tb__DOT__run_test__10__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:122: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__10__row, __Vtask_thread_tb__DOT__run_test__10__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 122, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_test__10__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__10__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:127: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__10__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__10__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 127, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             133);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             135);
        __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_test__10__unnamedblk3__DOT__kk);
    }
    __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             139);
        __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:143: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 143, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__run_test__10__row 
                           * __Vtask_thread_tb__DOT__run_test__10__test_N) 
                          + __Vtask_thread_tb__DOT__run_test__10__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:149: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__10__row, __Vtask_thread_tb__DOT__run_test__10__test_N) 
                               + __Vtask_thread_tb__DOT__run_test__10__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 149, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__12__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__12__test_thread_id = 3U;
    __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__12__row = 0U;
    __Vtask_thread_tb__DOT__run_test__12__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__12__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__12__test_thread_id, __Vtask_thread_tb__DOT__run_test__12__test_N);
    __Vtask_thread_tb__DOT__run_test__12__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__12__test_thread_id, __Vtask_thread_tb__DOT__run_test__12__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__13__NN 
        = __Vtask_thread_tb__DOT__run_test__12__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__13__col 
        = __Vtask_thread_tb__DOT__run_test__12__col;
    __Vfunc_thread_tb__DOT__compute_golden__13__row 
        = __Vtask_thread_tb__DOT__run_test__12__row;
    __Vfunc_thread_tb__DOT__compute_golden__13__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__13__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__13__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__13__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__13__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__13__row, __Vfunc_thread_tb__DOT__compute_golden__13__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__13__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__13__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__13__unnamedblk2__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__13__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__13__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__13__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__12__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__12__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__12__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__12__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__12__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__12__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             110);
        __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                  "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         113);
    __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__12__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk);
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_test__12__row 
                               * __Vtask_thread_tb__DOT__run_test__12__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:122: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__12__row, __Vtask_thread_tb__DOT__run_test__12__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 122, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_test__12__test_N) 
                              + __Vtask_thread_tb__DOT__run_test__12__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:127: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_test.unnamedblk3", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk, __Vtask_thread_tb__DOT__run_test__12__test_N) 
                                   + __Vtask_thread_tb__DOT__run_test__12__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 127, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             133);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             135);
        __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_test__12__unnamedblk3__DOT__kk);
    }
    __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vthread___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                      "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             139);
        __Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__12__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:143: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 143, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__run_test__12__row 
                           * __Vtask_thread_tb__DOT__run_test__12__test_N) 
                          + __Vtask_thread_tb__DOT__run_test__12__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:149: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.run_test", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_test__12__row, __Vtask_thread_tb__DOT__run_test__12__test_N) 
                               + __Vtask_thread_tb__DOT__run_test__12__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 149, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    VL_WRITEF_NX("\n\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\n",0);
    if ((0U == vlSelfRef.thread_tb__DOT__errors)) {
        VL_WRITEF_NX(" ALL %0d TESTS PASSED\n",1, '~',32,vlSelfRef.thread_tb__DOT__test_count);
    } else {
        VL_WRITEF_NX(" FAIL: %0d errors across %0d tests\n",2
                     , '~',32,vlSelfRef.thread_tb__DOT__errors
                     , '~',32,vlSelfRef.thread_tb__DOT__test_count);
    }
    VL_WRITEF_NX("\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\342\225\220\n",0);
    VL_FINISH_MT("tb/thread/thread_tb.sv", 180, "");
    co_return;
}

void Vthread___024root___eval_triggers_vec__act(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_triggers_vec__act\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                      << 1U) 
                                                     | ((IData)(vlSelfRef.thread_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0 
        = vlSelfRef.thread_tb__DOT__clk;
}

bool Vthread___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___trigger_anySet__act\n"); );
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

void Vthread___024root___act_comb__TOP__0(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___act_comb__TOP__0\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in 
        = ((IData)(vlSelfRef.thread_tb__DOT__en) & (IData)(vlSelfRef.thread_tb__DOT__data_valid));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (0x0000ffffU 
                                                & ((0x000000ffU 
                                                    & VL_DIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N))) 
                                                   * (IData)(vlSelfRef.thread_tb__DOT__N)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000000ffU 
                                                & VL_MODDIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N)));
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
                                              + ((IData)(vlSelfRef.thread_tb__DOT__k) 
                                                 * (IData)(vlSelfRef.thread_tb__DOT__N)))));
}

void Vthread___024root___eval_act(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_act\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((3ULL & vlSelfRef.__VactTriggered[0U])) {
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

void Vthread___024root___nba_sequent__TOP__0(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___nba_sequent__TOP__0\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vdly__thread_tb__DOT__dut__DOT__fma_result;
    __Vdly__thread_tb__DOT__dut__DOT__fma_result = 0;
    // Body
    __Vdly__thread_tb__DOT__dut__DOT__fma_result = vlSelfRef.thread_tb__DOT__dut__DOT__fma_result;
    if (vlSelfRef.thread_tb__DOT__rst) {
        __Vdly__thread_tb__DOT__dut__DOT__fma_result = 0U;
        vlSelfRef.thread_tb__DOT__result = 0U;
        vlSelfRef.thread_tb__DOT__dut__DOT__accumulator = 0U;
    } else {
        if (vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__thread_tb__DOT__dut__DOT__fma_result 
                = (0x0000ffffU & ((vlSelfRef.thread_tb__DOT__mem_B
                                   [(0x000000ffU & 
                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                      + ((IData)(vlSelfRef.thread_tb__DOT__base_addr_B) 
                                         + (0x0000ffffU 
                                            & ((IData)(vlSelfRef.thread_tb__DOT__k) 
                                               * (IData)(vlSelfRef.thread_tb__DOT__N))))))] 
                                   * vlSelfRef.thread_tb__DOT__mem_A
                                   [(0x000000ffU & 
                                     ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                      + ((IData)(vlSelfRef.thread_tb__DOT__base_addr_A) 
                                         + (IData)(vlSelfRef.thread_tb__DOT__k))))]) 
                                  + (IData)(vlSelfRef.thread_tb__DOT__dut__DOT__accumulator)));
        }
        if (vlSelfRef.thread_tb__DOT__dut__DOT__kernel_init) {
            vlSelfRef.thread_tb__DOT__result = 0U;
            vlSelfRef.thread_tb__DOT__dut__DOT__accumulator = 0U;
        } else if (vlSelfRef.thread_tb__DOT__en) {
            if ((((IData)(vlSelfRef.thread_tb__DOT__k) 
                  == ((IData)(vlSelfRef.thread_tb__DOT__N) 
                      - (IData)(1U))) & (IData)(vlSelfRef.thread_tb__DOT__dut__DOT__fma_valid_out))) {
                vlSelfRef.thread_tb__DOT__result = vlSelfRef.thread_tb__DOT__dut__DOT__fma_result;
            }
            if (vlSelfRef.thread_tb__DOT__dut__DOT__fma_valid_out) {
                vlSelfRef.thread_tb__DOT__dut__DOT__accumulator 
                    = vlSelfRef.thread_tb__DOT__dut__DOT__fma_result;
            }
        }
    }
    vlSelfRef.thread_tb__DOT__dut__DOT__fma_result 
        = __Vdly__thread_tb__DOT__dut__DOT__fma_result;
    vlSelfRef.thread_tb__DOT__dut__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.thread_tb__DOT__rst))) 
           && (IData)(vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in));
}

void Vthread___024root___nba_comb__TOP__0(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___nba_comb__TOP__0\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = (0x0000ffffU 
                                                & ((0x000000ffU 
                                                    & VL_DIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N))) 
                                                   * (IData)(vlSelfRef.thread_tb__DOT__N)));
    vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = (0x000000ffU 
                                                & VL_MODDIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N)));
    vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in 
        = ((IData)(vlSelfRef.thread_tb__DOT__en) & (IData)(vlSelfRef.thread_tb__DOT__data_valid));
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
                                              + ((IData)(vlSelfRef.thread_tb__DOT__k) 
                                                 * (IData)(vlSelfRef.thread_tb__DOT__N)))));
}

void Vthread___024root___eval_nba(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_nba\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ __Vinline__nba_sequent__TOP__0___Vdly__thread_tb__DOT__dut__DOT__fma_result;
    __Vinline__nba_sequent__TOP__0___Vdly__thread_tb__DOT__dut__DOT__fma_result = 0;
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        __Vinline__nba_sequent__TOP__0___Vdly__thread_tb__DOT__dut__DOT__fma_result 
            = vlSelfRef.thread_tb__DOT__dut__DOT__fma_result;
        if (vlSelfRef.thread_tb__DOT__rst) {
            __Vinline__nba_sequent__TOP__0___Vdly__thread_tb__DOT__dut__DOT__fma_result = 0U;
            vlSelfRef.thread_tb__DOT__result = 0U;
            vlSelfRef.thread_tb__DOT__dut__DOT__accumulator = 0U;
        } else {
            if (vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in) {
                __Vinline__nba_sequent__TOP__0___Vdly__thread_tb__DOT__dut__DOT__fma_result 
                    = (0x0000ffffU & ((vlSelfRef.thread_tb__DOT__mem_B
                                       [(0x000000ffU 
                                         & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_0) 
                                            + ((IData)(vlSelfRef.thread_tb__DOT__base_addr_B) 
                                               + (0x0000ffffU 
                                                  & ((IData)(vlSelfRef.thread_tb__DOT__k) 
                                                     * (IData)(vlSelfRef.thread_tb__DOT__N))))))] 
                                       * vlSelfRef.thread_tb__DOT__mem_A
                                       [(0x000000ffU 
                                         & ((IData)(vlSelfRef.__VdfgRegularize_hebeb780c_0_1) 
                                            + ((IData)(vlSelfRef.thread_tb__DOT__base_addr_A) 
                                               + (IData)(vlSelfRef.thread_tb__DOT__k))))]) 
                                      + (IData)(vlSelfRef.thread_tb__DOT__dut__DOT__accumulator)));
            }
            if (vlSelfRef.thread_tb__DOT__dut__DOT__kernel_init) {
                vlSelfRef.thread_tb__DOT__result = 0U;
                vlSelfRef.thread_tb__DOT__dut__DOT__accumulator = 0U;
            } else if (vlSelfRef.thread_tb__DOT__en) {
                if ((((IData)(vlSelfRef.thread_tb__DOT__k) 
                      == ((IData)(vlSelfRef.thread_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.thread_tb__DOT__dut__DOT__fma_valid_out))) {
                    vlSelfRef.thread_tb__DOT__result 
                        = vlSelfRef.thread_tb__DOT__dut__DOT__fma_result;
                }
                if (vlSelfRef.thread_tb__DOT__dut__DOT__fma_valid_out) {
                    vlSelfRef.thread_tb__DOT__dut__DOT__accumulator 
                        = vlSelfRef.thread_tb__DOT__dut__DOT__fma_result;
                }
            }
        }
        vlSelfRef.thread_tb__DOT__dut__DOT__fma_result 
            = __Vinline__nba_sequent__TOP__0___Vdly__thread_tb__DOT__dut__DOT__fma_result;
        vlSelfRef.thread_tb__DOT__dut__DOT__fma_valid_out 
            = ((1U & (~ (IData)(vlSelfRef.thread_tb__DOT__rst))) 
               && (IData)(vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = 
            (0x0000ffffU & ((0x000000ffU & VL_DIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N))) 
                            * (IData)(vlSelfRef.thread_tb__DOT__N)));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_0 = 
            (0x000000ffU & VL_MODDIV_III(16, (IData)(vlSelfRef.thread_tb__DOT__thread_id), (IData)(vlSelfRef.thread_tb__DOT__N)));
        vlSelfRef.thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in 
            = ((IData)(vlSelfRef.thread_tb__DOT__en) 
               & (IData)(vlSelfRef.thread_tb__DOT__data_valid));
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

void Vthread___024root___timing_ready(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___timing_ready\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready("@(posedge thread_tb.clk)");
    }
}

void Vthread___024root___timing_resume(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___timing_resume\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc1a933eb__0.moveToResumeQueue(
                                                          "@(posedge thread_tb.clk)");
    vlSelfRef.__VtrigSched_hc1a933eb__0.resume("@(posedge thread_tb.clk)");
    if ((2ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VdlySched.resume();
    }
}

void Vthread___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vthread___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vthread___024root___eval_phase__act(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_phase__act\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vthread___024root___eval_triggers_vec__act(vlSelf);
    Vthread___024root___timing_ready(vlSelf);
    Vthread___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vthread___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vthread___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vthread___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vthread___024root___timing_resume(vlSelf);
        Vthread___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vthread___024root___eval_phase__inact(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_phase__inact\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/thread/thread_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vthread___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vthread___024root___eval_phase__nba(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_phase__nba\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vthread___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vthread___024root___eval_nba(vlSelf);
        Vthread___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vthread___024root___eval(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vthread___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/thread/thread_tb.sv", 3, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/thread/thread_tb.sv", 3, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vthread___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/thread/thread_tb.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vthread___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vthread___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vthread___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vthread___024root____VbeforeTrig_hc1a933eb__0(Vthread___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root____VbeforeTrig_hc1a933eb__0\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.thread_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0 
        = vlSelfRef.thread_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

#ifdef VL_DEBUG
void Vthread___024root___eval_debug_assertions(Vthread___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vthread___024root___eval_debug_assertions\n"); );
    Vthread__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
