// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vgpu_top.h for the primary calling header

#include "Vgpu_top__pch.h"

void Vgpu_top___024root___ctor_var_reset(Vgpu_top___024root* vlSelf);

Vgpu_top___024root::Vgpu_top___024root(Vgpu_top__Syms* symsp, const char* namep)
    : __VdlySched{*symsp->_vm_contextp__}
 {
    vlSymsp = symsp;
    vlNamep = strdup(namep);
    // Reset structure values
    Vgpu_top___024root___ctor_var_reset(this);
}

void Vgpu_top___024root::__Vconfigure(bool first) {
    (void)first;  // Prevent unused variable warning
}

Vgpu_top___024root::~Vgpu_top___024root() {
    VL_DO_DANGLING(std::free(const_cast<char*>(vlNamep)), vlNamep);
}
