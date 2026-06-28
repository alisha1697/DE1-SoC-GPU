// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VDISPATCHER__SYMS_H_
#define VERILATED_VDISPATCHER__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "Vdispatcher.h"

// INCLUDE MODULE CLASSES
#include "Vdispatcher___024root.h"

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES) Vdispatcher__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    Vdispatcher* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    Vdispatcher___024root          TOP;

    // CONSTRUCTORS
    Vdispatcher__Syms(VerilatedContext* contextp, const char* namep, Vdispatcher* modelp);
    ~Vdispatcher__Syms();

    // METHODS
    const char* name() const { return TOP.vlNamep; }
};

#endif  // guard
