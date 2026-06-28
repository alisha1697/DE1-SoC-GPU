// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vgpu_top__pch.h"

//============================================================
// Constructors

Vgpu_top::Vgpu_top(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vgpu_top__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vgpu_top::Vgpu_top(const char* _vcname__)
    : Vgpu_top(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vgpu_top::~Vgpu_top() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vgpu_top___024root___eval_debug_assertions(Vgpu_top___024root* vlSelf);
#endif  // VL_DEBUG
void Vgpu_top___024root___eval_static(Vgpu_top___024root* vlSelf);
void Vgpu_top___024root___eval_initial(Vgpu_top___024root* vlSelf);
void Vgpu_top___024root___eval_settle(Vgpu_top___024root* vlSelf);
void Vgpu_top___024root___eval(Vgpu_top___024root* vlSelf);

void Vgpu_top::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vgpu_top::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vgpu_top___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vgpu_top___024root___eval_static(&(vlSymsp->TOP));
        Vgpu_top___024root___eval_initial(&(vlSymsp->TOP));
        Vgpu_top___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vgpu_top___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vgpu_top::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vgpu_top::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vgpu_top::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vgpu_top___024root___eval_final(Vgpu_top___024root* vlSelf);

VL_ATTR_COLD void Vgpu_top::final() {
    contextp()->executingFinal(true);
    Vgpu_top___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vgpu_top::hierName() const { return vlSymsp->name(); }
const char* Vgpu_top::modelName() const { return "Vgpu_top"; }
unsigned Vgpu_top::threads() const { return 1; }
void Vgpu_top::prepareClone() const { contextp()->prepareClone(); }
void Vgpu_top::atClone() const {
    contextp()->threadPoolpOnClone();
}
