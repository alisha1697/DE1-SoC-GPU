// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vscheduler.h for the primary calling header

#include "Vscheduler__pch.h"

void Vscheduler___024root___ctor_var_reset(Vscheduler___024root* vlSelf);

Vscheduler___024root::Vscheduler___024root(Vscheduler__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vscheduler___024root___ctor_var_reset(this);
}

void Vscheduler___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vscheduler___024root::~Vscheduler___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
