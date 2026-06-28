// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vfma__pch.h"

//============================================================
// Constructors

Vfma::Vfma(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vfma__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vfma::Vfma(const char* _vcname__)
    : Vfma(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vfma::~Vfma() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vfma___024root___eval_debug_assertions(Vfma___024root* vlSelf);
#endif  // VL_DEBUG
void Vfma___024root___eval_static(Vfma___024root* vlSelf);
void Vfma___024root___eval_initial(Vfma___024root* vlSelf);
void Vfma___024root___eval_settle(Vfma___024root* vlSelf);
void Vfma___024root___eval(Vfma___024root* vlSelf);

void Vfma::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vfma::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vfma___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vfma___024root___eval_static(&(vlSymsp->TOP));
        Vfma___024root___eval_initial(&(vlSymsp->TOP));
        Vfma___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vfma___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vfma::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vfma::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vfma::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vfma___024root___eval_final(Vfma___024root* vlSelf);

VL_ATTR_COLD void Vfma::final() {
    contextp()->executingFinal(true);
    Vfma___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vfma::hierName() const { return vlSymsp->name(); }
const char* Vfma::modelName() const { return "Vfma"; }
unsigned Vfma::threads() const { return 1; }
void Vfma::prepareClone() const { contextp()->prepareClone(); }
void Vfma::atClone() const {
    contextp()->threadPoolpOnClone();
}
