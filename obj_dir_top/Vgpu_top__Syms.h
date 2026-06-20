// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VGPU_TOP__SYMS_H_
#define VERILATED_VGPU_TOP__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vgpu_top.h"

// INCLUDE MODULE CLASSES
#include "Vgpu_top___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vgpu_top__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vgpu_top* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vgpu_top___024root             TOP;

    // CONSTRUCTORS
    Vgpu_top__Syms(VerilatedContext* contextp, const char* namep, Vgpu_top* modelp);
    ~Vgpu_top__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
