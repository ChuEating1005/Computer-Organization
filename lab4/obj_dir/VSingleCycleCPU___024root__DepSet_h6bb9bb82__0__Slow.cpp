// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "VSingleCycleCPU__pch.h"
#include "VSingleCycleCPU___024root.h"

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_static(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_static\n"); );
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial\n"); );
    // Body
    VSingleCycleCPU___024root___eval_initial__TOP(vlSelf);
    vlSelf->__Vm_traceActivity[3U] = 1U;
    vlSelf->__Vm_traceActivity[2U] = 1U;
    vlSelf->__Vm_traceActivity[1U] = 1U;
    vlSelf->__Vm_traceActivity[0U] = 1U;
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__start__0 = vlSelf->start;
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__ALUOut_MEM__0 
        = vlSelf->SingleCycleCPU__DOT__ALUOut_MEM;
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__memRead_MEM__0 
        = vlSelf->SingleCycleCPU__DOT__memRead_MEM;
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_initial__TOP(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_initial__TOP\n"); );
    // Init
    VlWide<6>/*191:0*/ __Vtemp_1;
    // Body
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[1U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[2U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[3U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[4U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[5U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[6U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[7U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[8U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[9U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xaU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xbU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xcU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xdU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xeU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0xfU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x10U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x11U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x12U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x13U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x14U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x15U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x16U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x17U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x18U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x19U] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1aU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1bU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1cU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1dU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1eU] = 0U;
    vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[0x1fU] = 0U;
    __Vtemp_1[0U] = 0x2e747874U;
    __Vtemp_1[1U] = 0x494f4e53U;
    __Vtemp_1[2U] = 0x52554354U;
    __Vtemp_1[3U] = 0x494e5354U;
    __Vtemp_1[4U] = 0x4553545fU;
    __Vtemp_1[5U] = 0x54U;
    VL_READMEM_N(false, 8, 128, 0, VL_CVT_PACK_STR_NW(6, __Vtemp_1)
                 ,  &(vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts)
                 , 0, ~0ULL);
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_final(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_final\n"); );
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_settle(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_settle\n"); );
    // Init
    IData/*31:0*/ __VstlIterCount;
    CData/*0:0*/ __VstlContinue;
    // Body
    __VstlIterCount = 0U;
    vlSelf->__VstlFirstIteration = 1U;
    __VstlContinue = 1U;
    while (__VstlContinue) {
        if (VL_UNLIKELY((0x64U < __VstlIterCount))) {
#ifdef VL_DEBUG
            VSingleCycleCPU___024root___dump_triggers__stl(vlSelf);
#endif
            VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Settle region did not converge.");
        }
        __VstlIterCount = ((IData)(1U) + __VstlIterCount);
        __VstlContinue = 0U;
        if (VSingleCycleCPU___024root___eval_phase__stl(vlSelf)) {
            __VstlContinue = 1U;
        }
        vlSelf->__VstlFirstIteration = 0U;
    }
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__stl\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VstlTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VL_DBG_MSGF("         'stl' region trigger index 0 is active: Internal 'stl' trigger - first iteration\n");
    }
}
#endif  // VL_DEBUG

extern const VlUnpacked<SData/*8:0*/, 256> VSingleCycleCPU__ConstPool__TABLE_h8e7b4d50_0;
extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h47ea67c0_0;

VL_ATTR_COLD void VSingleCycleCPU___024root___stl_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___stl_sequent__TOP__0\n"); );
    // Init
    CData/*7:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    // Body
    vlSelf->SingleCycleCPU__DOT__imm_ID = ((0x40U & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                            ? ((0x20U 
                                                & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                     ? 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                     >> 0x1fU))) 
                                                         << 0x14U) 
                                                        | ((0xff000U 
                                                            & vlSelf->SingleCycleCPU__DOT__inst_ID) 
                                                           | ((0x800U 
                                                               & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                  >> 9U)) 
                                                              | (0x7feU 
                                                                 & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                    >> 0x14U)))))
                                                        : 0U)
                                                       : 0U)
                                                      : 0U)
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                      ? 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                     >> 0x1fU))) 
                                                         << 0xdU) 
                                                        | ((0x1000U 
                                                            & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                               >> 0x13U)) 
                                                           | ((0x800U 
                                                               & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                  << 4U)) 
                                                              | ((0x7e0U 
                                                                  & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                     >> 0x14U)) 
                                                                 | (0x1eU 
                                                                    & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                       >> 7U))))))
                                                        : 0U)
                                                       : 0U))))
                                                : 0U)
                                            : ((0x20U 
                                                & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                ? (
                                                   (0x10U 
                                                    & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                    ? 0U
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | ((0xfe0U 
                                                            & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                               >> 0x14U)) 
                                                           | (0x1fU 
                                                              & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                 >> 7U))))
                                                        : 0U)
                                                       : 0U))))
                                                : (
                                                   (0x10U 
                                                    & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                    ? 
                                                   ((8U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U)))
                                                    : 
                                                   ((8U 
                                                     & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                     ? 0U
                                                     : 
                                                    ((4U 
                                                      & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                      ? 0U
                                                      : 
                                                     ((2U 
                                                       & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                       ? 
                                                      ((1U 
                                                        & vlSelf->SingleCycleCPU__DOT__inst_ID)
                                                        ? 
                                                       (((- (IData)(
                                                                    (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                                     >> 0x1fU))) 
                                                         << 0xcU) 
                                                        | (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                           >> 0x14U))
                                                        : 0U)
                                                       : 0U))))));
    vlSelf->SingleCycleCPU__DOT__stall_ID = (((IData)(vlSelf->SingleCycleCPU__DOT__memRead_EX) 
                                              & (0U 
                                                 != (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_EX))) 
                                             & (((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_EX) 
                                                 == 
                                                 (0x1fU 
                                                  & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                     >> 0xfU))) 
                                                | ((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_EX) 
                                                   == 
                                                   (0x1fU 
                                                    & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                       >> 0x14U)))));
    __Vtableidx1 = ((0xfeU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                              << 1U)) | (((IData)(vlSelf->SingleCycleCPU__DOT__memRead_EX) 
                                          & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_EX))) 
                                         & (((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_EX) 
                                             == (0x1fU 
                                                 & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                    >> 0xfU))) 
                                            | ((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_EX) 
                                               == (0x1fU 
                                                   & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                      >> 0x14U))))));
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl 
        = VSingleCycleCPU__ConstPool__TABLE_h8e7b4d50_0
        [__Vtableidx1];
    __Vtableidx2 = (((IData)(vlSelf->SingleCycleCPU__DOT__funct3) 
                     << 3U) | (((IData)(vlSelf->SingleCycleCPU__DOT__funct7) 
                                << 2U) | (IData)(vlSelf->SingleCycleCPU__DOT__ALUOp_EX)));
    vlSelf->SingleCycleCPU__DOT__ALUCtl = VSingleCycleCPU__ConstPool__TABLE_h47ea67c0_0
        [__Vtableidx2];
    vlSelf->r[0U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0U];
    vlSelf->r[1U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [1U];
    vlSelf->r[2U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [2U];
    vlSelf->r[3U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [3U];
    vlSelf->r[4U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [4U];
    vlSelf->r[5U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [5U];
    vlSelf->r[6U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [6U];
    vlSelf->r[7U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [7U];
    vlSelf->r[8U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [8U];
    vlSelf->r[9U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [9U];
    vlSelf->r[0xaU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xaU];
    vlSelf->r[0xbU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xbU];
    vlSelf->r[0xcU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xcU];
    vlSelf->r[0xdU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xdU];
    vlSelf->r[0xeU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xeU];
    vlSelf->r[0xfU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0xfU];
    vlSelf->r[0x10U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x10U];
    vlSelf->r[0x11U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x11U];
    vlSelf->r[0x12U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x12U];
    vlSelf->r[0x13U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x13U];
    vlSelf->r[0x14U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x14U];
    vlSelf->r[0x15U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x15U];
    vlSelf->r[0x16U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x16U];
    vlSelf->r[0x17U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x17U];
    vlSelf->r[0x18U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x18U];
    vlSelf->r[0x19U] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x19U];
    vlSelf->r[0x1aU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1aU];
    vlSelf->r[0x1bU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1bU];
    vlSelf->r[0x1cU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1cU];
    vlSelf->r[0x1dU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1dU];
    vlSelf->r[0x1eU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1eU];
    vlSelf->r[0x1fU] = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
        [0x1fU];
    vlSelf->SingleCycleCPU__DOT__ForwardA = 0U;
    if ((((IData)(vlSelf->SingleCycleCPU__DOT__regWrite_MEM) 
          & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_MEM))) 
         & ((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_MEM) 
            == (IData)(vlSelf->SingleCycleCPU__DOT__rs1Addr_EX)))) {
        vlSelf->SingleCycleCPU__DOT__ForwardA = 2U;
    }
    if (((((IData)(vlSelf->SingleCycleCPU__DOT__regWrite_WB) 
           & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_WB))) 
          & (2U != (IData)(vlSelf->SingleCycleCPU__DOT__ForwardA))) 
         & ((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_WB) 
            == (IData)(vlSelf->SingleCycleCPU__DOT__rs1Addr_EX)))) {
        vlSelf->SingleCycleCPU__DOT__ForwardA = 1U;
    }
    vlSelf->SingleCycleCPU__DOT__ForwardB = 0U;
    if ((((IData)(vlSelf->SingleCycleCPU__DOT__regWrite_MEM) 
          & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_MEM))) 
         & ((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_MEM) 
            == (IData)(vlSelf->SingleCycleCPU__DOT__rs2Addr_EX)))) {
        vlSelf->SingleCycleCPU__DOT__ForwardB = 2U;
    }
    if (((((IData)(vlSelf->SingleCycleCPU__DOT__regWrite_WB) 
           & (0U != (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_WB))) 
          & (2U != (IData)(vlSelf->SingleCycleCPU__DOT__ForwardB))) 
         & ((IData)(vlSelf->SingleCycleCPU__DOT__writeReg_WB) 
            == (IData)(vlSelf->SingleCycleCPU__DOT__rs2Addr_EX)))) {
        vlSelf->SingleCycleCPU__DOT__ForwardB = 1U;
    }
    vlSelf->SingleCycleCPU__DOT__writeData = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_WB))
                                               ? vlSelf->SingleCycleCPU__DOT__readData_WB
                                               : ((1U 
                                                   == (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_WB))
                                                   ? vlSelf->SingleCycleCPU__DOT__ALUOut_WB
                                                   : 
                                                  ((IData)(4U) 
                                                   + vlSelf->SingleCycleCPU__DOT__PC_WB)));
    vlSelf->SingleCycleCPU__DOT__MuxForwardA_out = 
        ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__ForwardA))
          ? vlSelf->SingleCycleCPU__DOT__rs1_EX : (
                                                   (1U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__ForwardA))
                                                    ? vlSelf->SingleCycleCPU__DOT__writeData
                                                    : vlSelf->SingleCycleCPU__DOT__ALUOut_MEM));
    vlSelf->SingleCycleCPU__DOT__MuxForwardB_out = 
        ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__ForwardB))
          ? vlSelf->SingleCycleCPU__DOT__rs2_EX : (
                                                   (1U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__ForwardB))
                                                    ? vlSelf->SingleCycleCPU__DOT__writeData
                                                    : vlSelf->SingleCycleCPU__DOT__ALUOut_MEM));
    vlSelf->SingleCycleCPU__DOT__MuxSelA_out = ((IData)(vlSelf->SingleCycleCPU__DOT__SelA_EX)
                                                 ? vlSelf->SingleCycleCPU__DOT__PC_EX
                                                 : vlSelf->SingleCycleCPU__DOT__MuxForwardA_out);
    vlSelf->SingleCycleCPU__DOT__MuxSelB_out = ((IData)(vlSelf->SingleCycleCPU__DOT__SelB_EX)
                                                 ? vlSelf->SingleCycleCPU__DOT__imm_EX
                                                 : vlSelf->SingleCycleCPU__DOT__MuxForwardB_out);
    vlSelf->SingleCycleCPU__DOT__BrEq = (vlSelf->SingleCycleCPU__DOT__MuxForwardA_out 
                                         == vlSelf->SingleCycleCPU__DOT__MuxForwardB_out);
    vlSelf->SingleCycleCPU__DOT__BrLt = (vlSelf->SingleCycleCPU__DOT__MuxForwardA_out 
                                         < vlSelf->SingleCycleCPU__DOT__MuxForwardB_out);
    vlSelf->SingleCycleCPU__DOT__ALUOut_EX = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                               ? (vlSelf->SingleCycleCPU__DOT__MuxSelA_out 
                                                  & vlSelf->SingleCycleCPU__DOT__MuxSelB_out)
                                               : ((1U 
                                                   == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                   ? 
                                                  (vlSelf->SingleCycleCPU__DOT__MuxSelA_out 
                                                   | vlSelf->SingleCycleCPU__DOT__MuxSelB_out)
                                                   : 
                                                  ((2U 
                                                    == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                    ? 
                                                   (vlSelf->SingleCycleCPU__DOT__MuxSelA_out 
                                                    + vlSelf->SingleCycleCPU__DOT__MuxSelB_out)
                                                    : 
                                                   ((6U 
                                                     == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                     ? 
                                                    (vlSelf->SingleCycleCPU__DOT__MuxSelA_out 
                                                     - vlSelf->SingleCycleCPU__DOT__MuxSelB_out)
                                                     : 
                                                    ((7U 
                                                      == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                      ? 
                                                     (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__MuxSelA_out, vlSelf->SingleCycleCPU__DOT__MuxSelB_out)
                                                       ? 1U
                                                       : 0U)
                                                      : 0U)))));
    vlSelf->SingleCycleCPU__DOT__PCsel = ((0x6fU == (IData)(vlSelf->SingleCycleCPU__DOT__opcode_EX)) 
                                          || ((0x67U 
                                               == (IData)(vlSelf->SingleCycleCPU__DOT__opcode_EX)) 
                                              || ((0x63U 
                                                   == (IData)(vlSelf->SingleCycleCPU__DOT__opcode_EX)) 
                                                  && ((4U 
                                                       & (IData)(vlSelf->SingleCycleCPU__DOT__funct3))
                                                       ? 
                                                      ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->SingleCycleCPU__DOT__funct3) 
                                                            >> 1U))) 
                                                       && (1U 
                                                           & ((1U 
                                                               & (IData)(vlSelf->SingleCycleCPU__DOT__funct3))
                                                               ? 
                                                              (~ (IData)(vlSelf->SingleCycleCPU__DOT__BrLt))
                                                               : (IData)(vlSelf->SingleCycleCPU__DOT__BrLt))))
                                                       : 
                                                      ((1U 
                                                        & (~ 
                                                           ((IData)(vlSelf->SingleCycleCPU__DOT__funct3) 
                                                            >> 1U))) 
                                                       && (1U 
                                                           & ((1U 
                                                               & (IData)(vlSelf->SingleCycleCPU__DOT__funct3))
                                                               ? 
                                                              (~ (IData)(vlSelf->SingleCycleCPU__DOT__BrEq))
                                                               : (IData)(vlSelf->SingleCycleCPU__DOT__BrEq))))))));
    vlSelf->SingleCycleCPU__DOT__Mux_PC_out = ((IData)(vlSelf->SingleCycleCPU__DOT__PCsel)
                                                ? vlSelf->SingleCycleCPU__DOT__ALUOut_EX
                                                : ((IData)(4U) 
                                                   + vlSelf->SingleCycleCPU__DOT__PC_IF));
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VSingleCycleCPU___024root___stl_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
    }
}

VL_ATTR_COLD void VSingleCycleCPU___024root___eval_triggers__stl(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD bool VSingleCycleCPU___024root___eval_phase__stl(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_phase__stl\n"); );
    // Init
    CData/*0:0*/ __VstlExecute;
    // Body
    VSingleCycleCPU___024root___eval_triggers__stl(vlSelf);
    __VstlExecute = vlSelf->__VstlTriggered.any();
    if (__VstlExecute) {
        VSingleCycleCPU___024root___eval_stl(vlSelf);
    }
    return (__VstlExecute);
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__act\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VactTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if ((2ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if ((4ULL & vlSelf->__VactTriggered.word(0U))) {
        VL_DBG_MSGF("         'act' region trigger index 2 is active: @([changed] SingleCycleCPU.ALUOut_MEM or [changed] SingleCycleCPU.memRead_MEM)\n");
    }
}
#endif  // VL_DEBUG

#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___dump_triggers__nba\n"); );
    // Body
    if ((1U & (~ (IData)(vlSelf->__VnbaTriggered.any())))) {
        VL_DBG_MSGF("         No triggers active\n");
    }
    if ((1ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 0 is active: @(posedge clk or negedge start)\n");
    }
    if ((2ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 1 is active: @(negedge clk or negedge start)\n");
    }
    if ((4ULL & vlSelf->__VnbaTriggered.word(0U))) {
        VL_DBG_MSGF("         'nba' region trigger index 2 is active: @([changed] SingleCycleCPU.ALUOut_MEM or [changed] SingleCycleCPU.memRead_MEM)\n");
    }
}
#endif  // VL_DEBUG

VL_ATTR_COLD void VSingleCycleCPU___024root___ctor_var_reset(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->start = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->r[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->SingleCycleCPU__DOT__Mux_PC_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__PC_IF = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__stall_ID = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__PC_ID = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__inst_ID = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__imm_ID = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__memRead_EX = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__memWrite_EX = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__regWrite_EX = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__SelA_EX = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__SelB_EX = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__funct7 = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__BrEq = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__BrLt = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__PCsel = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__memtoReg_EX = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleCPU__DOT__ALUOp_EX = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleCPU__DOT__ForwardA = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleCPU__DOT__ForwardB = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleCPU__DOT__funct3 = VL_RAND_RESET_I(3);
    vlSelf->SingleCycleCPU__DOT__ALUCtl = VL_RAND_RESET_I(4);
    vlSelf->SingleCycleCPU__DOT__writeReg_EX = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleCPU__DOT__rs1Addr_EX = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleCPU__DOT__rs2Addr_EX = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleCPU__DOT__opcode_EX = VL_RAND_RESET_I(7);
    vlSelf->SingleCycleCPU__DOT__rs1_EX = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__rs2_EX = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__PC_EX = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__imm_EX = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__MuxForwardA_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__MuxForwardB_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__MuxSelA_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__MuxSelB_out = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__ALUOut_EX = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__memRead_MEM = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__memWrite_MEM = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__regWrite_MEM = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__memtoReg_MEM = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleCPU__DOT__writeReg_MEM = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleCPU__DOT__rs2_MEM = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__PC_MEM = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__ALUOut_MEM = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__readData_MEM = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__regWrite_WB = VL_RAND_RESET_I(1);
    vlSelf->SingleCycleCPU__DOT__memtoReg_WB = VL_RAND_RESET_I(2);
    vlSelf->SingleCycleCPU__DOT__writeReg_WB = VL_RAND_RESET_I(5);
    vlSelf->SingleCycleCPU__DOT__ALUOut_WB = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__readData_WB = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__PC_WB = VL_RAND_RESET_I(32);
    vlSelf->SingleCycleCPU__DOT__writeData = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl = VL_RAND_RESET_I(9);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vi0] = VL_RAND_RESET_I(32);
    }
    for (int __Vi0 = 0; __Vi0 < 128; ++__Vi0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vi0] = VL_RAND_RESET_I(8);
    }
    vlSelf->__Vdly__SingleCycleCPU__DOT__memRead_MEM = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_MEM = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0;
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = 0;
    vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 = VL_RAND_RESET_I(8);
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0;
    vlSelf->__Vdly__SingleCycleCPU__DOT__regWrite_WB = VL_RAND_RESET_I(1);
    vlSelf->__Vdly__SingleCycleCPU__DOT__writeReg_WB = VL_RAND_RESET_I(5);
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__start__0 = VL_RAND_RESET_I(1);
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__ALUOut_MEM__0 = VL_RAND_RESET_I(32);
    vlSelf->__Vtrigprevexpr___TOP__SingleCycleCPU__DOT__memRead_MEM__0 = VL_RAND_RESET_I(1);
    vlSelf->__VactDidInit = 0;
    for (int __Vi0 = 0; __Vi0 < 4; ++__Vi0) {
        vlSelf->__Vm_traceActivity[__Vi0] = 0;
    }
}
