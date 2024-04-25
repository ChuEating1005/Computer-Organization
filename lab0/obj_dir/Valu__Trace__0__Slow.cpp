// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Valu__Syms.h"


VL_ATTR_COLD void Valu___024root__trace_init_sub__TOP__0(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+7,"a", false,-1, 3,0);
    tracep->declBus(c+8,"b", false,-1, 3,0);
    tracep->declBus(c+9,"s", false,-1, 2,0);
    tracep->declBus(c+10,"y", false,-1, 3,0);
    tracep->pushNamePrefix("alu ");
    tracep->declBus(c+7,"a", false,-1, 3,0);
    tracep->declBus(c+8,"b", false,-1, 3,0);
    tracep->declBus(c+9,"s", false,-1, 2,0);
    tracep->declBus(c+10,"y", false,-1, 3,0);
    tracep->declBus(c+11,"sumres", false,-1, 3,0);
    tracep->declBus(c+12,"subres", false,-1, 3,0);
    tracep->pushNamePrefix("ADD ");
    tracep->declBus(c+7,"a", false,-1, 3,0);
    tracep->declBus(c+8,"b", false,-1, 3,0);
    tracep->declBit(c+38,"cin", false,-1);
    tracep->declBus(c+11,"sum", false,-1, 3,0);
    tracep->declBus(c+13,"carry", false,-1, 3,0);
    tracep->declBus(c+8,"b_mod", false,-1, 3,0);
    tracep->pushNamePrefix("fa0 ");
    tracep->declBit(c+38,"cin", false,-1);
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+15,"b", false,-1);
    tracep->declBit(c+16,"s", false,-1);
    tracep->declBit(c+1,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa1 ");
    tracep->declBit(c+1,"cin", false,-1);
    tracep->declBit(c+17,"a", false,-1);
    tracep->declBit(c+18,"b", false,-1);
    tracep->declBit(c+19,"s", false,-1);
    tracep->declBit(c+2,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa2 ");
    tracep->declBit(c+2,"cin", false,-1);
    tracep->declBit(c+20,"a", false,-1);
    tracep->declBit(c+21,"b", false,-1);
    tracep->declBit(c+22,"s", false,-1);
    tracep->declBit(c+3,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa3 ");
    tracep->declBit(c+3,"cin", false,-1);
    tracep->declBit(c+23,"a", false,-1);
    tracep->declBit(c+24,"b", false,-1);
    tracep->declBit(c+25,"s", false,-1);
    tracep->declBit(c+26,"cout", false,-1);
    tracep->popNamePrefix(2);
    tracep->pushNamePrefix("SUB ");
    tracep->declBus(c+7,"a", false,-1, 3,0);
    tracep->declBus(c+8,"b", false,-1, 3,0);
    tracep->declBit(c+39,"cin", false,-1);
    tracep->declBus(c+12,"sum", false,-1, 3,0);
    tracep->declBus(c+27,"carry", false,-1, 3,0);
    tracep->declBus(c+28,"b_mod", false,-1, 3,0);
    tracep->pushNamePrefix("fa0 ");
    tracep->declBit(c+39,"cin", false,-1);
    tracep->declBit(c+14,"a", false,-1);
    tracep->declBit(c+29,"b", false,-1);
    tracep->declBit(c+30,"s", false,-1);
    tracep->declBit(c+4,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa1 ");
    tracep->declBit(c+4,"cin", false,-1);
    tracep->declBit(c+17,"a", false,-1);
    tracep->declBit(c+31,"b", false,-1);
    tracep->declBit(c+32,"s", false,-1);
    tracep->declBit(c+5,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa2 ");
    tracep->declBit(c+5,"cin", false,-1);
    tracep->declBit(c+20,"a", false,-1);
    tracep->declBit(c+33,"b", false,-1);
    tracep->declBit(c+34,"s", false,-1);
    tracep->declBit(c+6,"cout", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fa3 ");
    tracep->declBit(c+6,"cin", false,-1);
    tracep->declBit(c+23,"a", false,-1);
    tracep->declBit(c+35,"b", false,-1);
    tracep->declBit(c+36,"s", false,-1);
    tracep->declBit(c+37,"cout", false,-1);
    tracep->popNamePrefix(3);
}

VL_ATTR_COLD void Valu___024root__trace_init_top(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_init_top\n"); );
    // Body
    Valu___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Valu___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Valu___024root__trace_register(Valu___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Valu___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Valu___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Valu___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Valu___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_top_0\n"); );
    // Init
    Valu___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Valu___024root*>(voidSelf);
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Valu___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Valu___024root__trace_full_sub_0(Valu___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Valu__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Valu___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa1____pinNumber1));
    bufp->fullBit(oldp+2,(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa2____pinNumber1));
    bufp->fullBit(oldp+3,(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1));
    bufp->fullBit(oldp+4,(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1));
    bufp->fullBit(oldp+5,(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1));
    bufp->fullBit(oldp+6,(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1));
    bufp->fullCData(oldp+7,(vlSelf->a),4);
    bufp->fullCData(oldp+8,(vlSelf->b),4);
    bufp->fullCData(oldp+9,(vlSelf->s),3);
    bufp->fullCData(oldp+10,(vlSelf->y),4);
    bufp->fullCData(oldp+11,(((8U & ((0xfffffff8U & (IData)(vlSelf->a)) 
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
    bufp->fullCData(oldp+12,(((8U & ((0xfffffff8U & (IData)(vlSelf->a)) 
                                     ^ (((~ ((IData)(vlSelf->b) 
                                             >> 3U)) 
                                         ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1)) 
                                        << 3U))) | 
                              ((4U & ((0xfffffffcU 
                                       & (IData)(vlSelf->a)) 
                                      ^ (((~ ((IData)(vlSelf->b) 
                                              >> 2U)) 
                                          ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1)) 
                                         << 2U))) | 
                               ((2U & ((0xfffffffeU 
                                        & (IData)(vlSelf->a)) 
                                       ^ (((~ ((IData)(vlSelf->b) 
                                               >> 1U)) 
                                           ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1)) 
                                          << 1U))) 
                                | (1U & ((IData)(vlSelf->b) 
                                         ^ (IData)(vlSelf->a))))))),4);
    bufp->fullCData(oldp+13,(((8U & (((IData)(vlSelf->a) 
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
    bufp->fullBit(oldp+14,((1U & (IData)(vlSelf->a))));
    bufp->fullBit(oldp+15,((1U & (IData)(vlSelf->b))));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->a) 
                                  ^ (IData)(vlSelf->b)))));
    bufp->fullBit(oldp+17,((1U & ((IData)(vlSelf->a) 
                                  >> 1U))));
    bufp->fullBit(oldp+18,((1U & ((IData)(vlSelf->b) 
                                  >> 1U))));
    bufp->fullBit(oldp+19,((1U & (((IData)(vlSelf->a) 
                                   >> 1U) ^ (((IData)(vlSelf->b) 
                                              >> 1U) 
                                             ^ (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa1____pinNumber1))))));
    bufp->fullBit(oldp+20,((1U & ((IData)(vlSelf->a) 
                                  >> 2U))));
    bufp->fullBit(oldp+21,((1U & ((IData)(vlSelf->b) 
                                  >> 2U))));
    bufp->fullBit(oldp+22,((1U & (((IData)(vlSelf->a) 
                                   >> 2U) ^ (((IData)(vlSelf->b) 
                                              >> 2U) 
                                             ^ (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa2____pinNumber1))))));
    bufp->fullBit(oldp+23,((1U & ((IData)(vlSelf->a) 
                                  >> 3U))));
    bufp->fullBit(oldp+24,((1U & ((IData)(vlSelf->b) 
                                  >> 3U))));
    bufp->fullBit(oldp+25,((1U & (((IData)(vlSelf->a) 
                                   >> 3U) ^ (((IData)(vlSelf->b) 
                                              >> 3U) 
                                             ^ (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1))))));
    bufp->fullBit(oldp+26,((1U & ((((IData)(vlSelf->a) 
                                    >> 3U) & (((IData)(vlSelf->b) 
                                               >> 3U) 
                                              | (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1))) 
                                  | (((IData)(vlSelf->b) 
                                      >> 3U) & (IData)(vlSelf->alu__DOT__ADD__DOT____Vcellinp__fa3____pinNumber1))))));
    bufp->fullCData(oldp+27,(((8U & ((0xfffffff8U & 
                                      ((IData)(vlSelf->a) 
                                       & (((~ ((IData)(vlSelf->b) 
                                               >> 3U)) 
                                           | (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1)) 
                                          << 3U))) 
                                     | (((~ ((IData)(vlSelf->b) 
                                             >> 3U)) 
                                         & (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1)) 
                                        << 3U))) | 
                              (((IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1) 
                                << 2U) | (((IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1) 
                                           << 1U) | (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1))))),4);
    bufp->fullCData(oldp+28,((0xfU & (~ (IData)(vlSelf->b)))),4);
    bufp->fullBit(oldp+29,((1U & (~ (IData)(vlSelf->b)))));
    bufp->fullBit(oldp+30,((1U & ((IData)(vlSelf->b) 
                                  ^ (IData)(vlSelf->a)))));
    bufp->fullBit(oldp+31,((1U & (~ ((IData)(vlSelf->b) 
                                     >> 1U)))));
    bufp->fullBit(oldp+32,((1U & (((IData)(vlSelf->a) 
                                   >> 1U) ^ ((~ ((IData)(vlSelf->b) 
                                                 >> 1U)) 
                                             ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa1____pinNumber1))))));
    bufp->fullBit(oldp+33,((1U & (~ ((IData)(vlSelf->b) 
                                     >> 2U)))));
    bufp->fullBit(oldp+34,((1U & (((IData)(vlSelf->a) 
                                   >> 2U) ^ ((~ ((IData)(vlSelf->b) 
                                                 >> 2U)) 
                                             ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa2____pinNumber1))))));
    bufp->fullBit(oldp+35,((1U & (~ ((IData)(vlSelf->b) 
                                     >> 3U)))));
    bufp->fullBit(oldp+36,((1U & (((IData)(vlSelf->a) 
                                   >> 3U) ^ ((~ ((IData)(vlSelf->b) 
                                                 >> 3U)) 
                                             ^ (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1))))));
    bufp->fullBit(oldp+37,((1U & ((((IData)(vlSelf->a) 
                                    >> 3U) & ((~ ((IData)(vlSelf->b) 
                                                  >> 3U)) 
                                              | (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1))) 
                                  | ((~ ((IData)(vlSelf->b) 
                                         >> 3U)) & (IData)(vlSelf->alu__DOT__SUB__DOT____Vcellinp__fa3____pinNumber1))))));
    bufp->fullBit(oldp+38,(0U));
    bufp->fullBit(oldp+39,(1U));
}
