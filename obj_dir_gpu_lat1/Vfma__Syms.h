// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VFMA__SYMS_H_
#define VERILATED_VFMA__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vfma.h"

// INCLUDE MODULE CLASSES
#include "Vfma___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vfma__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vfma* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vfma___024root                 TOP;

    // CONSTRUCTORS
    Vfma__Syms(VerilatedContext* contextp, const char* namep, Vfma* modelp);
    ~Vfma__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
