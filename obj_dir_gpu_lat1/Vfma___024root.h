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
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        CData/*0:0*/ gpu_top_tb__DOT__clk;
        CData/*0:0*/ gpu_top_tb__DOT__rst;
        CData/*0:0*/ gpu_top_tb__DOT__start;
        CData/*7:0*/ gpu_top_tb__DOT__N;
        CData/*0:0*/ gpu_top_tb__DOT__done;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__core_valid;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__core_start;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__core_done;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__a_req_valid;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__b_req_valid;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__c_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__done;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__b_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__a_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__done;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__b_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__a_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__done;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__b_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__a_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__done;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__b_req_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__a_req_valid;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__state;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__core_busy;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__handshake;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_core_idx;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__any_cores_selected;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__ptr;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__ptr;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__ptr;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__u_c_arbiter__DOT__grant;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__busy;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__data_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__kernel_init;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__state;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__done_r;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__busy;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__data_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__kernel_init;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__state;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__done_r;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
    };
    struct {
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__busy;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__data_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__kernel_init;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__state;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__done_r;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__busy;
        CData/*1:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__data_valid;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__kernel_init;
        CData/*3:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__state;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__done_r;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__t_cnt;
        CData/*7:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__k_cnt;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_have;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__a_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__b_inflight;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__sched_inst__DOT__is_last_thread;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_valid_out;
        CData/*0:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT____Vcellinp__fma_inst__valid_in;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __VstlPhaseResult;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_top_tb__DOT__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_top_tb__DOT__rst__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__gpu_top_tb__DOT__done__0;
        CData/*0:0*/ __VactPhaseResult;
        CData/*0:0*/ __VinactPhaseResult;
        CData/*0:0*/ __VnbaPhaseResult;
        SData/*15:0*/ gpu_top_tb__DOT__base_addr_A;
        SData/*15:0*/ gpu_top_tb__DOT__base_addr_B;
        SData/*15:0*/ gpu_top_tb__DOT__base_addr_C;
        SData/*15:0*/ gpu_top_tb__DOT__bram_a_addr;
        SData/*15:0*/ gpu_top_tb__DOT__bram_a_rd_data;
        SData/*15:0*/ gpu_top_tb__DOT__bram_b_addr;
        SData/*15:0*/ gpu_top_tb__DOT__bram_b_rd_data;
        SData/*15:0*/ gpu_top_tb__DOT__bram_c_addr;
        SData/*15:0*/ gpu_top_tb__DOT__bram_c_wr_data;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_thread_id;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__threads_remaining;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__u_dispatcher__DOT__next_block_size;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__a_latched;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__b_latched;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__a_latched;
    };
    struct {
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__b_latched;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__a_latched;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__b_latched;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__a_latched;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__b_latched;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__0__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT____Vcellout__g_threads__BRA__1__KET____DOT__th__result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__0__KET____DOT__th__DOT__fma_inst__DOT__product_aligned;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__accumulator;
        SData/*15:0*/ gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__g_threads__BRA__1__KET____DOT__th__DOT__fma_result;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_1;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_2;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_3;
        SData/*15:0*/ __VdfgRegularize_hebeb780c_0_4;
        IData/*31:0*/ gpu_top_tb__DOT__a_stall_cycles;
        IData/*31:0*/ gpu_top_tb__DOT__b_stall_cycles;
        IData/*31:0*/ gpu_top_tb__DOT__c_stall_cycles;
        IData/*31:0*/ gpu_top_tb__DOT__errors;
        IData/*31:0*/ gpu_top_tb__DOT__writes_observed;
        IData/*31:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__0__KET____DOT__u_core__stall_cycles;
        IData/*31:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__1__KET____DOT__u_core__stall_cycles;
        IData/*31:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__2__KET____DOT__u_core__stall_cycles;
        IData/*31:0*/ gpu_top_tb__DOT__dut__DOT____Vcellout__gen_cores__BRA__3__KET____DOT__u_core__stall_cycles;
        IData/*31:0*/ __VactIterCount;
        IData/*31:0*/ __VinactIterCount;
        IData/*31:0*/ __Vi;
        VlUnpacked<IData/*31:0*/, 4> gpu_top_tb__DOT__a_grant_count;
        VlUnpacked<IData/*31:0*/, 4> gpu_top_tb__DOT__b_grant_count;
        VlUnpacked<IData/*31:0*/, 4> gpu_top_tb__DOT__c_grant_count;
        VlUnpacked<IData/*31:0*/, 4> gpu_top_tb__DOT__core_stall_cycles;
        VlUnpacked<SData/*15:0*/, 4> gpu_top_tb__DOT__dut__DOT__core_thread_id;
        VlUnpacked<SData/*15:0*/, 4> gpu_top_tb__DOT__dut__DOT__core_thread_count;
        VlUnpacked<SData/*15:0*/, 4> gpu_top_tb__DOT__dut__DOT__a_req_addr;
        VlUnpacked<SData/*15:0*/, 4> gpu_top_tb__DOT__dut__DOT__b_req_addr;
        VlUnpacked<SData/*15:0*/, 4> gpu_top_tb__DOT__dut__DOT__c_req_addr;
        VlUnpacked<SData/*15:0*/, 4> gpu_top_tb__DOT__dut__DOT__c_req_data;
        VlUnpacked<CData/*3:0*/, 2> gpu_top_tb__DOT__dut__DOT__u_a_arbiter__DOT__grant_pipe;
        VlUnpacked<CData/*3:0*/, 2> gpu_top_tb__DOT__dut__DOT__u_b_arbiter__DOT__grant_pipe;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_A;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_B;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_addr_C;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__0__KET____DOT__u_core__DOT__thread_result;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_A;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_B;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_addr_C;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__1__KET____DOT__u_core__DOT__thread_result;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_A;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_B;
    };
    struct {
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_addr_C;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__2__KET____DOT__u_core__DOT__thread_result;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_A;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_B;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_addr_C;
        VlUnpacked<SData/*15:0*/, 2> gpu_top_tb__DOT__dut__DOT__gen_cores__BRA__3__KET____DOT__u_core__DOT__thread_result;
        VlUnpacked<SData/*15:0*/, 256> gpu_top_tb__DOT__bram_A__DOT__mem;
        VlUnpacked<SData/*15:0*/, 256> gpu_top_tb__DOT__bram_B__DOT__mem;
        VlUnpacked<SData/*15:0*/, 256> gpu_top_tb__DOT__bram_C__DOT__mem;
        VlUnpacked<QData/*63:0*/, 1> __VstlTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggered;
        VlUnpacked<QData/*63:0*/, 1> __VactTriggeredAcc;
        VlUnpacked<QData/*63:0*/, 1> __VnbaTriggered;
    };
    VlDelayScheduler __VdlySched;
    VlTriggerScheduler __VtrigSched_ha5c6da72__0;
    VlTriggerScheduler __VtrigSched_hb5f69606__0;

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
