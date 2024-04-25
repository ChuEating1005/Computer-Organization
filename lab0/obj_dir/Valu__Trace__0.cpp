// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Valu___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Valu___024root__trace_chg_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa1____pinNumber1));
        bufp->chgBit(oldp+1,(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa2____pinNumber1));
        bufp->chgBit(oldp+2,(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1));
        bufp->chgBit(oldp+3,(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1));
        bufp->chgBit(oldp+4,(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1));
        bufp->chgBit(oldp+5,(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1));
    }
    bufp->chgCData(oldp+6,(vlSelf->a),4);
    bufp->chgCData(oldp+7,(vlSelf->b),4);
    bufp->chgCData(oldp+8,(vlSelf->s),3);
    bufp->chgCData(oldp+9,(vlSelf->y),4);
    bufp->chgCData(oldp+10,(((8U & ((0xfffffff8U & (IData)(vlSelf->a)) 
                                    ^ ((0xfffffff8U 
                                        & (IData)(vlSelf->b)) 
                                       ^ ((IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1) 
                                          << 3U)))) 
                             | ((4U & ((0xfffffffcU 
                                        & (IData)(vlSelf->a)) 
                                       ^ ((0xfffffffcU 
                                           & (IData)(vlSelf->b)) 
                                          ^ ((IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa2____pinNumber1) 
                                             << 2U)))) 
                                | ((2U & ((0xfffffffeU 
                                           & (IData)(vlSelf->a)) 
                                          ^ ((0xfffffffeU 
                                              & (IData)(vlSelf->b)) 
                                             ^ ((IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa1____pinNumber1) 
                                                << 1U)))) 
                                   | (1U & ((IData)(vlSelf->a) 
                                            ^ (IData)(vlSelf->b))))))),4);
    bufp->chgCData(oldp+11,(((8U & ((0xfffffff8U & (IData)(vlSelf->a)) 
                                    ^ (((~ ((IData)(vlSelf->b) 
                                            >> 3U)) 
                                        ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1)) 
                                       << 3U))) | (
                                                   (4U 
                                                    & ((0xfffffffcU 
                                                        & (IData)(vlSelf->a)) 
                                                       ^ 
                                                       (((~ 
                                                          ((IData)(vlSelf->b) 
                                                           >> 2U)) 
                                                         ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1)) 
                                                        << 2U))) 
                                                   | ((2U 
                                                       & ((0xfffffffeU 
                                                           & (IData)(vlSelf->a)) 
                                                          ^ 
                                                          (((~ 
                                                             ((IData)(vlSelf->b) 
                                                              >> 1U)) 
                                                            ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1)) 
                                                           << 1U))) 
                                                      | (1U 
                                                         & ((IData)(vlSelf->b) 
                                                            ^ (IData)(vlSelf->a))))))),4);
    bufp->chgCData(oldp+12,(((8U & (((IData)(vlSelf->a) 
                                     & ((0xfffffff8U 
                                         & (IData)(vlSelf->b)) 
                                        | ((IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1) 
                                           << 3U))) 
                                    | ((IData)(vlSelf->b) 
                                       & ((IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1) 
                                          << 3U)))) 
                             | (((IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1) 
                                 << 2U) | (((IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa2____pinNumber1) 
                                            << 1U) 
                                           | (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa1____pinNumber1))))),4);
    bufp->chgBit(oldp+13,((1U & (IData)(vlSelf->a))));
    bufp->chgBit(oldp+14,((1U & (IData)(vlSelf->b))));
    bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->a) 
                                 ^ (IData)(vlSelf->b)))));
    bufp->chgBit(oldp+16,((1U & ((IData)(vlSelf->a) 
                                 >> 1U))));
    bufp->chgBit(oldp+17,((1U & ((IData)(vlSelf->b) 
                                 >> 1U))));
    bufp->chgBit(oldp+18,((1U & (((IData)(vlSelf->a) 
                                  >> 1U) ^ (((IData)(vlSelf->b) 
                                             >> 1U) 
                                            ^ (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa1____pinNumber1))))));
    bufp->chgBit(oldp+19,((1U & ((IData)(vlSelf->a) 
                                 >> 2U))));
    bufp->chgBit(oldp+20,((1U & ((IData)(vlSelf->b) 
                                 >> 2U))));
    bufp->chgBit(oldp+21,((1U & (((IData)(vlSelf->a) 
                                  >> 2U) ^ (((IData)(vlSelf->b) 
                                             >> 2U) 
                                            ^ (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa2____pinNumber1))))));
    bufp->chgBit(oldp+22,((1U & ((IData)(vlSelf->a) 
                                 >> 3U))));
    bufp->chgBit(oldp+23,((1U & ((IData)(vlSelf->b) 
                                 >> 3U))));
    bufp->chgBit(oldp+24,((1U & (((IData)(vlSelf->a) 
                                  >> 3U) ^ (((IData)(vlSelf->b) 
                                             >> 3U) 
                                            ^ (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1))))));
    bufp->chgBit(oldp+25,((1U & ((((IData)(vlSelf->a) 
                                   >> 3U) & (((IData)(vlSelf->b) 
                                              >> 3U) 
                                             | (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1))) 
                                 | (((IData)(vlSelf->b) 
                                     >> 3U) & (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1))))));
    bufp->chgCData(oldp+26,(((8U & ((0xfffffff8U & 
                                     ((IData)(vlSelf->a) 
                                      & (((~ ((IData)(vlSelf->b) 
                                              >> 3U)) 
                                          | (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1)) 
                                         << 3U))) | 
                                    (((~ ((IData)(vlSelf->b) 
                                          >> 3U)) & (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1)) 
                                     << 3U))) | (((IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1) 
                                                  << 2U) 
                                                 | (((IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1) 
                                                     << 1U) 
                                                    | (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1))))),4);
    bufp->chgCData(oldp+27,((0xfU & (~ (IData)(vlSelf->b)))),4);
    bufp->chgBit(oldp+28,((1U & (~ (IData)(vlSelf->b)))));
    bufp->chgBit(oldp+29,((1U & ((IData)(vlSelf->b) 
                                 ^ (IData)(vlSelf->a)))));
    bufp->chgBit(oldp+30,((1U & (~ ((IData)(vlSelf->b) 
                                    >> 1U)))));
    bufp->chgBit(oldp+31,((1U & (((IData)(vlSelf->a) 
                                  >> 1U) ^ ((~ ((IData)(vlSelf->b) 
                                                >> 1U)) 
                                            ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1))))));
    bufp->chgBit(oldp+32,((1U & (~ ((IData)(vlSelf->b) 
                                    >> 2U)))));
    bufp->chgBit(oldp+33,((1U & (((IData)(vlSelf->a) 
                                  >> 2U) ^ ((~ ((IData)(vlSelf->b) 
                                                >> 2U)) 
                                            ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1))))));
    bufp->chgBit(oldp+34,((1U & (~ ((IData)(vlSelf->b) 
                                    >> 3U)))));
    bufp->chgBit(oldp+35,((1U & (((IData)(vlSelf->a) 
                                  >> 3U) ^ ((~ ((IData)(vlSelf->b) 
                                                >> 3U)) 
                                            ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1))))));
    bufp->chgBit(oldp+36,((1U & ((((IData)(vlSelf->a) 
                                   >> 3U) & ((~ ((IData)(vlSelf->b) 
                                                 >> 3U)) 
                                             | (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1))) 
                                 | ((~ ((IData)(vlSelf->b) 
                                        >> 3U)) & (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1))))));
}

void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_cleanup\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
}
