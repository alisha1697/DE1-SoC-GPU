// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfma.h for the primary calling header

#include "Vfma__pch.h"

VL_ATTR_COLD VlCoroutine Vfma___024root___eval_initial__TOP____Vfork_1__0(Vfma___024root* vlSelf);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__0(Vfma___024root* vlSelf);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1(Vfma___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__2(Vfma___024root* vlSelf);

void Vfma___024root___eval_initial(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i;
    __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i = 0;
    // Body
    Vfma___024root___eval_initial__TOP____Vfork_1__0(vlSelf);
    __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i)) {
        vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[(0x000000ffU 
                                                     & __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[(0x000000ffU 
                                                     & __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[(0x000000ffU 
                                                     & __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i)] = 0xdeadU;
        __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i 
            = ((IData)(1U) + __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk2__DOT__i);
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
    Vfma___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vfma___024root___eval_initial__TOP__Vtiming__1(vlSelf, std::make_shared<VlProcess>());
    Vfma___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/Top/gpu_top_tb.sv", 
                                             52);
        vlSelfRef.gpu_top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__clk)));
    }
    co_return;
}

void Vfma___024root____VbeforeTrig_ha5c6da72__0(Vfma___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vfma___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);
VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vfma___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1(Vfma___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ gpu_top_tb__DOT____VlemCall_0__compute_golden;
    IData/*31:0*/ gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*15:0*/ gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected;
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    SData/*15:0*/ __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0;
    SData/*15:0*/ __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->_vm_contextp__->dumpfile("gpu_top_tb.vcd"s);
    VL_PRINTF_MT("-Info: tb/Top/gpu_top_tb.sv:159: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.gpu_top_tb__DOT__rst = 1U;
    vlSelfRef.gpu_top_tb__DOT__start = 0U;
    vlSelfRef.gpu_top_tb__DOT__N = 4U;
    vlSelfRef.gpu_top_tb__DOT__base_addr_A = 0U;
    vlSelfRef.gpu_top_tb__DOT__base_addr_B = 0U;
    vlSelfRef.gpu_top_tb__DOT__base_addr_C = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         vlProcess, 
                                         "tb/Top/gpu_top_tb.sv", 
                                         167);
    VL_WRITEF_NX("\n=== GPU SYSTEM TEST: 4x4 matmul (NUM_CORES=4, T/C=2, shared-memory-controller) ===\nMemory: 3x dual_port_bram (A, B, C), port A shared by all cores via round-robin arbiters\nTotal blocks=8, dispatches/core=2\nExpected C (from golden):\n  row 0:",0);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d\n  row 1:",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d\n  row 2:",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d\n  row 3:",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__0__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__0__acc;
    VL_WRITEF_NX(" %5d\n",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vfma___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                   "@(posedge gpu_top_tb.clk)");
        co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge gpu_top_tb.clk)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             183);
        gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.gpu_top_tb__DOT__rst = 0U;
    Vfma___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                               "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         185);
    vlSelfRef.gpu_top_tb__DOT__start = 1U;
    Vfma___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                               "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         188);
    vlSelfRef.gpu_top_tb__DOT__start = 0U;
    VlForkSync __Vfork_2__sync;
    __Vfork_2__sync.init(1U, vlProcess);
    Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
    Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
    co_await __Vfork_2__sync.join(vlProcess, "tb/Top/gpu_top_tb.sv", 
                                  191);
    vlProcess->disableFork();
    Vfma___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                               "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         203);
    Vfma___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                               "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         203);
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[0U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[0][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[0U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[0U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[1U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[0][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[1U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[1U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[2U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[0][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[2U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[2U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[3U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[0][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[3U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[3U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[4U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[1][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[4U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[4U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[5U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[1][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[5U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[5U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[6U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[1][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[6U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[6U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[7U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[1][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[7U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[7U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[8U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[2][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[8U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[8U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[9U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[2][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[9U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[9U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[10U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[2][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[10U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[10U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[11U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[2][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[11U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[11U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[12U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[12U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[3][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[12U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[12U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[13U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[13U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[3][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[13U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[13U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[14U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[14U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[3][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[14U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[14U]);
    }
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__2__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem[15U]))));
    gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__2__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[15U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:210: Assertion failed in %m:   FAIL  C[3][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk6.unnamedblk7.unnamedblk8", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk6__DOT__unnamedblk7__DOT__unnamedblk8__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[15U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 210, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[15U]);
    }
    if (VL_UNLIKELY(((0x00000010U != vlSelfRef.gpu_top_tb__DOT__writes_observed)))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:220: Assertion failed in %m: Wrong write count: expected 16, got %0d\n",4, 'M',vlSymsp->name(),"gpu_top_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.gpu_top_tb__DOT__writes_observed);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 220, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    }
    VL_WRITEF_NX("\n=== Memory-controller contention report ===\nA-arbiter stall_cycles=%0d  B-arbiter stall_cycles=%0d  C-arbiter stall_cycles=%0d\n  core0: a_grants=%0d b_grants=%0d c_grants=%0d core_stall_cycles=%0d\n  core1: a_grants=%0d b_grants=%0d c_grants=%0d core_stall_cycles=%0d\n  core2: a_grants=%0d b_grants=%0d c_grants=%0d core_stall_cycles=%0d\n  core3: a_grants=%0d b_grants=%0d c_grants=%0d core_stall_cycles=%0d\n",19
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__a_stall_cycles
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__b_stall_cycles
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__c_stall_cycles
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__a_grant_count[0U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__b_grant_count[0U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__c_grant_count[0U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[0U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__a_grant_count[1U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__b_grant_count[1U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__c_grant_count[1U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[1U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__a_grant_count[2U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__b_grant_count[2U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__c_grant_count[2U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[2U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__a_grant_count[3U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__b_grant_count[3U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__c_grant_count[3U]
                 , '#',32,vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[3U]);
    if (VL_UNLIKELY((((0U == vlSelfRef.gpu_top_tb__DOT__a_stall_cycles) 
                      & (0U == vlSelfRef.gpu_top_tb__DOT__b_stall_cycles))))) {
        VL_WRITEF_NX("  NOTE: zero stalls observed -- with NUM_CORES=4 this is suspicious; check arbiter wiring.\n",0);
    }
    VL_WRITEF_NX("\n",0);
    if ((0U == vlSelfRef.gpu_top_tb__DOT__errors)) {
        VL_WRITEF_NX("=== SYSTEM TEST PASSED ===\n",0);
    } else {
        VL_WRITEF_NX("=== SYSTEM TEST FAILED: %0d errors ===\n",1
                     , '~',32,vlSelfRef.gpu_top_tb__DOT__errors);
    }
    vlProcess->disableFork();
    VL_FINISH_MT("tb/Top/gpu_top_tb.sv", 242, "");
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vfma___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_gpu_top_tb__DOT____VforkTask_0__1__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_gpu_top_tb__DOT____VforkTask_0__1__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    __Vtask_gpu_top_tb__DOT____VforkTask_0__1__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_gpu_top_tb__DOT____VforkTask_0__1__unnamedblk1_2__DOT____Vrepeat1 = 0x00004e20U;
    while (VL_LTS_III(32, 0U, __Vtask_gpu_top_tb__DOT____VforkTask_0__1__unnamedblk1_2__DOT____Vrepeat1)) {
        Vfma___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                   "@(posedge gpu_top_tb.clk)");
        co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge gpu_top_tb.clk)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             197);
        __Vtask_gpu_top_tb__DOT____VforkTask_0__1__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_gpu_top_tb__DOT____VforkTask_0__1__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:198: Assertion failed in %m: TIMEOUT\n",3, 'M',vlSymsp->name(),"gpu_top_tb.__VforkTask_0", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("tb/Top/gpu_top_tb.sv", 198, "");
    vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.gpu_top_tb__DOT__errors);
    __Vfork_2__sync.done("tb/Top/gpu_top_tb.sv", 196);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vfma___024root____VbeforeTrig_hb5f69606__0(Vfma___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vfma___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    while ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__done)))) {
        Vfma___024root____VbeforeTrig_hb5f69606__0(vlSelf, 
                                                   "@( gpu_top_tb.done)");
        co_await vlSelfRef.__VtrigSched_hb5f69606__0.trigger(1U, 
                                                             vlProcess, 
                                                             "@( gpu_top_tb.done)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             193);
    }
    VL_WRITEF_NX("[t=%0t] done asserted!\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    __Vfork_2__sync.done("tb/Top/gpu_top_tb.sv", 192);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vfma___024root___eval_initial__TOP__Vtiming__2(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000001dcd6500ULL, 
                                         nullptr, "tb/Top/gpu_top_tb.sv", 
                                         245);
    VL_WRITEF_NX("[%0t] %%Fatal: gpu_top_tb.sv:245: Assertion failed in %m: HARD TIMEOUT\n",3, 'M',vlSymsp->name(),"gpu_top_tb", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("tb/Top/gpu_top_tb.sv", 245, "", false);
    co_return;
}

void Vfma___024root___eval_triggers_vec__act(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_triggers_vec__act\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                    (((((IData)(vlSelfRef.gpu_top_tb__DOT__done) 
                                                        != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0)) 
                                                       << 3U) 
                                                      | (vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                         << 2U)) 
                                                     | ((((IData)(vlSelfRef.gpu_top_tb__DOT__rst) 
                                                          & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__rst__0))) 
                                                         << 1U) 
                                                        | ((IData)(vlSelfRef.gpu_top_tb__DOT__clk) 
                                                           & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0)))))));
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0 
        = vlSelfRef.gpu_top_tb__DOT__clk;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__rst__0 
        = vlSelfRef.gpu_top_tb__DOT__rst;
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0 
        = vlSelfRef.gpu_top_tb__DOT__done;
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
    // Locals
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
        vlSelfRef.gpu_top_tb__DOT__bram_c_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[3U];
    }
}

void Vfma___024root___eval_act(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_act\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vfma___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vfma___024root___nba_sequent__TOP__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_sequent__TOP__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en;
    gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en = 0;
    CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en;
    gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en = 0;
    CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__fma_en;
    gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__fma_en = 0;
    CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__fma_en;
    gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__fma_en = 0;
    CData/*3:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0;
    IData/*31:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0;
    CData/*3:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0;
    IData/*31:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0;
    CData/*3:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0;
    IData/*31:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0;
    CData/*3:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0;
    IData/*31:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__bram_C__DOT__mem__v0;
    __VdlyVal__gpu_top_tb__DOT__bram_C__DOT__mem__v0 = 0;
    CData/*7:0*/ __VdlyDim0__gpu_top_tb__DOT__bram_C__DOT__mem__v0;
    __VdlyDim0__gpu_top_tb__DOT__bram_C__DOT__mem__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__bram_C__DOT__mem__v0;
    __VdlySet__gpu_top_tb__DOT__bram_C__DOT__mem__v0 = 0;
    // Body
    __VdlySet__gpu_top_tb__DOT__bram_C__DOT__mem__v0 = 0U;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    if ((0U != (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        __VdlyVal__gpu_top_tb__DOT__bram_C__DOT__mem__v0 
            = vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data;
        __VdlyDim0__gpu_top_tb__DOT__bram_C__DOT__mem__v0 
            = (0x000000ffU & (IData)(vlSelfRef.gpu_top_tb__DOT__bram_c_addr));
        __VdlySet__gpu_top_tb__DOT__bram_C__DOT__mem__v0 = 1U;
    }
    if (vlSelfRef.gpu_top_tb__DOT__rst) {
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__b_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__a_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__b_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__a_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__b_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__a_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__b_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__a_latched = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__busy = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__busy = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__kernel_init = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__kernel_init = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles = 0U;
    } else {
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator)));
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator)));
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator)));
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator)));
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator)));
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator)));
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator)));
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned) 
                                  + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator)));
        }
        if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy = 1U;
        } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy = 0U;
        }
        if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy = 1U;
        } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy = 0U;
        }
        if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__busy = 1U;
        } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__done) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__busy = 0U;
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__busy = 1U;
        } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__done) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__busy = 0U;
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        } else {
            if ((0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[0U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
            }
            if ((1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[0U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
            }
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        } else {
            if ((0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[1U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
            }
            if ((1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[1U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
            }
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__kernel_init) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        } else {
            if ((0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[2U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
            }
            if ((1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[2U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
            }
        }
        if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__kernel_init) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        } else {
            if ((0U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[3U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
                }
            }
            if ((1U < (0x000000ffU & vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[3U]))) {
                if ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                      == ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                          - (IData)(1U))) & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
                if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator 
                        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
                }
            }
        }
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = 0U;
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__a_req_valid) 
             & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 1U;
        }
        if ((1U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__a_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        }
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__b_req_valid) 
             & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 1U;
        }
        if ((1U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__b_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        }
        if ((((2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
              & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                    & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have)))) 
             | ((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles);
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 1U;
                if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                    if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 8U;
                    } else {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                    }
                } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                                        - (IData)(1U))))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                } else {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt)));
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
                }
            } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 5U;
            } else {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                        & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid 
                    = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 4U;
                gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en 
                    = ((IData)(gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
        } else {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = 1U;
            }
        }
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = 0U;
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__a_req_valid) 
             & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant) 
                >> 1U))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 1U;
        }
        if ((2U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__a_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        }
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__b_req_valid) 
             & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant) 
                >> 1U))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 1U;
        }
        if ((2U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__b_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        }
        if ((((2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
              & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                    & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have)))) 
             | ((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant) 
                      >> 1U))))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles);
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 1U;
                if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                    if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 8U;
                    } else {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                    }
                } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                                        - (IData)(1U))))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                } else {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt)));
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
                }
            } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 5U;
            } else {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                        & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid 
                    = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 4U;
                gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en 
                    = ((IData)(gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
        } else {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = 1U;
            }
        }
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__kernel_init = 0U;
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__a_req_valid) 
             & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant) 
                >> 2U))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 1U;
        }
        if ((4U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__a_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        }
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__b_req_valid) 
             & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant) 
                >> 2U))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 1U;
        }
        if ((4U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__b_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        }
        if ((((2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
              & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                    & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have)))) 
             | ((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant) 
                      >> 2U))))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles);
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 1U;
                if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__kernel_init = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                    if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 8U;
                    } else {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                    }
                } else if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                                        - (IData)(1U))))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                } else {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt)));
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
                }
            } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 5U;
            } else {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                        & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid 
                    = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 4U;
                gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__fma_en 
                    = ((IData)(gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__fma_en) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
        } else {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__kernel_init = 1U;
            }
        }
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__kernel_init = 0U;
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__a_req_valid) 
             & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant) 
                >> 3U))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 1U;
        }
        if ((8U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__a_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
        }
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__b_req_valid) 
             & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant) 
                >> 3U))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 1U;
        }
        if ((8U & vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[1U])) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__b_latched 
                = vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
        }
        if ((((2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
              & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                    & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have)))) 
             | ((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant) 
                      >> 3U))))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles);
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 1U;
                if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__kernel_init = 1U;
                }
            }
        } else if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                    if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 8U;
                    } else {
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                            = (0x000000ffU & ((IData)(1U) 
                                              + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                    }
                } else if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 7U;
                }
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                     == (0x000000ffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                                        - (IData)(1U))))) {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 6U;
                } else {
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
                        = (0x000000ffU & ((IData)(1U) 
                                          + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt)));
                    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
                }
            } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 5U;
            } else {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
                    = (0x000000ffU & ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
            }
        } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
                        & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid 
                    = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 4U;
                gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__fma_en 
                    = ((IData)(gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__fma_en) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight = 0U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
        } else {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__done_r = 0U;
            if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__kernel_init = 1U;
            }
        }
    }
    if (__VdlySet__gpu_top_tb__DOT__bram_C__DOT__mem__v0) {
        vlSelfRef.gpu_top_tb__DOT__bram_C__DOT__mem[__VdlyDim0__gpu_top_tb__DOT__bram_C__DOT__mem__v0] 
            = __VdlyVal__gpu_top_tb__DOT__bram_C__DOT__mem__v0;
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data = vlSelfRef.gpu_top_tb__DOT__bram_B__DOT__mem
        [(0x000000ffU & (IData)(vlSelfRef.gpu_top_tb__DOT__bram_b_addr))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__b_latched) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__a_latched)));
    vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data = vlSelfRef.gpu_top_tb__DOT__bram_A__DOT__mem
        [(0x000000ffU & (IData)(vlSelfRef.gpu_top_tb__DOT__bram_a_addr))];
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
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out 
        = ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__rst))) 
           && (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles 
        = __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles 
        = __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles 
        = __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles 
        = __Vdly__gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[2U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[2U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__core_stall_cycles[3U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[3U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__a_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__b_req_valid 
        = ((~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have) 
               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight))) 
           & (2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)));
}

void Vfma___024root___nba_sequent__TOP__1(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_sequent__TOP__1\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining = 0;
    CData/*3:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy = 0;
    CData/*3:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid;
    __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid = 0;
    IData/*31:0*/ __Vdly__gpu_top_tb__DOT__a_stall_cycles;
    __Vdly__gpu_top_tb__DOT__a_stall_cycles = 0;
    IData/*31:0*/ __Vdly__gpu_top_tb__DOT__b_stall_cycles;
    __Vdly__gpu_top_tb__DOT__b_stall_cycles = 0;
    IData/*31:0*/ __Vdly__gpu_top_tb__DOT__c_stall_cycles;
    __Vdly__gpu_top_tb__DOT__c_stall_cycles = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v0;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v0 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4 = 0;
    CData/*1:0*/ __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4;
    __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4 = 0;
    CData/*1:0*/ __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4;
    __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v0;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v0 = 0;
    CData/*3:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2 = 0;
    CData/*3:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v3;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v0;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v0 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__a_grant_count__v1;
    __VdlyVal__gpu_top_tb__DOT__a_grant_count__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v1;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v2;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v2 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__a_grant_count__v3;
    __VdlyVal__gpu_top_tb__DOT__a_grant_count__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v3;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v4;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v4 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__a_grant_count__v5;
    __VdlyVal__gpu_top_tb__DOT__a_grant_count__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v5;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v6;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v6 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__a_grant_count__v7;
    __VdlyVal__gpu_top_tb__DOT__a_grant_count__v7 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__a_grant_count__v7;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v7 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v0;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v0 = 0;
    CData/*3:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2 = 0;
    CData/*3:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v3;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v0;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v0 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__b_grant_count__v1;
    __VdlyVal__gpu_top_tb__DOT__b_grant_count__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v1;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v2;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v2 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__b_grant_count__v3;
    __VdlyVal__gpu_top_tb__DOT__b_grant_count__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v3;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v4;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v4 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__b_grant_count__v5;
    __VdlyVal__gpu_top_tb__DOT__b_grant_count__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v5;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v6;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v6 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__b_grant_count__v7;
    __VdlyVal__gpu_top_tb__DOT__b_grant_count__v7 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__b_grant_count__v7;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v7 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v0;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v0 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__c_grant_count__v1;
    __VdlyVal__gpu_top_tb__DOT__c_grant_count__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v1;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v2;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v2 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__c_grant_count__v3;
    __VdlyVal__gpu_top_tb__DOT__c_grant_count__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v3;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v3 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v4;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v4 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__c_grant_count__v5;
    __VdlyVal__gpu_top_tb__DOT__c_grant_count__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v5;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v5 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v6;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v6 = 0;
    IData/*31:0*/ __VdlyVal__gpu_top_tb__DOT__c_grant_count__v7;
    __VdlyVal__gpu_top_tb__DOT__c_grant_count__v7 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__c_grant_count__v7;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v7 = 0;
    // Body
    __Vdly__gpu_top_tb__DOT__a_stall_cycles = vlSelfRef.gpu_top_tb__DOT__a_stall_cycles;
    __Vdly__gpu_top_tb__DOT__b_stall_cycles = vlSelfRef.gpu_top_tb__DOT__b_stall_cycles;
    __Vdly__gpu_top_tb__DOT__c_stall_cycles = vlSelfRef.gpu_top_tb__DOT__c_stall_cycles;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v0 = 0U;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2 = 0U;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v0 = 0U;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v0 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v1 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v2 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v3 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v4 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v5 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v6 = 0U;
    __VdlySet__gpu_top_tb__DOT__a_grant_count__v7 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v0 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v1 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v2 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v3 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v4 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v5 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v6 = 0U;
    __VdlySet__gpu_top_tb__DOT__b_grant_count__v7 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v0 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v1 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v2 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v3 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v4 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v5 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v6 = 0U;
    __VdlySet__gpu_top_tb__DOT__c_grant_count__v7 = 0U;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy;
    __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid = vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v0 = 0U;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4 = 0U;
    if (vlSelfRef.gpu_top_tb__DOT__rst) {
        __Vdly__gpu_top_tb__DOT__a_stall_cycles = 0U;
        __Vdly__gpu_top_tb__DOT__b_stall_cycles = 0U;
        __Vdly__gpu_top_tb__DOT__c_stall_cycles = 0U;
        __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v0 = 1U;
        __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v0 = 1U;
        __VdlySet__gpu_top_tb__DOT__a_grant_count__v0 = 1U;
        __VdlySet__gpu_top_tb__DOT__a_grant_count__v2 = 1U;
        __VdlySet__gpu_top_tb__DOT__a_grant_count__v4 = 1U;
        __VdlySet__gpu_top_tb__DOT__a_grant_count__v6 = 1U;
        __VdlySet__gpu_top_tb__DOT__b_grant_count__v0 = 1U;
        __VdlySet__gpu_top_tb__DOT__b_grant_count__v2 = 1U;
        __VdlySet__gpu_top_tb__DOT__b_grant_count__v4 = 1U;
        __VdlySet__gpu_top_tb__DOT__b_grant_count__v6 = 1U;
        __VdlySet__gpu_top_tb__DOT__c_grant_count__v0 = 1U;
        __VdlySet__gpu_top_tb__DOT__c_grant_count__v2 = 1U;
        __VdlySet__gpu_top_tb__DOT__c_grant_count__v4 = 1U;
        __VdlySet__gpu_top_tb__DOT__c_grant_count__v6 = 1U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining 
            = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__N) 
                              * (IData)(vlSelfRef.gpu_top_tb__DOT__N)));
        __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start = 0U;
        vlSelfRef.gpu_top_tb__DOT__done = 0U;
        __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v0 = 1U;
    } else {
        if ((0U != ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__a_req_valid) 
                    & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))))) {
            __Vdly__gpu_top_tb__DOT__a_stall_cycles 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__a_stall_cycles);
        }
        if ((0U != ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__b_req_valid) 
                    & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))))) {
            __Vdly__gpu_top_tb__DOT__b_stall_cycles 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__b_stall_cycles);
        }
        if ((0U != ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid) 
                    & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))))) {
            __Vdly__gpu_top_tb__DOT__c_stall_cycles 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__c_stall_cycles);
        }
        __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2 
            = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant;
        __VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2 = 1U;
        __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v3 
            = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[0U];
        __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2 
            = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant;
        __VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2 = 1U;
        __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v3 
            = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[0U];
        if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__a_grant_count__v1 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__a_grant_count[0U]);
            __VdlySet__gpu_top_tb__DOT__a_grant_count__v1 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__a_grant_count__v3 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__a_grant_count[1U]);
            __VdlySet__gpu_top_tb__DOT__a_grant_count__v3 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__a_grant_count__v5 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__a_grant_count[2U]);
            __VdlySet__gpu_top_tb__DOT__a_grant_count__v5 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__a_grant_count__v7 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__a_grant_count[3U]);
            __VdlySet__gpu_top_tb__DOT__a_grant_count__v7 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__b_grant_count__v1 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__b_grant_count[0U]);
            __VdlySet__gpu_top_tb__DOT__b_grant_count__v1 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__b_grant_count__v3 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__b_grant_count[1U]);
            __VdlySet__gpu_top_tb__DOT__b_grant_count__v3 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__b_grant_count__v5 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__b_grant_count[2U]);
            __VdlySet__gpu_top_tb__DOT__b_grant_count__v5 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__b_grant_count__v7 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__b_grant_count[3U]);
            __VdlySet__gpu_top_tb__DOT__b_grant_count__v7 = 1U;
        }
        if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__c_grant_count__v1 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__c_grant_count[0U]);
            __VdlySet__gpu_top_tb__DOT__c_grant_count__v1 = 1U;
        }
        if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__c_grant_count__v3 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__c_grant_count[1U]);
            __VdlySet__gpu_top_tb__DOT__c_grant_count__v3 = 1U;
        }
        if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__c_grant_count__v5 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__c_grant_count[2U]);
            __VdlySet__gpu_top_tb__DOT__c_grant_count__v5 = 1U;
        }
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
            __VdlyVal__gpu_top_tb__DOT__c_grant_count__v7 
                = ((IData)(1U) + vlSelfRef.gpu_top_tb__DOT__c_grant_count[3U]);
            __VdlySet__gpu_top_tb__DOT__c_grant_count__v7 = 1U;
        }
        if ((0U != (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr = 1U;
            }
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr = 2U;
            }
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr = 3U;
            }
            if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr = 1U;
            }
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr = 2U;
            }
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr = 3U;
            }
            if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr = 0U;
            }
        }
        if ((0U != (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr = 1U;
            }
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr = 2U;
            }
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr = 3U;
            }
            if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr = 0U;
            }
        }
        if ((0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid = 0U;
            if (vlSelfRef.gpu_top_tb__DOT__start) {
                vlSelfRef.gpu_top_tb__DOT__done = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = 1U;
            }
        } else if ((1U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start = 0U;
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid 
                    = (0x0eU & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid));
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start 
                    = (1U | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start));
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (1U | (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid 
                    = (0x0dU & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid));
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start 
                    = (2U | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start));
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (2U | (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid 
                    = (0x0bU & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid));
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start 
                    = (4U | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start));
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (4U | (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid 
                    = (7U & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid));
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start 
                    = (8U | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start));
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (8U | (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if ((1U & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done) 
                       & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake))))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (0x0eU & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if ((1U & (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done) 
                        >> 1U) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake) 
                                     >> 1U))))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (0x0dU & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if ((1U & (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done) 
                        >> 2U) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake) 
                                     >> 2U))))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (0x0bU & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if ((IData)((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done) 
                          >> 3U) & (~ ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake) 
                                       >> 3U))))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                    = (7U & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
            }
            if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected) 
                 & (0U < (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining)))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining 
                    = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining) 
                                      - (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size)));
                __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4 
                    = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
                __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4 
                    = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx;
                __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4 = 1U;
                __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4 
                    = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size;
                __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4 
                    = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx;
                __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid 
                    = ((IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid) 
                       | (0x0fU & ((IData)(1U) << (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx))));
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id 
                    = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id) 
                                      + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size)));
            }
            if ((((0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining)) 
                  & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy))) 
                 & (0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid)))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = 2U;
            }
        } else if ((2U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state))) {
            vlSelfRef.gpu_top_tb__DOT__done = 1U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = 0U;
        } else {
            __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = 0U;
        }
    }
    vlSelfRef.gpu_top_tb__DOT__a_stall_cycles = __Vdly__gpu_top_tb__DOT__a_stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__b_stall_cycles = __Vdly__gpu_top_tb__DOT__b_stall_cycles;
    vlSelfRef.gpu_top_tb__DOT__c_stall_cycles = __Vdly__gpu_top_tb__DOT__c_stall_cycles;
    if (__VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v0) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[0U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[1U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[0U] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v2;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe[1U] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe__v3;
    }
    if (__VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v0) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[0U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[1U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[0U] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v2;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe[1U] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe__v3;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v0) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[0U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v1) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[0U] 
            = __VdlyVal__gpu_top_tb__DOT__a_grant_count__v1;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v2) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[1U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v3) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[1U] 
            = __VdlyVal__gpu_top_tb__DOT__a_grant_count__v3;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v4) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[2U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v5) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[2U] 
            = __VdlyVal__gpu_top_tb__DOT__a_grant_count__v5;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v6) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[3U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__a_grant_count__v7) {
        vlSelfRef.gpu_top_tb__DOT__a_grant_count[3U] 
            = __VdlyVal__gpu_top_tb__DOT__a_grant_count__v7;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v0) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[0U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v1) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[0U] 
            = __VdlyVal__gpu_top_tb__DOT__b_grant_count__v1;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v2) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[1U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v3) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[1U] 
            = __VdlyVal__gpu_top_tb__DOT__b_grant_count__v3;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v4) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[2U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v5) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[2U] 
            = __VdlyVal__gpu_top_tb__DOT__b_grant_count__v5;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v6) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[3U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__b_grant_count__v7) {
        vlSelfRef.gpu_top_tb__DOT__b_grant_count[3U] 
            = __VdlyVal__gpu_top_tb__DOT__b_grant_count__v7;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v0) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[0U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v1) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[0U] 
            = __VdlyVal__gpu_top_tb__DOT__c_grant_count__v1;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v2) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[1U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v3) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[1U] 
            = __VdlyVal__gpu_top_tb__DOT__c_grant_count__v3;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v4) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[2U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v5) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[2U] 
            = __VdlyVal__gpu_top_tb__DOT__c_grant_count__v5;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v6) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[3U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__c_grant_count__v7) {
        vlSelfRef.gpu_top_tb__DOT__c_grant_count[3U] 
            = __VdlyVal__gpu_top_tb__DOT__c_grant_count__v7;
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid;
    if (__VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v0) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[0U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[1U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[2U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[3U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[2U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[3U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[__VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v4;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[__VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v4;
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size 
        = ((2U <= (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining))
            ? 2U : (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining));
}

void Vfma___024root___nba_comb__TOP__0(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_comb__TOP__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
}

void Vfma___024root___nba_sequent__TOP__2(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_sequent__TOP__2\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
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
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid 
        = ((((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
             << 3U) | ((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                       << 2U)) | (((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                                   << 1U) | (6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))));
}

void Vfma___024root___nba_comb__TOP__1(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_comb__TOP__1\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    IData/*31:0*/ gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    IData/*31:0*/ gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx;
    gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__unnamedblk1__DOT__unnamedblk2__DOT__idx = 0;
    // Body
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake 
        = ((~ ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__busy) 
                 << 3U) | ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__busy) 
                           << 2U)) | (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy) 
                                       << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy)))) 
           & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid));
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
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done 
        = ((((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__done) 
             << 3U) | ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__done) 
                       << 2U)) | (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done) 
                                   << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done)));
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
    if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant))) {
        vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_data[3U];
    }
}

void Vfma___024root___nba_comb__TOP__2(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___nba_comb__TOP__2\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
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
        vlSelfRef.gpu_top_tb__DOT__bram_c_addr = vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_addr[3U];
    }
}

void Vfma___024root___eval_nba(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___eval_nba\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfma___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfma___024root___nba_sequent__TOP__1(vlSelf);
    }
    if ((0x000000000000000dULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.__VdfgRegularize_hebeb780c_0_1 = 
            (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                            + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                               * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_2 = 
            (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                            + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                               * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_3 = 
            (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                            + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                               * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
        vlSelfRef.__VdfgRegularize_hebeb780c_0_4 = 
            (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__base_addr_B) 
                            + ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt) 
                               * (IData)(vlSelfRef.gpu_top_tb__DOT__N))));
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
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
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__c_req_valid 
            = ((((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                 << 3U) | ((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                           << 2U)) | (((6U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state)) 
                                       << 1U) | (6U 
                                                 == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfma___024root___nba_comb__TOP__1(vlSelf);
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vfma___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vfma___024root___timing_ready(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___timing_ready\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready("@(posedge gpu_top_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb5f69606__0.ready("@( gpu_top_tb.done)");
    }
}

void Vfma___024root___timing_resume(Vfma___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root___timing_resume\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VtrigSched_ha5c6da72__0.moveToResumeQueue(
                                                          "@(posedge gpu_top_tb.clk)");
    vlSelfRef.__VtrigSched_hb5f69606__0.moveToResumeQueue(
                                                          "@( gpu_top_tb.done)");
    vlSelfRef.__VtrigSched_ha5c6da72__0.resume("@(posedge gpu_top_tb.clk)");
    vlSelfRef.__VtrigSched_hb5f69606__0.resume("@( gpu_top_tb.done)");
    if ((4ULL & vlSelfRef.__VactTriggered[0U])) {
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
        VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 17, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
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
            VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 17, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 17, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vfma___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 17, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
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

void Vfma___024root____VbeforeTrig_ha5c6da72__0(Vfma___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root____VbeforeTrig_ha5c6da72__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)(((IData)(vlSelfRef.gpu_top_tb__DOT__clk) 
                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0)))));
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0 
        = vlSelfRef.gpu_top_tb__DOT__clk;
    if ((1ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready(__VeventDescription);
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready(__VeventDescription);
    }
    vlSelfRef.__VactTriggeredAcc[0U] = (vlSelfRef.__VactTriggeredAcc[0U] 
                                        | __VTmp[0U]);
}

void Vfma___024root____VbeforeTrig_hb5f69606__0(Vfma___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vfma___024root____VbeforeTrig_hb5f69606__0\n"); );
    Vfma__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    VlUnpacked<QData/*63:0*/, 1> __VTmp;
    // Body
    __VTmp[0U] = (QData)((IData)((((IData)(vlSelfRef.gpu_top_tb__DOT__done) 
                                   != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0)) 
                                  << 3U)));
    vlSelfRef.__Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0 
        = vlSelfRef.gpu_top_tb__DOT__done;
    if ((8ULL & __VTmp[0U])) {
        vlSelfRef.__VtrigSched_hb5f69606__0.ready(__VeventDescription);
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
