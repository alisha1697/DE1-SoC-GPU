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
    CData/*0:0*/ fma_tb__DOT__clk;
    CData/*0:0*/ fma_tb__DOT__rst;
    CData/*0:0*/ fma_tb__DOT__valid_in;
    CData/*0:0*/ fma_tb__DOT__valid_out;
    CData/*0:0*/ __Vtrigprevexpr___TOP__fma_tb__DOT__clk__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ fma_tb__DOT__a;
    SData/*15:0*/ fma_tb__DOT__b;
    SData/*15:0*/ fma_tb__DOT__c;
    SData/*15:0*/ fma_tb__DOT__result;
    IData/*31:0*/ fma_tb__DOT__errors;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h61621ddf__0;

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
