// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vdispatcher.h for the primary calling header

#include "Vdispatcher__pch.h"

void Vdispatcher___024root___ctor_var_reset(Vdispatcher___024root* vlSelf);

Vdispatcher___024root::Vdispatcher___024root(Vdispatcher__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vdispatcher___024root___ctor_var_reset(this);
}

void Vdispatcher___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vdispatcher___024root::~Vdispatcher___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
