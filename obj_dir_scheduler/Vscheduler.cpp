// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vscheduler__pch.h"

//============================================================
// Constructors

Vscheduler::Vscheduler(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vscheduler__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vscheduler::Vscheduler(const char* _vcname__)
    : Vscheduler(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vscheduler::~Vscheduler() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vscheduler___024root___eval_debug_assertions(Vscheduler___024root* vlSelf);
#endif  // VL_DEBUG
void Vscheduler___024root___eval_static(Vscheduler___024root* vlSelf);
void Vscheduler___024root___eval_initial(Vscheduler___024root* vlSelf);
void Vscheduler___024root___eval_settle(Vscheduler___024root* vlSelf);
void Vscheduler___024root___eval(Vscheduler___024root* vlSelf);

void Vscheduler::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vscheduler::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vscheduler___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vscheduler___024root___eval_static(&(vlSymsp->TOP));
        Vscheduler___024root___eval_initial(&(vlSymsp->TOP));
        Vscheduler___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vscheduler___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vscheduler::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vscheduler::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vscheduler::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vscheduler___024root___eval_final(Vscheduler___024root* vlSelf);

VL_ATTR_COLD void Vscheduler::final() {
    contextp()->executingFinal(true);
    Vscheduler___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vscheduler::hierName() const { return vlSymsp->name(); }
const char* Vscheduler::modelName() const { return "Vscheduler"; }
unsigned Vscheduler::threads() const { return 1; }
void Vscheduler::prepareClone() const { contextp()->prepareClone(); }
void Vscheduler::atClone() const {
    contextp()->threadPoolpOnClone();
}
