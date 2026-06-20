// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vdispatcher__pch.h"

//============================================================
// Constructors

Vdispatcher::Vdispatcher(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vdispatcher__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vdispatcher::Vdispatcher(const char* _vcname__)
    : Vdispatcher(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vdispatcher::~Vdispatcher() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vdispatcher___024root___eval_debug_assertions(Vdispatcher___024root* vlSelf);
#endif  // VL_DEBUG
void Vdispatcher___024root___eval_static(Vdispatcher___024root* vlSelf);
void Vdispatcher___024root___eval_initial(Vdispatcher___024root* vlSelf);
void Vdispatcher___024root___eval_settle(Vdispatcher___024root* vlSelf);
void Vdispatcher___024root___eval(Vdispatcher___024root* vlSelf);

void Vdispatcher::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vdispatcher::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vdispatcher___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vdispatcher___024root___eval_static(&(vlSymsp->TOP));
        Vdispatcher___024root___eval_initial(&(vlSymsp->TOP));
        Vdispatcher___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vdispatcher___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vdispatcher::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vdispatcher::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vdispatcher::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vdispatcher___024root___eval_final(Vdispatcher___024root* vlSelf);

VL_ATTR_COLD void Vdispatcher::final() {
    contextp()->executingFinal(true);
    Vdispatcher___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vdispatcher::hierName() const { return vlSymsp->name(); }
const char* Vdispatcher::modelName() const { return "Vdispatcher"; }
unsigned Vdispatcher::threads() const { return 1; }
void Vdispatcher::prepareClone() const { contextp()->prepareClone(); }
void Vdispatcher::atClone() const {
    contextp()->threadPoolpOnClone();
}
