// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vfma.h for the primary calling header

#include "Vfma__pch.h"

void Vfma___024root___ctor_var_reset(Vfma___024root* vlSelf);

Vfma___024root::Vfma___024root(Vfma__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vfma___024root___ctor_var_reset(this);
}

void Vfma___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vfma___024root::~Vfma___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
