// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vthread.h for the primary calling header

#include "Vthread__pch.h"

void Vthread___024root___ctor_var_reset(Vthread___024root* vlSelf);

Vthread___024root::Vthread___024root(Vthread__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vthread___024root___ctor_var_reset(this);
}

void Vthread___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vthread___024root::~Vthread___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
