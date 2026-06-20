// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu_top.h for the primary calling header

#include "Vgpu_top__pch.h"

VL_ATTR_COLD VlCoroutine Vgpu_top___024root___eval_initial__TOP____Vfork_1__0(Vgpu_top___024root* vlSelf);
VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__0(Vgpu_top___024root* vlSelf);
VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__1(Vgpu_top___024root* vlSelf, VlProcessRef vlProcess);
VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__2(Vgpu_top___024root* vlSelf);

void Vgpu_top___024root___eval_initial(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i;
    __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i = 0;
    // Body
    Vgpu_top___024root___eval_initial__TOP____Vfork_1__0(vlSelf);
    __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i = 0U;
    while (VL_GTS_III(32, 0x00000100U, __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i)) {
        vlSelfRef.gpu_top_tb__DOT__mem_A[(0x000000ffU 
                                          & __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__mem_B[(0x000000ffU 
                                          & __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i)] = 0U;
        vlSelfRef.gpu_top_tb__DOT__mem_C[(0x000000ffU 
                                          & __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i)] = 0xdeadU;
        __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i 
            = ((IData)(1U) + __Vinline__eval_initial__TOP_gpu_top_tb__DOT__unnamedblk3__DOT__i);
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
    Vgpu_top___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vgpu_top___024root___eval_initial__TOP__Vtiming__1(vlSelf, std::make_shared<VlProcess>());
    Vgpu_top___024root___eval_initial__TOP__Vtiming__2(vlSelf);
}

VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__0(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top_tb__DOT__clk = 0U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000001388ULL, 
                                             nullptr, 
                                             "tb/Top/gpu_top_tb.sv", 
                                             31);
        vlSelfRef.gpu_top_tb__DOT__clk = (1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__clk)));
    }
    co_return;
}

void Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(Vgpu_top___024root* vlSelf, const char* __VeventDescription);
VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vgpu_top___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);
VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vgpu_top___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync);

VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__1(Vgpu_top___024root* vlSelf, VlProcessRef vlProcess) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    SData/*15:0*/ gpu_top_tb__DOT____VlemCall_0__compute_golden;
    IData/*31:0*/ gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0;
    gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 0;
    SData/*15:0*/ gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected;
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    SData/*15:0*/ __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0;
    SData/*15:0*/ __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    vlSymsp->_vm_contextp__->dumpfile("gpu_top_tb.vcd"s);
    VL_PRINTF_MT("-Info: tb/Top/gpu_top_tb.sv:109: $dumpvar ignored, as Verilated without --trace\n");
    vlSelfRef.gpu_top_tb__DOT__rst = 1U;
    vlSelfRef.gpu_top_tb__DOT__start = 0U;
    vlSelfRef.gpu_top_tb__DOT__N = 4U;
    vlSelfRef.gpu_top_tb__DOT__base_addr_A = 0U;
    vlSelfRef.gpu_top_tb__DOT__base_addr_B = 0U;
    vlSelfRef.gpu_top_tb__DOT__base_addr_C = 0U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000003e8ULL, 
                                         vlProcess, 
                                         "tb/Top/gpu_top_tb.sv", 
                                         117);
    VL_WRITEF_NX("\n=== GPU SYSTEM TEST: 4x4 matmul (NUM_CORES=2, T/C=2) ===\nTotal blocks=8, dispatches/core=4 (exercises kernel_init path)\nExpected C (from golden):\n  row 0:",0);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d\n  row 1:",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d\n  row 2:",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d\n  row 3:",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT____VlemCall_0__compute_golden = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__1__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT____VlemCall_0__compute_golden = __Vfunc_gpu_top_tb__DOT__compute_golden__1__acc;
    VL_WRITEF_NX(" %5d\n",1, '#',16,gpu_top_tb__DOT____VlemCall_0__compute_golden);
    gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 = 3U;
    while (VL_LTS_III(32, 0U, gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0)) {
        Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                       "@(posedge gpu_top_tb.clk)");
        co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge gpu_top_tb.clk)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             132);
        gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
            = (gpu_top_tb__DOT__unnamedblk1_1__DOT____Vrepeat0 
               - (IData)(1U));
    }
    vlSelfRef.gpu_top_tb__DOT__rst = 0U;
    Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                   "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         134);
    vlSelfRef.gpu_top_tb__DOT__start = 1U;
    Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                   "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         137);
    vlSelfRef.gpu_top_tb__DOT__start = 0U;
    VlForkSync __Vfork_2__sync;
    __Vfork_2__sync.init(1U, vlProcess);
    Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
    Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(vlSelf, std::make_shared<VlProcess>(vlProcess), __Vfork_2__sync);
    co_await __Vfork_2__sync.join(vlProcess, "tb/Top/gpu_top_tb.sv", 
                                  140);
    vlProcess->disableFork();
    Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                   "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         152);
    Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                   "@(posedge gpu_top_tb.clk)");
    co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                         vlProcess, 
                                                         "@(posedge gpu_top_tb.clk)", 
                                                         "tb/Top/gpu_top_tb.sv", 
                                                         152);
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[0U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[0][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[0U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[0U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[1U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[0][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[1U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[1U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[2U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[0][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[2U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[2U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[0U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[1U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[2U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[3U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[3U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[0][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[3U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[0][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[3U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[4U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[1][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[4U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[4U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[5U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[1][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[5U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[5U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[6U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[1][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[6U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[6U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[4U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[5U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[6U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[7U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[7U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[1][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[7U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[1][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[7U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[8U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[2][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[8U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[8U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[9U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[2][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[9U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[9U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[10U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[2][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[10U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[10U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[8U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[9U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[10U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[11U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[11U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[2][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[11U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[2][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[11U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[0U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[4U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[8U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[12U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[12U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[3][0]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[12U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][0] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[12U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[1U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[5U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[9U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[13U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[13U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[3][1]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[13U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][1] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[13U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[2U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[6U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[10U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[14U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[14U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[3][2]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[14U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][2] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[14U]);
    }
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected = 0;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc = 0U;
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[12U]) 
                          * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[3U])));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[13U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[7U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[14U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[11U]))));
    __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc 
        = (0x0000ffffU & ((IData)(__Vfunc_gpu_top_tb__DOT__compute_golden__3__acc) 
                          + ((IData)(vlSelfRef.gpu_top_tb__DOT__mem_A[15U]) 
                             * (IData)(vlSelfRef.gpu_top_tb__DOT__mem_B[15U]))));
    gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected 
        = __Vfunc_gpu_top_tb__DOT__compute_golden__3__acc;
    if (VL_UNLIKELY(((vlSelfRef.gpu_top_tb__DOT__mem_C[15U] 
                      != (IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected))))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:159: Assertion failed in %m:   FAIL  C[3][3]: expected %0d, got %0d\n",5, 'M',vlSymsp->name(),"gpu_top_tb.unnamedblk7.unnamedblk8.unnamedblk9", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '#',16,(IData)(gpu_top_tb__DOT__unnamedblk7__DOT__unnamedblk8__DOT__unnamedblk9__DOT__expected)
                     , '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[15U]);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 159, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    } else {
        VL_WRITEF_NX("  PASS  C[3][3] = %0d\n",1, '#',16,vlSelfRef.gpu_top_tb__DOT__mem_C[15U]);
    }
    if (VL_UNLIKELY(((0x00000010U != vlSelfRef.gpu_top_tb__DOT__writes_observed)))) {
        VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:169: Assertion failed in %m: Wrong write count: expected 16, got %0d\n",4, 'M',vlSymsp->name(),"gpu_top_tb", 'T',-9
                     , '#',64,VL_TIME_UNITED_Q(1000)
                     , '~',32,vlSelfRef.gpu_top_tb__DOT__writes_observed);
        VL_STOP_MT("tb/Top/gpu_top_tb.sv", 169, "");
        vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                             + vlSelfRef.gpu_top_tb__DOT__errors);
    }
    VL_WRITEF_NX("\n",0);
    if ((0U == vlSelfRef.gpu_top_tb__DOT__errors)) {
        VL_WRITEF_NX("=== SYSTEM TEST PASSED ===\n",0);
    } else {
        VL_WRITEF_NX("=== SYSTEM TEST FAILED: %0d errors ===\n",1
                     , '~',32,vlSelfRef.gpu_top_tb__DOT__errors);
    }
    vlProcess->disableFork();
    VL_FINISH_MT("tb/Top/gpu_top_tb.sv", 178, "");
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1(Vgpu_top___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__1\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __Vtask_gpu_top_tb__DOT____VforkTask_1__2__unnamedblk1_2__DOT____Vrepeat1;
    __Vtask_gpu_top_tb__DOT____VforkTask_1__2__unnamedblk1_2__DOT____Vrepeat1 = 0;
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    __Vtask_gpu_top_tb__DOT____VforkTask_1__2__unnamedblk1_2__DOT____Vrepeat1 = 0;
    __Vtask_gpu_top_tb__DOT____VforkTask_1__2__unnamedblk1_2__DOT____Vrepeat1 = 0x00004e20U;
    while (VL_LTS_III(32, 0U, __Vtask_gpu_top_tb__DOT____VforkTask_1__2__unnamedblk1_2__DOT____Vrepeat1)) {
        Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(vlSelf, 
                                                       "@(posedge gpu_top_tb.clk)");
        co_await vlSelfRef.__VtrigSched_ha5c6da72__0.trigger(0U, 
                                                             vlProcess, 
                                                             "@(posedge gpu_top_tb.clk)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             146);
        __Vtask_gpu_top_tb__DOT____VforkTask_1__2__unnamedblk1_2__DOT____Vrepeat1 
            = (__Vtask_gpu_top_tb__DOT____VforkTask_1__2__unnamedblk1_2__DOT____Vrepeat1 
               - (IData)(1U));
    }
    VL_WRITEF_NX("[%0t] %%Error: gpu_top_tb.sv:147: Assertion failed in %m: TIMEOUT\n",3, 'M',vlSymsp->name(),"gpu_top_tb.__VforkTask_1", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("tb/Top/gpu_top_tb.sv", 147, "");
    vlSelfRef.gpu_top_tb__DOT__errors = ((IData)(1U) 
                                         + vlSelfRef.gpu_top_tb__DOT__errors);
    __Vfork_2__sync.done("tb/Top/gpu_top_tb.sv", 145);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

void Vgpu_top___024root____VbeforeTrig_hb5f69606__0(Vgpu_top___024root* vlSelf, const char* __VeventDescription);

VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0(Vgpu_top___024root* vlSelf, VlProcessRef vlProcess, VlForkSync __Vfork_2__sync) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial__TOP__Vtiming__1____Vfork_2__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    VlProcess::currentp(vlProcess.get());
    __Vfork_2__sync.onKill(vlProcess);
    while ((1U & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__done)))) {
        Vgpu_top___024root____VbeforeTrig_hb5f69606__0(vlSelf, 
                                                       "@( gpu_top_tb.done)");
        co_await vlSelfRef.__VtrigSched_hb5f69606__0.trigger(1U, 
                                                             vlProcess, 
                                                             "@( gpu_top_tb.done)", 
                                                             "tb/Top/gpu_top_tb.sv", 
                                                             142);
    }
    VL_WRITEF_NX("[t=%0t] done asserted!\n",2, 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    __Vfork_2__sync.done("tb/Top/gpu_top_tb.sv", 141);
    vlProcess->state(VlProcess::FINISHED);
    co_return;
}

VlCoroutine Vgpu_top___024root___eval_initial__TOP__Vtiming__2(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x000000001dcd6500ULL, 
                                         nullptr, "tb/Top/gpu_top_tb.sv", 
                                         181);
    VL_WRITEF_NX("[%0t] %%Fatal: gpu_top_tb.sv:181: Assertion failed in %m: HARD TIMEOUT\n",3, 'M',vlSymsp->name(),"gpu_top_tb", 'T',-9
                 , '#',64,VL_TIME_UNITED_Q(1000));
    VL_STOP_MT("tb/Top/gpu_top_tb.sv", 181, "", false);
    co_return;
}

void Vgpu_top___024root___eval_triggers_vec__act(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_triggers_vec__act\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

bool Vgpu_top___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___trigger_anySet__act\n"); );
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

void Vgpu_top___024root___act_comb__TOP__0(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___act_comb__TOP__0\n"); );
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

void Vgpu_top___024root___eval_act(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_act\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((0x000000000000000dULL & vlSelfRef.__VactTriggered[0U])) {
        Vgpu_top___024root___act_comb__TOP__0(vlSelf);
    }
}

void Vgpu_top___024root___nba_sequent__TOP__0(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___nba_sequent__TOP__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en;
    gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en = 0;
    CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en;
    gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en = 0;
    CData/*3:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0;
    CData/*7:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0;
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0;
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
    CData/*0:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v0;
    __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v0;
    __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v0 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__mem_C__v0;
    __VdlyVal__gpu_top_tb__DOT__mem_C__v0 = 0;
    CData/*7:0*/ __VdlyDim0__gpu_top_tb__DOT__mem_C__v0;
    __VdlyDim0__gpu_top_tb__DOT__mem_C__v0 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__mem_C__v0;
    __VdlySet__gpu_top_tb__DOT__mem_C__v0 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v1;
    __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v1;
    __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v1 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__mem_C__v1;
    __VdlyVal__gpu_top_tb__DOT__mem_C__v1 = 0;
    CData/*7:0*/ __VdlyDim0__gpu_top_tb__DOT__mem_C__v1;
    __VdlyDim0__gpu_top_tb__DOT__mem_C__v1 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__mem_C__v1;
    __VdlySet__gpu_top_tb__DOT__mem_C__v1 = 0;
    // Body
    __VdlySet__gpu_top_tb__DOT__mem_C__v0 = 0U;
    __VdlySet__gpu_top_tb__DOT__mem_C__v1 = 0U;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v0 
        = vlSelfRef.gpu_top_tb__DOT__mem_A[(0x000000ffU 
                                            & vlSelfRef.gpu_top_tb__DOT__bram_a_addr[0U])];
    __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v1 
        = vlSelfRef.gpu_top_tb__DOT__mem_A[(0x000000ffU 
                                            & vlSelfRef.gpu_top_tb__DOT__bram_a_addr[1U])];
    __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v0 
        = vlSelfRef.gpu_top_tb__DOT__mem_B[(0x000000ffU 
                                            & vlSelfRef.gpu_top_tb__DOT__bram_b_addr[0U])];
    __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v1 
        = vlSelfRef.gpu_top_tb__DOT__mem_B[(0x000000ffU 
                                            & vlSelfRef.gpu_top_tb__DOT__bram_b_addr[1U])];
    if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__bram_c_wr_en))) {
        __VdlyVal__gpu_top_tb__DOT__mem_C__v0 = vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[0U];
        __VdlyDim0__gpu_top_tb__DOT__mem_C__v0 = (0x000000ffU 
                                                  & vlSelfRef.gpu_top_tb__DOT__bram_c_addr[0U]);
        __VdlySet__gpu_top_tb__DOT__mem_C__v0 = 1U;
    }
    if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__bram_c_wr_en))) {
        __VdlyVal__gpu_top_tb__DOT__mem_C__v1 = vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[1U];
        __VdlyDim0__gpu_top_tb__DOT__mem_C__v1 = (0x000000ffU 
                                                  & vlSelfRef.gpu_top_tb__DOT__bram_c_addr[1U]);
        __VdlySet__gpu_top_tb__DOT__mem_C__v1 = 1U;
    }
    if (vlSelfRef.gpu_top_tb__DOT__rst) {
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__mem_write_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
        __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__mem_write_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = 0U;
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
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__mem_write_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = 0U;
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done = 1U;
                if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done = 0U;
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
                } else {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__mem_write_en = 1U;
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
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid 
                    = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 4U;
                gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en 
                    = ((IData)(gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__fma_en) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
            } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt)));
            } else {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
        } else {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done = 0U;
            if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init = 1U;
            }
        }
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid = 0U;
        gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__mem_write_en = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = 0U;
        if ((8U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            if ((4U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 0U;
            } else {
                vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done = 1U;
                if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done = 0U;
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
                } else {
                    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__mem_write_en = 1U;
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
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid 
                    = ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 4U;
                gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en 
                    = ((IData)(gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__fma_en) 
                       | (3U & ((IData)(1U) << (1U 
                                                & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt)))));
            } else if (vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt 
                    = (1U & ((IData)(1U) + (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt)));
            } else {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0U;
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 3U;
            }
        } else if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt = 0U;
            __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 2U;
        } else {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done = 0U;
            if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start))) {
                __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state = 1U;
                vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init = 1U;
            }
        }
    }
    vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data[0U] = __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v0;
    vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data[1U] = __VdlyVal__gpu_top_tb__DOT__bram_a_rd_data__v1;
    vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data[0U] = __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v0;
    vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data[1U] = __VdlyVal__gpu_top_tb__DOT__bram_b_rd_data__v1;
    if (__VdlySet__gpu_top_tb__DOT__mem_C__v0) {
        vlSelfRef.gpu_top_tb__DOT__mem_C[__VdlyDim0__gpu_top_tb__DOT__mem_C__v0] 
            = __VdlyVal__gpu_top_tb__DOT__mem_C__v0;
    }
    if (__VdlySet__gpu_top_tb__DOT__mem_C__v1) {
        vlSelfRef.gpu_top_tb__DOT__mem_C[__VdlyDim0__gpu_top_tb__DOT__mem_C__v1] 
            = __VdlyVal__gpu_top_tb__DOT__mem_C__v1;
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & (vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data[0U] 
                          * vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data[0U]));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned 
        = (0x0000ffffU & (vlSelfRef.gpu_top_tb__DOT__bram_b_rd_data[1U] 
                          * vlSelfRef.gpu_top_tb__DOT__bram_a_rd_data[1U]));
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result[0U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result[1U] 
        = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
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
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__wait_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt 
        = __Vdly__gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
    vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[0U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
    vlSelfRef.gpu_top_tb__DOT__bram_c_wr_en = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__mem_write_en) 
                                                << 1U) 
                                               | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__mem_write_en));
    vlSelfRef.gpu_top_tb__DOT__bram_c_wr_data[1U] = vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result
        [(1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt))];
}

void Vgpu_top___024root___nba_sequent__TOP__1(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___nba_sequent__TOP__1\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*1:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id = 0;
    SData/*15:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining = 0;
    CData/*1:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy;
    __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy = 0;
    CData/*1:0*/ __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid;
    __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v0;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v0 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2;
    __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2 = 0;
    CData/*0:0*/ __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2;
    __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2 = 0;
    SData/*15:0*/ __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2;
    __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2 = 0;
    CData/*0:0*/ __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2;
    __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2 = 0;
    // Body
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
    __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2 = 0U;
    if (vlSelfRef.gpu_top_tb__DOT__rst) {
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
    } else if ((0U == (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state))) {
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
                = (2U & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid));
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start 
                = (1U | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start));
            __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                = (1U | (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
        }
        if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid 
                = (1U & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid));
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start 
                = (2U | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_start));
            __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                = (2U | (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
        }
        if ((1U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                = (2U & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
        }
        if ((2U & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy 
                = (1U & (IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy));
        }
        if (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected) 
             & (0U < (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining)))) {
            __Vdly__gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining 
                = (0x0000ffffU & ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining) 
                                  - (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size)));
            __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2 
                = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
            __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2 
                = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx;
            __VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2 = 1U;
            __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2 
                = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size;
            __VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2 
                = vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx;
            __Vdly__gpu_top_tb__DOT__dut__DOT__core_valid 
                = ((IData)(__Vdly__gpu_top_tb__DOT__dut__DOT__core_valid) 
                   | (3U & ((IData)(1U) << (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx))));
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
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[0U] = 0U;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[1U] = 0U;
    }
    if (__VdlySet__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_count[__VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_count__v2;
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_thread_id[__VdlyDim0__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2] 
            = __VdlyVal__gpu_top_tb__DOT__dut__DOT__core_thread_id__v2;
    }
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size 
        = ((2U <= (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining))
            ? 2U : (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining));
}

void Vgpu_top___024root___nba_comb__TOP__0(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___nba_comb__TOP__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
}

void Vgpu_top___024root___nba_sequent__TOP__2(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___nba_sequent__TOP__2\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done 
        = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done) 
            << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done));
}

void Vgpu_top___024root___nba_comb__TOP__1(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___nba_comb__TOP__1\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake 
        = ((~ (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy) 
                << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy))) 
           & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid));
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
}

void Vgpu_top___024root___nba_comb__TOP__2(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___nba_comb__TOP__2\n"); );
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

void Vgpu_top___024root___eval_nba(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_nba\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vgpu_top___024root___nba_sequent__TOP__0(vlSelf);
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vgpu_top___024root___nba_sequent__TOP__1(vlSelf);
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
    }
    if ((1ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_done 
            = (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done) 
                << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done));
    }
    if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
        vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake 
            = ((~ (((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy) 
                    << 1U) | (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy))) 
               & (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__core_valid));
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
                                       >> 1U))) & (~ 
                                                   ((IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake) 
                                                    >> 1U))) 
                   & (~ (IData)(vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected))))) {
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx = 1U;
            vlSelfRef.gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected = 1U;
        }
    }
    if ((0x000000000000000fULL & vlSelfRef.__VnbaTriggered[0U])) {
        Vgpu_top___024root___nba_comb__TOP__2(vlSelf);
    }
}

void Vgpu_top___024root___timing_ready(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___timing_ready\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    if ((1ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_ha5c6da72__0.ready("@(posedge gpu_top_tb.clk)");
    }
    if ((8ULL & vlSelfRef.__VactTriggered[0U])) {
        vlSelfRef.__VtrigSched_hb5f69606__0.ready("@( gpu_top_tb.done)");
    }
}

void Vgpu_top___024root___timing_resume(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___timing_resume\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vgpu_top___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___trigger_orInto__act_vec_vec\n"); );
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
VL_ATTR_COLD void Vgpu_top___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vgpu_top___024root___eval_phase__act(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_phase__act\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    Vgpu_top___024root___eval_triggers_vec__act(vlSelf);
    Vgpu_top___024root___timing_ready(vlSelf);
    Vgpu_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vgpu_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vgpu_top___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vgpu_top___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        Vgpu_top___024root___timing_resume(vlSelf);
        Vgpu_top___024root___eval_act(vlSelf);
    }
    return (__VactExecute);
}

bool Vgpu_top___024root___eval_phase__inact(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_phase__inact\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 6, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vgpu_top___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

bool Vgpu_top___024root___eval_phase__nba(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_phase__nba\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vgpu_top___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        Vgpu_top___024root___eval_nba(vlSelf);
        Vgpu_top___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

void Vgpu_top___024root___eval(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    IData/*31:0*/ __VnbaIterCount;
    // Body
    __VnbaIterCount = 0U;
    do {
        if (VL_UNLIKELY(((0x00002710U < __VnbaIterCount)))) {
#ifdef VL_DEBUG
            Vgpu_top___024root___dump_triggers__act(vlSelfRef.__VnbaTriggered, "nba"s);
#endif
            VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 6, "", "DIDNOTCONVERGE: NBA region did not converge after '--converge-limit' of 10000 tries");
        }
        __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
        vlSelfRef.__VinactIterCount = 0U;
        do {
            if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VinactIterCount)))) {
                VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 6, "", "DIDNOTCONVERGE: Inactive region did not converge after '--converge-limit' of 10000 tries");
            }
            vlSelfRef.__VinactIterCount = ((IData)(1U) 
                                           + vlSelfRef.__VinactIterCount);
            vlSelfRef.__VactIterCount = 0U;
            do {
                if (VL_UNLIKELY(((0x00002710U < vlSelfRef.__VactIterCount)))) {
#ifdef VL_DEBUG
                    Vgpu_top___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
#endif
                    VL_FATAL_MT("tb/Top/gpu_top_tb.sv", 6, "", "DIDNOTCONVERGE: Active region did not converge after '--converge-limit' of 10000 tries");
                }
                vlSelfRef.__VactIterCount = ((IData)(1U) 
                                             + vlSelfRef.__VactIterCount);
                vlSelfRef.__VactPhaseResult = Vgpu_top___024root___eval_phase__act(vlSelf);
            } while (vlSelfRef.__VactPhaseResult);
            vlSelfRef.__VinactPhaseResult = Vgpu_top___024root___eval_phase__inact(vlSelf);
        } while (vlSelfRef.__VinactPhaseResult);
        vlSelfRef.__VnbaPhaseResult = Vgpu_top___024root___eval_phase__nba(vlSelf);
    } while (vlSelfRef.__VnbaPhaseResult);
}

void Vgpu_top___024root____VbeforeTrig_ha5c6da72__0(Vgpu_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root____VbeforeTrig_ha5c6da72__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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

void Vgpu_top___024root____VbeforeTrig_hb5f69606__0(Vgpu_top___024root* vlSelf, const char* __VeventDescription) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root____VbeforeTrig_hb5f69606__0\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
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
void Vgpu_top___024root___eval_debug_assertions(Vgpu_top___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vgpu_top___024root___eval_debug_assertions\n"); );
    Vgpu_top__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
