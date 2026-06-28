// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vdispatcher.h for the primary calling header

#ifndef VERILATED_VDISPATCHER___024ROOT_H_
#define VERILATED_VDISPATCHER___024ROOT_H_  // guard

#include "verilated.h"
#include "verilated_timing.h"


class Vdispatcher__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vdispatcher___024root final {
  public:

    // DESIGN SPECIFIC STATE
    CData/*0:0*/ dispatcher_tb__DOT__clk;
    CData/*0:0*/ dispatcher_tb__DOT__rst;
    CData/*0:0*/ dispatcher_tb__DOT__start;
    CData/*7:0*/ dispatcher_tb__DOT__N;
    CData/*1:0*/ dispatcher_tb__DOT__core_done;
    CData/*1:0*/ dispatcher_tb__DOT__core_ready;
    CData/*1:0*/ dispatcher_tb__DOT__core_valid;
    CData/*1:0*/ dispatcher_tb__DOT__core_start;
    CData/*0:0*/ dispatcher_tb__DOT__done;
    CData/*1:0*/ dispatcher_tb__DOT__dut__DOT__state;
    CData/*1:0*/ dispatcher_tb__DOT__dut__DOT__core_busy;
    CData/*1:0*/ dispatcher_tb__DOT__dut__DOT__handshake;
    CData/*0:0*/ dispatcher_tb__DOT__dut__DOT__next_core_idx;
    CData/*0:0*/ dispatcher_tb__DOT__dut__DOT__any_cores_selected;
    CData/*1:0*/ __Vdly__dispatcher_tb__DOT__core_valid;
    CData/*0:0*/ __VdlySet__dispatcher_tb__DOT__core_thread_id__v0;
    CData/*0:0*/ __VdlyDim0__dispatcher_tb__DOT__core_thread_id__v2;
    CData/*0:0*/ __VdlySet__dispatcher_tb__DOT__core_thread_id__v2;
    CData/*0:0*/ __VdlyDim0__dispatcher_tb__DOT__core_thread_count__v2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VstlPhaseResult;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dispatcher_tb__DOT__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dispatcher_tb__DOT__rst__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__dispatcher_tb__DOT__done__0;
    CData/*0:0*/ __VactPhaseResult;
    CData/*0:0*/ __VinactPhaseResult;
    CData/*0:0*/ __VnbaPhaseResult;
    SData/*15:0*/ dispatcher_tb__DOT__dut__DOT__next_thread_id;
    SData/*15:0*/ dispatcher_tb__DOT__dut__DOT__threads_remaining;
    SData/*15:0*/ dispatcher_tb__DOT__dut__DOT__next_block_size;
    SData/*15:0*/ __VdlyVal__dispatcher_tb__DOT__core_thread_id__v2;
    SData/*15:0*/ __VdlyVal__dispatcher_tb__DOT__core_thread_count__v2;
    IData/*31:0*/ dispatcher_tb__DOT__errors;
    IData/*31:0*/ dispatcher_tb__DOT__total_threads_seen;
    IData/*31:0*/ dispatcher_tb__DOT__expected_next_thread_id;
    IData/*31:0*/ __VactIterCount;
    IData/*31:0*/ __VinactIterCount;
    IData/*31:0*/ __Vi;
    VlUnpacked<SData/*15:0*/, 2> dispatcher_tb__DOT__core_thread_id;
    VlUnpacked<SData/*15:0*/, 2> dispatcher_tb__DOT__core_thread_count;
    VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
    VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
    VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_h76981d66__0;
    VlTriggerScheduler __VtrigSched_h7d556d12__0;

    // INTERNAL VARIABLES
    Vdispatcher__Syms* vlSymsp;
    const char* vlNamep;

    // CONSTRUCTORS
    Vdispatcher___024root(Vdispatcher__Syms* symsp, const char* namep);
    ~Vdispatcher___024root();
    VL_UNCOPYABLE(Vdispatcher___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
