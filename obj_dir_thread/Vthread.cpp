// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vthread__pch.h"

//============================================================
// Constructors

Vthread::Vthread(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vthread__Syms(contextp(), _vcname__, this)}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vthread::Vthread(const char* _vcname__)
    : Vthread(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vthread::~Vthread() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vthread___024root___eval_debug_assertions(Vthread___024root* vlSelf);
#endif  // VL_DEBUG
void Vthread___024root___eval_static(Vthread___024root* vlSelf);
void Vthread___024root___eval_initial(Vthread___024root* vlSelf);
void Vthread___024root___eval_settle(Vthread___024root* vlSelf);
void Vthread___024root___eval(Vthread___024root* vlSelf);

void Vthread::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vthread::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vthread___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vthread___024root___eval_static(&(vlSymsp->TOP));
        Vthread___024root___eval_initial(&(vlSymsp->TOP));
        Vthread___024root___eval_settle(&(vlSymsp->TOP));
        vlSymsp->__Vm_didInit = true;
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vthread___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vthread::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vthread::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vthread::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vthread___024root___eval_final(Vthread___024root* vlSelf);

VL_ATTR_COLD void Vthread::final() {
    contextp()->executingFinal(true);
    Vthread___024root___eval_final(&(vlSymsp->TOP));
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vthread::hierName() const { return vlSymsp->name(); }
const char* Vthread::modelName() const { return "Vthread"; }
unsigned Vthread::threads() const { return 1; }
void Vthread::prepareClone() const { contextp()->prepareClone(); }
void Vthread::atClone() const {
    contextp()->threadPoolpOnClone();
}
