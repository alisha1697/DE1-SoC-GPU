// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfma.h for the primary calling header

#include "Vfma__pch.h"

VL_ATTR_COLD void Vfma___024root___eval_initial__TOP(Vfma___024root* vlSelf);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__0(Vfma___024root* vlSelf);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1(Vfma___024root* vlSelf);

void Vfma___024root___eval_initial(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    Vfma___024root___eval_initial__TOP(vlSelf);
    Vfma___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfma___024root___eval_initial__TOP__Vtiming__1(vlSelf);
}

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.thread_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/thread/thread_tb.sv", 
                                             76);
        vlSelfRef.thread_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.thread_tb__DOT__clk)));
    }
    co_return;
}

void Vfma___024root____VbeforeTrig_hc1a933eb__0(Vfma___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ thread_tb__DOT__expected;
    thread_tb__DOT__expected = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__0__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__0__test_N;
    __Vtask_thread_tb__DOT__run_test__0__test_N = 0;
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
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__1__acc;
    __Vfunc_thread_tb__DOT__compute_golden__1__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__3__row;
    __Vtask_thread_tb__DOT__run_k_loop__3__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__3__col;
    __Vtask_thread_tb__DOT__run_k_loop__3__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__3__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__3__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__4__row;
    __Vtask_thread_tb__DOT__check_result__4__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__4__col;
    __Vtask_thread_tb__DOT__check_result__4__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__4__test_N;
    __Vtask_thread_tb__DOT__check_result__4__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__5__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__5__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__5__test_N;
    __Vtask_thread_tb__DOT__run_test__5__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__5__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__5__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__5__row;
    __Vtask_thread_tb__DOT__run_test__5__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__5__col;
    __Vtask_thread_tb__DOT__run_test__5__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__6__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__6__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__6__row;
    __Vfunc_thread_tb__DOT__compute_golden__6__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__6__col;
    __Vfunc_thread_tb__DOT__compute_golden__6__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__6__NN;
    __Vfunc_thread_tb__DOT__compute_golden__6__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__6__acc;
    __Vfunc_thread_tb__DOT__compute_golden__6__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__8__row;
    __Vtask_thread_tb__DOT__run_k_loop__8__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__8__col;
    __Vtask_thread_tb__DOT__run_k_loop__8__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__8__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__8__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__9__row;
    __Vtask_thread_tb__DOT__check_result__9__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__9__col;
    __Vtask_thread_tb__DOT__check_result__9__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__9__test_N;
    __Vtask_thread_tb__DOT__check_result__9__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__9__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__9__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__10__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__10__test_N;
    __Vtask_thread_tb__DOT__run_test__10__test_N = 0;
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
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__11__acc;
    __Vfunc_thread_tb__DOT__compute_golden__11__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__13__row;
    __Vtask_thread_tb__DOT__run_k_loop__13__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__13__col;
    __Vtask_thread_tb__DOT__run_k_loop__13__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__13__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__13__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__14__row;
    __Vtask_thread_tb__DOT__check_result__14__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__14__col;
    __Vtask_thread_tb__DOT__check_result__14__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__14__test_N;
    __Vtask_thread_tb__DOT__check_result__14__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__14__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__14__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__15__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__15__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__15__test_N;
    __Vtask_thread_tb__DOT__run_test__15__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__15__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__15__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__15__row;
    __Vtask_thread_tb__DOT__run_test__15__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__15__col;
    __Vtask_thread_tb__DOT__run_test__15__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__16__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__16__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__16__row;
    __Vfunc_thread_tb__DOT__compute_golden__16__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__16__col;
    __Vfunc_thread_tb__DOT__compute_golden__16__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__16__NN;
    __Vfunc_thread_tb__DOT__compute_golden__16__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__16__acc;
    __Vfunc_thread_tb__DOT__compute_golden__16__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__18__row;
    __Vtask_thread_tb__DOT__run_k_loop__18__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__18__col;
    __Vtask_thread_tb__DOT__run_k_loop__18__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__18__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__18__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__19__row;
    __Vtask_thread_tb__DOT__check_result__19__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__19__col;
    __Vtask_thread_tb__DOT__check_result__19__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__19__test_N;
    __Vtask_thread_tb__DOT__check_result__19__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__19__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__19__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__20__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__20__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__20__test_N;
    __Vtask_thread_tb__DOT__run_test__20__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__20__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__20__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__20__row;
    __Vtask_thread_tb__DOT__run_test__20__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__20__col;
    __Vtask_thread_tb__DOT__run_test__20__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__21__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__21__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__21__row;
    __Vfunc_thread_tb__DOT__compute_golden__21__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__21__col;
    __Vfunc_thread_tb__DOT__compute_golden__21__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__21__NN;
    __Vfunc_thread_tb__DOT__compute_golden__21__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__21__acc;
    __Vfunc_thread_tb__DOT__compute_golden__21__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__23__row;
    __Vtask_thread_tb__DOT__run_k_loop__23__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__23__col;
    __Vtask_thread_tb__DOT__run_k_loop__23__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__23__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__23__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__24__row;
    __Vtask_thread_tb__DOT__check_result__24__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__24__col;
    __Vtask_thread_tb__DOT__check_result__24__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__24__test_N;
    __Vtask_thread_tb__DOT__check_result__24__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__24__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__24__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__25__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__25__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__25__test_N;
    __Vtask_thread_tb__DOT__run_test__25__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__25__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__25__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__25__row;
    __Vtask_thread_tb__DOT__run_test__25__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__25__col;
    __Vtask_thread_tb__DOT__run_test__25__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__26__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__26__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__26__row;
    __Vfunc_thread_tb__DOT__compute_golden__26__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__26__col;
    __Vfunc_thread_tb__DOT__compute_golden__26__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__26__NN;
    __Vfunc_thread_tb__DOT__compute_golden__26__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__26__acc;
    __Vfunc_thread_tb__DOT__compute_golden__26__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__28__row;
    __Vtask_thread_tb__DOT__run_k_loop__28__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__28__col;
    __Vtask_thread_tb__DOT__run_k_loop__28__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__28__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__28__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__29__row;
    __Vtask_thread_tb__DOT__check_result__29__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__29__col;
    __Vtask_thread_tb__DOT__check_result__29__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__29__test_N;
    __Vtask_thread_tb__DOT__check_result__29__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__29__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__29__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__30__test_thread_id;
    __Vtask_thread_tb__DOT__run_test__30__test_thread_id = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__30__test_N;
    __Vtask_thread_tb__DOT__run_test__30__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__30__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_thread_tb__DOT__run_test__30__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__30__row;
    __Vtask_thread_tb__DOT__run_test__30__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test__30__col;
    __Vtask_thread_tb__DOT__run_test__30__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__31__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__31__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__31__row;
    __Vfunc_thread_tb__DOT__compute_golden__31__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__31__col;
    __Vfunc_thread_tb__DOT__compute_golden__31__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__31__NN;
    __Vfunc_thread_tb__DOT__compute_golden__31__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__31__acc;
    __Vfunc_thread_tb__DOT__compute_golden__31__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__33__row;
    __Vtask_thread_tb__DOT__run_k_loop__33__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__33__col;
    __Vtask_thread_tb__DOT__run_k_loop__33__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__33__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__33__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__34__row;
    __Vtask_thread_tb__DOT__check_result__34__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__34__col;
    __Vtask_thread_tb__DOT__check_result__34__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__34__test_N;
    __Vtask_thread_tb__DOT__check_result__34__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__34__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__34__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test_back_to_back__35__thread_tb__DOT__unnamedblk1_3__DOT____Vrepeat2;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__thread_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test_back_to_back__35__row;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_test_back_to_back__35__col;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__col = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__36__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__36__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__36__row;
    __Vfunc_thread_tb__DOT__compute_golden__36__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__36__col;
    __Vfunc_thread_tb__DOT__compute_golden__36__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__36__NN;
    __Vfunc_thread_tb__DOT__compute_golden__36__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__36__acc;
    __Vfunc_thread_tb__DOT__compute_golden__36__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__38__row;
    __Vtask_thread_tb__DOT__run_k_loop__38__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__38__col;
    __Vtask_thread_tb__DOT__run_k_loop__38__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__38__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__38__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__39__row;
    __Vtask_thread_tb__DOT__check_result__39__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__39__col;
    __Vtask_thread_tb__DOT__check_result__39__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__39__test_N;
    __Vtask_thread_tb__DOT__check_result__39__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__39__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__39__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__40__Vfuncout;
    __Vfunc_thread_tb__DOT__compute_golden__40__Vfuncout = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__40__row;
    __Vfunc_thread_tb__DOT__compute_golden__40__row = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__40__col;
    __Vfunc_thread_tb__DOT__compute_golden__40__col = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__40__NN;
    __Vfunc_thread_tb__DOT__compute_golden__40__NN = 0;
    IData/*31:0*/ __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk;
    __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk = 0;
    SData/*15:0*/ __Vfunc_thread_tb__DOT__compute_golden__40__acc;
    __Vfunc_thread_tb__DOT__compute_golden__40__acc = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__42__row;
    __Vtask_thread_tb__DOT__run_k_loop__42__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__42__col;
    __Vtask_thread_tb__DOT__run_k_loop__42__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__42__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__42__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk;
    __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__43__row;
    __Vtask_thread_tb__DOT__check_result__43__row = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__43__col;
    __Vtask_thread_tb__DOT__check_result__43__col = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__43__test_N;
    __Vtask_thread_tb__DOT__check_result__43__test_N = 0;
    IData/*31:0*/ __Vtask_thread_tb__DOT__check_result__43__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    __Vtask_thread_tb__DOT__check_result__43__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x0000000000004e20ULL, 
                                         nullptr, "tb/thread/thread_tb.sv", 
                                         218);
    __Vtask_thread_tb__DOT__run_test__0__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__0__test_thread_id = 0U;
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
    __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__1__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__1__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__1__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__1__row, __Vfunc_thread_tb__DOT__compute_golden__1__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__1__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__1__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__1__unnamedblk4__DOT__kk);
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
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__0__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__0__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             167);
        __Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__0__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__3__test_N = __Vtask_thread_tb__DOT__run_test__0__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__3__col = __Vtask_thread_tb__DOT__run_test__0__col;
    __Vtask_thread_tb__DOT__run_k_loop__3__row = __Vtask_thread_tb__DOT__run_test__0__row;
    __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__3__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__3__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__3__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__3__row, __Vtask_thread_tb__DOT__run_k_loop__3__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__3__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__3__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__3__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__3__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__3__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__4__test_N 
        = __Vtask_thread_tb__DOT__run_test__0__test_N;
    __Vtask_thread_tb__DOT__check_result__4__col = __Vtask_thread_tb__DOT__run_test__0__col;
    __Vtask_thread_tb__DOT__check_result__4__row = __Vtask_thread_tb__DOT__run_test__0__row;
    __Vtask_thread_tb__DOT__check_result__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__4__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__4__row 
                           * __Vtask_thread_tb__DOT__check_result__4__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__4__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__4__row, __Vtask_thread_tb__DOT__check_result__4__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__4__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__5__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__5__test_thread_id = 5U;
    __Vtask_thread_tb__DOT__run_test__5__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__5__row = 0U;
    __Vtask_thread_tb__DOT__run_test__5__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__5__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__5__test_thread_id, __Vtask_thread_tb__DOT__run_test__5__test_N);
    __Vtask_thread_tb__DOT__run_test__5__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__5__test_thread_id, __Vtask_thread_tb__DOT__run_test__5__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__6__NN = __Vtask_thread_tb__DOT__run_test__5__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__6__col 
        = __Vtask_thread_tb__DOT__run_test__5__col;
    __Vfunc_thread_tb__DOT__compute_golden__6__row 
        = __Vtask_thread_tb__DOT__run_test__5__row;
    __Vfunc_thread_tb__DOT__compute_golden__6__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__6__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__6__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__6__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__6__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__6__row, __Vfunc_thread_tb__DOT__compute_golden__6__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__6__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__6__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__6__unnamedblk4__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__6__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__6__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__6__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__5__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__5__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__5__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__5__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__5__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__5__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__5__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__5__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             167);
        __Vtask_thread_tb__DOT__run_test__5__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__5__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__8__test_N = __Vtask_thread_tb__DOT__run_test__5__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__8__col = __Vtask_thread_tb__DOT__run_test__5__col;
    __Vtask_thread_tb__DOT__run_k_loop__8__row = __Vtask_thread_tb__DOT__run_test__5__row;
    __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__8__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__8__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__8__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__8__row, __Vtask_thread_tb__DOT__run_k_loop__8__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__8__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__8__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__8__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__8__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__8__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__9__test_N 
        = __Vtask_thread_tb__DOT__run_test__5__test_N;
    __Vtask_thread_tb__DOT__check_result__9__col = __Vtask_thread_tb__DOT__run_test__5__col;
    __Vtask_thread_tb__DOT__check_result__9__row = __Vtask_thread_tb__DOT__run_test__5__row;
    __Vtask_thread_tb__DOT__check_result__9__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__9__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__9__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__9__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__9__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__9__row 
                           * __Vtask_thread_tb__DOT__check_result__9__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__9__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__9__row, __Vtask_thread_tb__DOT__check_result__9__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__9__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__10__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__10__test_thread_id = 0x0000000fU;
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
    __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__11__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__11__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__11__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__11__row, __Vfunc_thread_tb__DOT__compute_golden__11__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__11__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__11__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__11__unnamedblk4__DOT__kk);
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
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__10__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__10__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             167);
        __Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__10__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__13__test_N 
        = __Vtask_thread_tb__DOT__run_test__10__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__13__col = __Vtask_thread_tb__DOT__run_test__10__col;
    __Vtask_thread_tb__DOT__run_k_loop__13__row = __Vtask_thread_tb__DOT__run_test__10__row;
    __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__13__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__13__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__13__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__13__row, __Vtask_thread_tb__DOT__run_k_loop__13__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__13__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__13__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__13__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__13__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__13__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__14__test_N 
        = __Vtask_thread_tb__DOT__run_test__10__test_N;
    __Vtask_thread_tb__DOT__check_result__14__col = __Vtask_thread_tb__DOT__run_test__10__col;
    __Vtask_thread_tb__DOT__check_result__14__row = __Vtask_thread_tb__DOT__run_test__10__row;
    __Vtask_thread_tb__DOT__check_result__14__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__14__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__14__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__14__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__14__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__14__row 
                           * __Vtask_thread_tb__DOT__check_result__14__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__14__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__14__row, __Vtask_thread_tb__DOT__check_result__14__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__14__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__15__test_N = 2U;
    __Vtask_thread_tb__DOT__run_test__15__test_thread_id = 0U;
    __Vtask_thread_tb__DOT__run_test__15__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__15__row = 0U;
    __Vtask_thread_tb__DOT__run_test__15__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__15__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__15__test_thread_id, __Vtask_thread_tb__DOT__run_test__15__test_N);
    __Vtask_thread_tb__DOT__run_test__15__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__15__test_thread_id, __Vtask_thread_tb__DOT__run_test__15__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__16__NN 
        = __Vtask_thread_tb__DOT__run_test__15__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__16__col 
        = __Vtask_thread_tb__DOT__run_test__15__col;
    __Vfunc_thread_tb__DOT__compute_golden__16__row 
        = __Vtask_thread_tb__DOT__run_test__15__row;
    __Vfunc_thread_tb__DOT__compute_golden__16__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__16__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__16__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__16__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__16__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__16__row, __Vfunc_thread_tb__DOT__compute_golden__16__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__16__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__16__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__16__unnamedblk4__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__16__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__16__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__16__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__15__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__15__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__15__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__15__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__15__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__15__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__15__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__15__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             167);
        __Vtask_thread_tb__DOT__run_test__15__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__15__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__18__test_N 
        = __Vtask_thread_tb__DOT__run_test__15__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__18__col = __Vtask_thread_tb__DOT__run_test__15__col;
    __Vtask_thread_tb__DOT__run_k_loop__18__row = __Vtask_thread_tb__DOT__run_test__15__row;
    __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__18__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__18__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__18__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__18__row, __Vtask_thread_tb__DOT__run_k_loop__18__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__18__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__18__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__18__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__18__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__18__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__19__test_N 
        = __Vtask_thread_tb__DOT__run_test__15__test_N;
    __Vtask_thread_tb__DOT__check_result__19__col = __Vtask_thread_tb__DOT__run_test__15__col;
    __Vtask_thread_tb__DOT__check_result__19__row = __Vtask_thread_tb__DOT__run_test__15__row;
    __Vtask_thread_tb__DOT__check_result__19__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__19__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__19__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__19__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__19__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__19__row 
                           * __Vtask_thread_tb__DOT__check_result__19__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__19__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__19__row, __Vtask_thread_tb__DOT__check_result__19__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__19__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__20__test_N = 2U;
    __Vtask_thread_tb__DOT__run_test__20__test_thread_id = 3U;
    __Vtask_thread_tb__DOT__run_test__20__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__20__row = 0U;
    __Vtask_thread_tb__DOT__run_test__20__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__20__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__20__test_thread_id, __Vtask_thread_tb__DOT__run_test__20__test_N);
    __Vtask_thread_tb__DOT__run_test__20__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__20__test_thread_id, __Vtask_thread_tb__DOT__run_test__20__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__21__NN 
        = __Vtask_thread_tb__DOT__run_test__20__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__21__col 
        = __Vtask_thread_tb__DOT__run_test__20__col;
    __Vfunc_thread_tb__DOT__compute_golden__21__row 
        = __Vtask_thread_tb__DOT__run_test__20__row;
    __Vfunc_thread_tb__DOT__compute_golden__21__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__21__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__21__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__21__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__21__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__21__row, __Vfunc_thread_tb__DOT__compute_golden__21__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__21__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__21__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__21__unnamedblk4__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__21__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__21__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__21__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__20__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__20__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__20__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__20__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__20__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__20__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__20__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__20__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             167);
        __Vtask_thread_tb__DOT__run_test__20__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__20__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__23__test_N 
        = __Vtask_thread_tb__DOT__run_test__20__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__23__col = __Vtask_thread_tb__DOT__run_test__20__col;
    __Vtask_thread_tb__DOT__run_k_loop__23__row = __Vtask_thread_tb__DOT__run_test__20__row;
    __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__23__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__23__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__23__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__23__row, __Vtask_thread_tb__DOT__run_k_loop__23__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__23__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__23__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__23__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__23__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__23__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__24__test_N 
        = __Vtask_thread_tb__DOT__run_test__20__test_N;
    __Vtask_thread_tb__DOT__check_result__24__col = __Vtask_thread_tb__DOT__run_test__20__col;
    __Vtask_thread_tb__DOT__check_result__24__row = __Vtask_thread_tb__DOT__run_test__20__row;
    __Vtask_thread_tb__DOT__check_result__24__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__24__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__24__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__24__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__24__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__24__row 
                           * __Vtask_thread_tb__DOT__check_result__24__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__24__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__24__row, __Vtask_thread_tb__DOT__check_result__24__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__24__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__25__test_N = 1U;
    __Vtask_thread_tb__DOT__run_test__25__test_thread_id = 0U;
    __Vtask_thread_tb__DOT__run_test__25__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__25__row = 0U;
    __Vtask_thread_tb__DOT__run_test__25__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__25__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__25__test_thread_id, __Vtask_thread_tb__DOT__run_test__25__test_N);
    __Vtask_thread_tb__DOT__run_test__25__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__25__test_thread_id, __Vtask_thread_tb__DOT__run_test__25__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__26__NN 
        = __Vtask_thread_tb__DOT__run_test__25__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__26__col 
        = __Vtask_thread_tb__DOT__run_test__25__col;
    __Vfunc_thread_tb__DOT__compute_golden__26__row 
        = __Vtask_thread_tb__DOT__run_test__25__row;
    __Vfunc_thread_tb__DOT__compute_golden__26__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__26__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__26__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__26__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__26__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__26__row, __Vfunc_thread_tb__DOT__compute_golden__26__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__26__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__26__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__26__unnamedblk4__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__26__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__26__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__26__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__25__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__25__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__25__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__25__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__25__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__25__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__25__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__25__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             167);
        __Vtask_thread_tb__DOT__run_test__25__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__25__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__28__test_N 
        = __Vtask_thread_tb__DOT__run_test__25__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__28__col = __Vtask_thread_tb__DOT__run_test__25__col;
    __Vtask_thread_tb__DOT__run_k_loop__28__row = __Vtask_thread_tb__DOT__run_test__25__row;
    __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__28__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__28__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__28__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__28__row, __Vtask_thread_tb__DOT__run_k_loop__28__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__28__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__28__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__28__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__28__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__28__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__29__test_N 
        = __Vtask_thread_tb__DOT__run_test__25__test_N;
    __Vtask_thread_tb__DOT__check_result__29__col = __Vtask_thread_tb__DOT__run_test__25__col;
    __Vtask_thread_tb__DOT__check_result__29__row = __Vtask_thread_tb__DOT__run_test__25__row;
    __Vtask_thread_tb__DOT__check_result__29__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__29__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__29__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__29__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__29__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__29__row 
                           * __Vtask_thread_tb__DOT__check_result__29__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__29__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__29__row, __Vtask_thread_tb__DOT__check_result__29__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__29__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test__30__test_N = 4U;
    __Vtask_thread_tb__DOT__run_test__30__test_thread_id = 3U;
    __Vtask_thread_tb__DOT__run_test__30__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_thread_tb__DOT__run_test__30__row = 0U;
    __Vtask_thread_tb__DOT__run_test__30__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    __Vtask_thread_tb__DOT__run_test__30__row = VL_DIVS_III(32, __Vtask_thread_tb__DOT__run_test__30__test_thread_id, __Vtask_thread_tb__DOT__run_test__30__test_N);
    __Vtask_thread_tb__DOT__run_test__30__col = VL_MODDIVS_III(32, __Vtask_thread_tb__DOT__run_test__30__test_thread_id, __Vtask_thread_tb__DOT__run_test__30__test_N);
    __Vfunc_thread_tb__DOT__compute_golden__31__NN 
        = __Vtask_thread_tb__DOT__run_test__30__test_N;
    __Vfunc_thread_tb__DOT__compute_golden__31__col 
        = __Vtask_thread_tb__DOT__run_test__30__col;
    __Vfunc_thread_tb__DOT__compute_golden__31__row 
        = __Vtask_thread_tb__DOT__run_test__30__row;
    __Vfunc_thread_tb__DOT__compute_golden__31__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__31__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__31__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__31__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__31__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__31__row, __Vfunc_thread_tb__DOT__compute_golden__31__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__31__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__31__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__31__unnamedblk4__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__31__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__31__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__31__Vfuncout;
    VL_WRITEF_NX("Test %0d: thread_id=%0d N=%0d (row,col)=(%0d,%0d) expected=%0d\n",6
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count
                 , '~',32,__Vtask_thread_tb__DOT__run_test__30__test_thread_id
                 , '~',32,__Vtask_thread_tb__DOT__run_test__30__test_N
                 , '~',32,__Vtask_thread_tb__DOT__run_test__30__row
                 , '~',32,__Vtask_thread_tb__DOT__run_test__30__col
                 , '#',16,(IData)(thread_tb__DOT__expected));
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = (0x000000ffU & __Vtask_thread_tb__DOT__run_test__30__test_N);
    vlSelfRef.thread_tb__DOT__thread_id = (0x0000ffffU 
                                           & __Vtask_thread_tb__DOT__run_test__30__test_thread_id);
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    vlSelfRef.thread_tb__DOT__k = 0U;
    __Vtask_thread_tb__DOT__run_test__30__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test__30__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             167);
        __Vtask_thread_tb__DOT__run_test__30__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_thread_tb__DOT__run_test__30__thread_tb__DOT__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__33__test_N 
        = __Vtask_thread_tb__DOT__run_test__30__test_N;
    __Vtask_thread_tb__DOT__run_k_loop__33__col = __Vtask_thread_tb__DOT__run_test__30__col;
    __Vtask_thread_tb__DOT__run_k_loop__33__row = __Vtask_thread_tb__DOT__run_test__30__row;
    __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__33__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__33__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__33__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__33__row, __Vtask_thread_tb__DOT__run_k_loop__33__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__33__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__33__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__33__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__33__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__33__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__34__test_N 
        = __Vtask_thread_tb__DOT__run_test__30__test_N;
    __Vtask_thread_tb__DOT__check_result__34__col = __Vtask_thread_tb__DOT__run_test__30__col;
    __Vtask_thread_tb__DOT__check_result__34__row = __Vtask_thread_tb__DOT__run_test__30__row;
    __Vtask_thread_tb__DOT__check_result__34__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__34__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__34__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__34__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__34__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__34__row 
                           * __Vtask_thread_tb__DOT__check_result__34__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__34__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__34__row, __Vtask_thread_tb__DOT__check_result__34__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__34__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__en = 0U;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__thread_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 0;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__row = 0U;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__col = 0U;
    vlSelfRef.thread_tb__DOT__test_count = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__test_count);
    VL_WRITEF_NX("Test %0d: back-to-back kernels (no reset between jobs)\n",1
                 , '~',32,vlSelfRef.thread_tb__DOT__test_count);
    vlSelfRef.thread_tb__DOT__rst = 1U;
    vlSelfRef.thread_tb__DOT__en = 0U;
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    vlSelfRef.thread_tb__DOT__data_valid = 0U;
    vlSelfRef.thread_tb__DOT__N = 4U;
    vlSelfRef.thread_tb__DOT__base_addr_A = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_B = 0U;
    vlSelfRef.thread_tb__DOT__base_addr_C = 0U;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__thread_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 = 3U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__run_test_back_to_back__35__thread_tb__DOT__unnamedblk1_3__DOT____Vrepeat2)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             193);
        __Vtask_thread_tb__DOT__run_test_back_to_back__35__thread_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
            = (__Vtask_thread_tb__DOT__run_test_back_to_back__35__thread_tb__DOT__unnamedblk1_3__DOT____Vrepeat2 
               - (IData)(1U));
    }
    vlSelfRef.thread_tb__DOT__rst = 0U;
    vlSelfRef.thread_tb__DOT__en = 1U;
    vlSelfRef.thread_tb__DOT__thread_id = 0U;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__row = 0U;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__col = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__36__NN = 4U;
    __Vfunc_thread_tb__DOT__compute_golden__36__col 
        = __Vtask_thread_tb__DOT__run_test_back_to_back__35__col;
    __Vfunc_thread_tb__DOT__compute_golden__36__row 
        = __Vtask_thread_tb__DOT__run_test_back_to_back__35__row;
    __Vfunc_thread_tb__DOT__compute_golden__36__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__36__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__36__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__36__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__36__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__36__row, __Vfunc_thread_tb__DOT__compute_golden__36__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__36__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__36__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__36__unnamedblk4__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__36__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__36__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__36__Vfuncout;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__38__test_N = 4U;
    __Vtask_thread_tb__DOT__run_k_loop__38__col = __Vtask_thread_tb__DOT__run_test_back_to_back__35__col;
    __Vtask_thread_tb__DOT__run_k_loop__38__row = __Vtask_thread_tb__DOT__run_test_back_to_back__35__row;
    __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__38__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__38__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__38__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__38__row, __Vtask_thread_tb__DOT__run_k_loop__38__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__38__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__38__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__38__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__38__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__38__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__39__test_N = 4U;
    __Vtask_thread_tb__DOT__check_result__39__col = __Vtask_thread_tb__DOT__run_test_back_to_back__35__col;
    __Vtask_thread_tb__DOT__check_result__39__row = __Vtask_thread_tb__DOT__run_test_back_to_back__35__row;
    __Vtask_thread_tb__DOT__check_result__39__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__39__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__39__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__39__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__39__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__39__row 
                           * __Vtask_thread_tb__DOT__check_result__39__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__39__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__39__row, __Vtask_thread_tb__DOT__check_result__39__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__39__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    vlSelfRef.thread_tb__DOT__thread_id = 1U;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__row = 0U;
    __Vtask_thread_tb__DOT__run_test_back_to_back__35__col = 1U;
    __Vfunc_thread_tb__DOT__compute_golden__40__NN = 4U;
    __Vfunc_thread_tb__DOT__compute_golden__40__col 
        = __Vtask_thread_tb__DOT__run_test_back_to_back__35__col;
    __Vfunc_thread_tb__DOT__compute_golden__40__row 
        = __Vtask_thread_tb__DOT__run_test_back_to_back__35__row;
    __Vfunc_thread_tb__DOT__compute_golden__40__Vfuncout = 0;
    __Vfunc_thread_tb__DOT__compute_golden__40__acc = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk = 0U;
    __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__40__NN)) {
        __Vfunc_thread_tb__DOT__compute_golden__40__acc 
            = (0x0000ffffU & ((IData)(__Vfunc_thread_tb__DOT__compute_golden__40__acc) 
                              + ((IData)(vlSelfRef.thread_tb__DOT__mem_A
                                         [(0x000000ffU 
                                           & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__40__row, __Vfunc_thread_tb__DOT__compute_golden__40__NN) 
                                              + __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk))]) 
                                 * (IData)(vlSelfRef.thread_tb__DOT__mem_B
                                           [(0x000000ffU 
                                             & (VL_MULS_III(32, __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk, __Vfunc_thread_tb__DOT__compute_golden__40__NN) 
                                                + __Vfunc_thread_tb__DOT__compute_golden__40__col))]))));
        __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk 
            = ((IData)(1U) + __Vfunc_thread_tb__DOT__compute_golden__40__unnamedblk4__DOT__kk);
    }
    __Vfunc_thread_tb__DOT__compute_golden__40__Vfuncout 
        = __Vfunc_thread_tb__DOT__compute_golden__40__acc;
    thread_tb__DOT__expected = __Vfunc_thread_tb__DOT__compute_golden__40__Vfuncout;
    vlSelfRef.thread_tb__DOT__kernel_init = 1U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         91);
    vlSelfRef.thread_tb__DOT__kernel_init = 0U;
    Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                               "@(posedge thread_tb.clk)");
    co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                         nullptr, 
                                                         "@(posedge thread_tb.clk)", 
                                                         "tb/thread/thread_tb.sv", 
                                                         93);
    __Vtask_thread_tb__DOT__run_k_loop__42__test_N = 4U;
    __Vtask_thread_tb__DOT__run_k_loop__42__col = __Vtask_thread_tb__DOT__run_test_back_to_back__35__col;
    __Vtask_thread_tb__DOT__run_k_loop__42__row = __Vtask_thread_tb__DOT__run_test_back_to_back__35__row;
    __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk = 0U;
    __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk = 0U;
    while (VL_LTS_III(32, __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__42__test_N)) {
        vlSelfRef.thread_tb__DOT__k = (0x000000ffU 
                                       & __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk);
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             104);
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_A) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__42__row 
                               * __Vtask_thread_tb__DOT__run_k_loop__42__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:107: Assertion failed in %m: addr_A wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__42__row, __Vtask_thread_tb__DOT__run_k_loop__42__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_A));
            VL_STOP_MT("tb/thread/thread_tb.sv", 107, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_B) 
                          != ((__Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk 
                               * __Vtask_thread_tb__DOT__run_k_loop__42__test_N) 
                              + __Vtask_thread_tb__DOT__run_k_loop__42__col))))) {
            VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:112: Assertion failed in %m: addr_B wrong at k=%0d: expected %0d, got %0d\n",6, 'M',vlSymsp->name(),"thread_tb.run_k_loop.unnamedblk5", 'T',-9
                         , '#',64,VL_TIME_UNITED_Q(1000)
                         , '~',32,__Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk
                         , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk, __Vtask_thread_tb__DOT__run_k_loop__42__test_N) 
                                   + __Vtask_thread_tb__DOT__run_k_loop__42__col)
                         , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_B));
            VL_STOP_MT("tb/thread/thread_tb.sv", 112, "");
            vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                                + vlSelfRef.thread_tb__DOT__errors);
        }
        vlSelfRef.thread_tb__DOT__data_valid = 1U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             118);
        vlSelfRef.thread_tb__DOT__data_valid = 0U;
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             120);
        __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk 
            = ((IData)(1U) + __Vtask_thread_tb__DOT__run_k_loop__42__unnamedblk5__DOT__kk);
    }
    __Vtask_thread_tb__DOT__check_result__43__test_N = 4U;
    __Vtask_thread_tb__DOT__check_result__43__col = __Vtask_thread_tb__DOT__run_test_back_to_back__35__col;
    __Vtask_thread_tb__DOT__check_result__43__row = __Vtask_thread_tb__DOT__run_test_back_to_back__35__row;
    __Vtask_thread_tb__DOT__check_result__43__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    __Vtask_thread_tb__DOT__check_result__43__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 5U;
    while (VL_LTS_III(32, 0U, __Vtask_thread_tb__DOT__check_result__43__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_hc1a933eb__0(vlSelf, 
                                                   "@(posedge thread_tb.clk)");
        co_await vlSelfRef.__VtrigSched_hc1a933eb__0.trigger(0U, 
                                                             nullptr, 
                                                             "@(posedge thread_tb.clk)", 
                                                             "tb/thread/thread_tb.sv", 
                                                             129);
        __Vtask_thread_tb__DOT__check_result__43__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (__Vtask_thread_tb__DOT__check_result__43__thread_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__result) 
                      != (IData)(thread_tb__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:132: Assertion failed in %m:   result wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(thread_tb__DOT__expected)
                     , '#',16,vlSelfRef.thread_tb__DOT__result);
        VL_STOP_MT("tb/thread/thread_tb.sv", 132, "");
        vlSelfRef.thread_tb__DOT__errors = ((IData)(1U) 
                                            + vlSelfRef.thread_tb__DOT__errors);
    }
    if (VL_UNLIKELY((((IData)(vlSelfRef.thread_tb__DOT__addr_C) 
                      != ((__Vtask_thread_tb__DOT__check_result__43__row 
                           * __Vtask_thread_tb__DOT__check_result__43__test_N) 
                          + __Vtask_thread_tb__DOT__check_result__43__col))))) {
        VL_WRITEF_NX("[%0t] %%Error: thread_tb.sv:137: Assertion failed in %m: addr_C wrong: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"thread_tb.check_result", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,(VL_MULS_III(32, __Vtask_thread_tb__DOT__check_result__43__row, __Vtask_thread_tb__DOT__check_result__43__test_N) 
                               + __Vtask_thread_tb__DOT__check_result__43__col)
                     , '#',16,(IData)(vlSelfRef.thread_tb__DOT__addr_C));
        VL_STOP_MT("tb/thread/thread_tb.sv", 137, "");
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
    VL_FINISH_MT("tb/thread/thread_tb.sv", 236, "");
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
                                                     | ((IData)(vlSelfRef.thread_tb__DOT__clk) 
                                                        & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0))))));
    vlSelfRef.__Vtrigprevexpr___TOP__thread_tb__DOT__clk__0 
        = vlSelfRef.thread_tb__DOT__clk;
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

void Vfma___024root___act_comb__TOP__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___act_comb__TOP__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vfma___024root___eval_act(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_act\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vfma___024root___nba_sequent__TOP__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_sequent__TOP__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
        if (vlSelfRef.thread_tb__DOT__kernel_init) {
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

void Vfma___024root___nba_comb__TOP__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_comb__TOP__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vfma___024root___eval_nba(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_nba\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
            if (vlSelfRef.thread_tb__DOT__kernel_init) {
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

void Vfma___024root___timing_ready(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___timing_ready\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hc1a933eb__0.ready("@(posedge thread_tb.clk)");
    }
}

void Vfma___024root___timing_resume(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___timing_resume\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_hc1a933eb__0.moveToResumeQueue(
                                                          "@(posedge thread_tb.clk)");
    vlSelfRef.__VtrigSched_hc1a933eb__0.resume("@(posedge thread_tb.clk)");
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
        Vfma___024root___eval_act(vlSelf);
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
        VL_FATAL_MT("tb/thread/thread_tb.sv", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
                    Vfma___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/thread/thread_tb.sv", 3, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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

void Vfma___024root____VbeforeTrig_hc1a933eb__0(Vfma___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root____VbeforeTrig_hc1a933eb__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
void Vfma___024root___eval_debug_assertions(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_debug_assertions\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
