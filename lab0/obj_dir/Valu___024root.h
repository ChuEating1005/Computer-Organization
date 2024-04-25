// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Valu.h for the primary calling header

#ifndef VERILATED_VALU___024ROOT_H_
#define VERILATED_VALU___024ROOT_H_  // guard

#include "verilated.h"

class Valu__Syms;

class Valu___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(a,3,0);
    VL_IN8(b,3,0);
    VL_IN8(s,2,0);
    VL_OUT8(y,3,0);
    CData/*0:0*/ alu__DOT__ADD__DOT____Vcellinp__fa1____pinNumber1;
    CData/*0:0*/ alu__DOT__ADD__DOT____Vcellinp__fa2____pinNumber1;
    CData/*0:0*/ alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1;
    CData/*0:0*/ alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1;
    CData/*0:0*/ alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1;
    CData/*0:0*/ alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VstlIterCount;
    IData/*31:0*/ __VicoIterCount;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Valu__Syms* const vlSymsp;

    // CONSTRUCTORS
    Valu___024root(Valu__Syms* symsp, const char* v__name);
    ~Valu___024root();
    VL_UNCOPYABLE(Valu___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);


#endif  // guard
