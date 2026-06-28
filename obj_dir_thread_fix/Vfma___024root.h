// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vfma.h for the primary calling header

#ifndef VERILATED_VFMA___024ROOT_H_
#define VERILATED_VFMA___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vfma__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vfma___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ thread_tb__DOT__clk;
    CData/*0:0*/ thread_tb__DOT__rst;
    CData/*0:0*/ thread_tb__DOT__en;
    CData/*0:0*/ thread_tb__DOT__kernel_init;
    CData/*7:0*/ thread_tb__DOT__N;
    CData/*7:0*/ thread_tb__DOT__k;
    CData/*0:0*/ thread_tb__DOT__data_valid;
    CData/*0:0*/ thread_tb__DOT__dut__DOT__fma_valid_out;
    CData/*0:0*/ thread_tb__DOT__dut__DOT____Vcellinp__fma_inst__valid_in;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__thread_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ thread_tb__DOT__thread_id;
    SData/*15:0*/ thread_tb__DOT__base_addr_A;
    SData/*15:0*/ thread_tb__DOT__base_addr_B;
    SData/*15:0*/ thread_tb__DOT__base_addr_C;
    SData/*15:0*/ thread_tb__DOT__addr_A;
    SData/*15:0*/ thread_tb__DOT__addr_B;
    SData/*15:0*/ thread_tb__DOT__addr_C;
    SData/*15:0*/ thread_tb__DOT__result;
    SData/*15:0*/ thread_tb__DOT__dut__DOT__accumulator;
    SData/*15:0*/ thread_tb__DOT__dut__DOT__fma_result;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_0;
    SData/*15:0*/ __VdfgRegularize_hebeb780c_0_1;
    IData/*31:0*/ thread_tb__DOT__errors;
    IData/*31:0*/ thread_tb__DOT__test_count;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 256> thread_tb__DOT__mem_A;
    VlUnpacked<SData/*15:0*/, 256> thread_tb__DOT__mem_B;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_hc1a933eb__0;

    // INTERNAL VARIABLES
    Vfma__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vfma___024root(Vfma__Syms* symsp, const char* namep);
    ~Vfma___024root();
    VL_UNCOPYABLE(Vfma___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
