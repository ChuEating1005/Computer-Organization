// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VSingleCycleCPU.h for the primary calling header

#include "verilated.h"

#include "VSingleCycleCPU___024root.h"

void VSingleCycleCPU___024root___eval_act(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_act\n"); );
}

extern const VlUnpacked<CData/*3:0*/, 64> VSingleCycleCPU__ConstPool__TABLE_h2fc2a4f8_0;
extern const VlUnpacked<CData/*6:0*/, 128> VSingleCycleCPU__ConstPool__TABLE_h7b9913bd_0;

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__0(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__0\n"); );
    // Init
    CData/*6:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*5:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    IData/*31:0*/ __Vdly__SingleCycleCPU__DOT__inst_ID;
    __Vdly__SingleCycleCPU__DOT__inst_ID = 0;
    CData/*0:0*/ __Vdly__SingleCycleCPU__DOT__memWrite_MEM;
    __Vdly__SingleCycleCPU__DOT__memWrite_MEM = 0;
    IData/*31:0*/ __Vdly__SingleCycleCPU__DOT__rs2_MEM;
    __Vdly__SingleCycleCPU__DOT__rs2_MEM = 0;
    // Body
    vlSelf->__Vdly__SingleCycleCPU__DOT__writeReg_WB 
        = vlSelf->SingleCycleCPU__DOT__writeReg_WB;
    vlSelf->__Vdly__SingleCycleCPU__DOT__regWrite_WB 
        = vlSelf->SingleCycleCPU__DOT__regWrite_WB;
    vlSelf->__Vdly__SingleCycleCPU__DOT__memtoReg_WB 
        = vlSelf->SingleCycleCPU__DOT__memtoReg_WB;
    __Vdly__SingleCycleCPU__DOT__memWrite_MEM = vlSelf->SingleCycleCPU__DOT__memWrite_MEM;
    vlSelf->__Vdly__SingleCycleCPU__DOT__memRead_MEM 
        = vlSelf->SingleCycleCPU__DOT__memRead_MEM;
    vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_WB 
        = vlSelf->SingleCycleCPU__DOT__ALUOut_WB;
    __Vdly__SingleCycleCPU__DOT__rs2_MEM = vlSelf->SingleCycleCPU__DOT__rs2_MEM;
    vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_MEM 
        = vlSelf->SingleCycleCPU__DOT__ALUOut_MEM;
    __Vdly__SingleCycleCPU__DOT__inst_ID = vlSelf->SingleCycleCPU__DOT__inst_ID;
    vlSelf->__Vdly__SingleCycleCPU__DOT__readData_WB 
        = vlSelf->SingleCycleCPU__DOT__readData_WB;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 0U;
    vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 0U;
    if (vlSelf->start) {
        vlSelf->__Vdly__SingleCycleCPU__DOT__writeReg_WB 
            = vlSelf->SingleCycleCPU__DOT__writeReg_MEM;
        vlSelf->__Vdly__SingleCycleCPU__DOT__regWrite_WB 
            = vlSelf->SingleCycleCPU__DOT__regWrite_MEM;
        vlSelf->__Vdly__SingleCycleCPU__DOT__memtoReg_WB 
            = vlSelf->SingleCycleCPU__DOT__memtoReg_MEM;
        vlSelf->SingleCycleCPU__DOT__regWrite_MEM = vlSelf->SingleCycleCPU__DOT__regWrite_EX;
        vlSelf->SingleCycleCPU__DOT__memtoReg_MEM = vlSelf->SingleCycleCPU__DOT__memtoReg_EX;
        __Vdly__SingleCycleCPU__DOT__memWrite_MEM = vlSelf->SingleCycleCPU__DOT__memWrite_EX;
        vlSelf->__Vdly__SingleCycleCPU__DOT__memRead_MEM 
            = vlSelf->SingleCycleCPU__DOT__memRead_EX;
        vlSelf->SingleCycleCPU__DOT__writeReg_MEM = vlSelf->SingleCycleCPU__DOT__writeReg_EX;
        vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_WB 
            = vlSelf->SingleCycleCPU__DOT__ALUOut_MEM;
        __Vdly__SingleCycleCPU__DOT__rs2_MEM = vlSelf->SingleCycleCPU__DOT__rs2_EX;
        vlSelf->SingleCycleCPU__DOT__imm_EX = vlSelf->SingleCycleCPU__DOT__imm_ID;
        vlSelf->SingleCycleCPU__DOT__regWrite_EX = 
            (1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl));
        vlSelf->SingleCycleCPU__DOT__memtoReg_EX = 
            (1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                   >> 5U));
        vlSelf->SingleCycleCPU__DOT__memWrite_EX = 
            (1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                   >> 2U));
        vlSelf->SingleCycleCPU__DOT__memRead_EX = (1U 
                                                   & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                      >> 6U));
        vlSelf->SingleCycleCPU__DOT__writeReg_EX = 
            (0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                      >> 7U));
        vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_MEM 
            = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                ? (vlSelf->SingleCycleCPU__DOT__rs1_EX 
                   & vlSelf->SingleCycleCPU__DOT__MuxSelB_Out)
                : ((1U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                    ? (vlSelf->SingleCycleCPU__DOT__rs1_EX 
                       | vlSelf->SingleCycleCPU__DOT__MuxSelB_Out)
                    : ((2U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                        ? (vlSelf->SingleCycleCPU__DOT__rs1_EX 
                           + vlSelf->SingleCycleCPU__DOT__MuxSelB_Out)
                        : ((6U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                            ? (vlSelf->SingleCycleCPU__DOT__rs1_EX 
                               - vlSelf->SingleCycleCPU__DOT__MuxSelB_Out)
                            : ((7U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                ? (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__rs1_EX, vlSelf->SingleCycleCPU__DOT__MuxSelB_Out)
                                    ? 1U : 0U) : 0U)))));
        vlSelf->SingleCycleCPU__DOT__SelB_EX = (1U 
                                                & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                   >> 1U));
        vlSelf->SingleCycleCPU__DOT__ALUOp_EX = (3U 
                                                 & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                                    >> 3U));
        vlSelf->SingleCycleCPU__DOT__funct3 = (7U & 
                                               (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                >> 0xcU));
        vlSelf->SingleCycleCPU__DOT__funct7 = (1U & 
                                               (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                                >> 0x1eU));
        __Vdly__SingleCycleCPU__DOT__inst_ID = ((0x80U 
                                                 <= vlSelf->SingleCycleCPU__DOT__PC)
                                                 ? 0U
                                                 : 
                                                ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                  [
                                                  (0x7fU 
                                                   & vlSelf->SingleCycleCPU__DOT__PC)] 
                                                  << 0x18U) 
                                                 | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                     [
                                                     (0x7fU 
                                                      & ((IData)(1U) 
                                                         + vlSelf->SingleCycleCPU__DOT__PC))] 
                                                     << 0x10U) 
                                                    | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                        [
                                                        (0x7fU 
                                                         & ((IData)(2U) 
                                                            + vlSelf->SingleCycleCPU__DOT__PC))] 
                                                        << 8U) 
                                                       | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                       [
                                                       (0x7fU 
                                                        & ((IData)(3U) 
                                                           + vlSelf->SingleCycleCPU__DOT__PC))]))));
        vlSelf->__Vdly__SingleCycleCPU__DOT__readData_WB 
            = vlSelf->SingleCycleCPU__DOT__readData_MEM;
        if (vlSelf->SingleCycleCPU__DOT__memWrite_MEM) {
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (vlSelf->SingleCycleCPU__DOT__rs2_MEM 
                   >> 0x18U);
            vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 = 1U;
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0 
                = (0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__ALUOut_MEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__rs2_MEM 
                            >> 0x10U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1 
                = (0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__ALUOut_MEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0xffU & (vlSelf->SingleCycleCPU__DOT__rs2_MEM 
                            >> 8U));
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2 
                = (0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__ALUOut_MEM));
            vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0xffU & vlSelf->SingleCycleCPU__DOT__rs2_MEM);
            vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3 
                = (0x7fU & vlSelf->SingleCycleCPU__DOT__ALUOut_MEM);
        }
        vlSelf->SingleCycleCPU__DOT__rs1_EX = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                       >> 0xfU))];
        vlSelf->SingleCycleCPU__DOT__rs2_EX = vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
            [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                       >> 0x14U))];
    } else {
        vlSelf->__Vdly__SingleCycleCPU__DOT__writeReg_WB 
            = vlSelf->SingleCycleCPU__DOT__writeReg_WB;
        vlSelf->__Vdly__SingleCycleCPU__DOT__regWrite_WB 
            = vlSelf->SingleCycleCPU__DOT__regWrite_WB;
        vlSelf->__Vdly__SingleCycleCPU__DOT__memtoReg_WB 
            = vlSelf->SingleCycleCPU__DOT__memtoReg_WB;
        vlSelf->SingleCycleCPU__DOT__regWrite_MEM = vlSelf->SingleCycleCPU__DOT__regWrite_MEM;
        vlSelf->SingleCycleCPU__DOT__memtoReg_MEM = vlSelf->SingleCycleCPU__DOT__memtoReg_MEM;
        __Vdly__SingleCycleCPU__DOT__memWrite_MEM = vlSelf->SingleCycleCPU__DOT__memWrite_MEM;
        vlSelf->__Vdly__SingleCycleCPU__DOT__memRead_MEM 
            = vlSelf->SingleCycleCPU__DOT__memRead_MEM;
        vlSelf->SingleCycleCPU__DOT__writeReg_MEM = vlSelf->SingleCycleCPU__DOT__writeReg_MEM;
        vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_WB 
            = vlSelf->SingleCycleCPU__DOT__ALUOut_WB;
        __Vdly__SingleCycleCPU__DOT__rs2_MEM = vlSelf->SingleCycleCPU__DOT__rs2_MEM;
        vlSelf->SingleCycleCPU__DOT__imm_EX = vlSelf->SingleCycleCPU__DOT__imm_EX;
        vlSelf->SingleCycleCPU__DOT__regWrite_EX = 
            (1U & (IData)(vlSelf->SingleCycleCPU__DOT__regWrite_EX));
        vlSelf->SingleCycleCPU__DOT__memtoReg_EX = 
            (1U & (IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_EX));
        vlSelf->SingleCycleCPU__DOT__memWrite_EX = 
            (1U & (IData)(vlSelf->SingleCycleCPU__DOT__memWrite_EX));
        vlSelf->SingleCycleCPU__DOT__memRead_EX = (1U 
                                                   & (IData)(vlSelf->SingleCycleCPU__DOT__memRead_EX));
        vlSelf->SingleCycleCPU__DOT__writeReg_EX = 
            (0x1fU & (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_EX));
        vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_MEM 
            = vlSelf->SingleCycleCPU__DOT__ALUOut_MEM;
        vlSelf->SingleCycleCPU__DOT__SelB_EX = (1U 
                                                & (IData)(vlSelf->SingleCycleCPU__DOT__SelB_EX));
        vlSelf->SingleCycleCPU__DOT__ALUOp_EX = (3U 
                                                 & (IData)(vlSelf->SingleCycleCPU__DOT__ALUOp_EX));
        vlSelf->SingleCycleCPU__DOT__funct3 = (7U & (IData)(vlSelf->SingleCycleCPU__DOT__funct3));
        vlSelf->SingleCycleCPU__DOT__funct7 = (1U & (IData)(vlSelf->SingleCycleCPU__DOT__funct7));
        __Vdly__SingleCycleCPU__DOT__inst_ID = vlSelf->SingleCycleCPU__DOT__inst_ID;
        vlSelf->__Vdly__SingleCycleCPU__DOT__readData_WB 
            = vlSelf->SingleCycleCPU__DOT__readData_WB;
        vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4 = 1U;
        vlSelf->SingleCycleCPU__DOT__rs1_EX = vlSelf->SingleCycleCPU__DOT__rs1_EX;
        vlSelf->SingleCycleCPU__DOT__rs2_EX = vlSelf->SingleCycleCPU__DOT__rs2_EX;
    }
    vlSelf->SingleCycleCPU__DOT__memWrite_MEM = __Vdly__SingleCycleCPU__DOT__memWrite_MEM;
    vlSelf->SingleCycleCPU__DOT__rs2_MEM = __Vdly__SingleCycleCPU__DOT__rs2_MEM;
    vlSelf->SingleCycleCPU__DOT__inst_ID = __Vdly__SingleCycleCPU__DOT__inst_ID;
    __Vtableidx2 = (((IData)(vlSelf->SingleCycleCPU__DOT__funct3) 
                     << 3U) | (((IData)(vlSelf->SingleCycleCPU__DOT__funct7) 
                                << 2U) | (IData)(vlSelf->SingleCycleCPU__DOT__ALUOp_EX)));
    vlSelf->SingleCycleCPU__DOT__ALUCtl = VSingleCycleCPU__ConstPool__TABLE_h2fc2a4f8_0
        [__Vtableidx2];
    vlSelf->SingleCycleCPU__DOT__MuxSelB_Out = ((IData)(vlSelf->SingleCycleCPU__DOT__SelB_EX)
                                                 ? vlSelf->SingleCycleCPU__DOT__imm_EX
                                                 : vlSelf->SingleCycleCPU__DOT__rs2_EX);
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
    __Vtableidx1 = (0x7fU & vlSelf->SingleCycleCPU__DOT__inst_ID);
    vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl 
        = VSingleCycleCPU__ConstPool__TABLE_h7b9913bd_0
        [__Vtableidx1];
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__1(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__1\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    IData/*31:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0;
    CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0;
    // Body
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 0U;
    __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 0U;
    if (vlSelf->start) {
        vlSelf->SingleCycleCPU__DOT__PC = vlSelf->SingleCycleCPU__DOT__PC_plus4;
        if (vlSelf->SingleCycleCPU__DOT__regWrite_WB) {
            __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = ((0U == (IData)(vlSelf->SingleCycleCPU__DOT__writeReg_WB))
                    ? 0U : ((IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_WB)
                             ? vlSelf->SingleCycleCPU__DOT__readData_WB
                             : vlSelf->SingleCycleCPU__DOT__ALUOut_WB));
            __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 = 1U;
            __Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0 
                = vlSelf->SingleCycleCPU__DOT__writeReg_WB;
        }
    } else {
        vlSelf->SingleCycleCPU__DOT__PC = vlSelf->SingleCycleCPU__DOT__PC;
        __Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1 = 1U;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v0) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[__Vdlyvdim0__SingleCycleCPU__DOT__m_Register__DOT__regs__v0] 
            = __Vdlyvval__SingleCycleCPU__DOT__m_Register__DOT__regs__v0;
    }
    if (__Vdlyvset__SingleCycleCPU__DOT__m_Register__DOT__regs__v1) {
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2U] = 0x80U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xaU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xbU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xcU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xdU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xeU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0xfU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x10U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x11U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x12U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x13U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x14U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x15U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x16U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x17U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x18U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x19U] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1aU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1bU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1cU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1dU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1eU] = 0U;
        vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0x1fU] = 0U;
    }
    vlSelf->SingleCycleCPU__DOT__PC_plus4 = ((IData)(4U) 
                                             + vlSelf->SingleCycleCPU__DOT__PC);
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
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__2(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__2\n"); );
    // Body
    if (vlSelf->SingleCycleCPU__DOT__memRead_MEM) {
        vlSelf->SingleCycleCPU__DOT__readData_MEM = 
            ((0xffffffU & vlSelf->SingleCycleCPU__DOT__readData_MEM) 
             | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                [(0x7fU & ((IData)(3U) + vlSelf->SingleCycleCPU__DOT__ALUOut_MEM))] 
                << 0x18U));
        vlSelf->SingleCycleCPU__DOT__readData_MEM = 
            ((0xff00ffffU & vlSelf->SingleCycleCPU__DOT__readData_MEM) 
             | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                [(0x7fU & ((IData)(2U) + vlSelf->SingleCycleCPU__DOT__ALUOut_MEM))] 
                << 0x10U));
        vlSelf->SingleCycleCPU__DOT__readData_MEM = 
            ((0xffff00ffU & vlSelf->SingleCycleCPU__DOT__readData_MEM) 
             | (vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
                [(0x7fU & ((IData)(1U) + vlSelf->SingleCycleCPU__DOT__ALUOut_MEM))] 
                << 8U));
        vlSelf->SingleCycleCPU__DOT__readData_MEM = 
            ((0xffffff00U & vlSelf->SingleCycleCPU__DOT__readData_MEM) 
             | vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory
             [(0x7fU & vlSelf->SingleCycleCPU__DOT__ALUOut_MEM)]);
    }
}

VL_INLINE_OPT void VSingleCycleCPU___024root___nba_sequent__TOP__3(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___nba_sequent__TOP__3\n"); );
    // Init
    IData/*31:0*/ __Vilp;
    // Body
    vlSelf->SingleCycleCPU__DOT__regWrite_WB = vlSelf->__Vdly__SingleCycleCPU__DOT__regWrite_WB;
    vlSelf->SingleCycleCPU__DOT__writeReg_WB = vlSelf->__Vdly__SingleCycleCPU__DOT__writeReg_WB;
    vlSelf->SingleCycleCPU__DOT__memtoReg_WB = vlSelf->__Vdly__SingleCycleCPU__DOT__memtoReg_WB;
    vlSelf->SingleCycleCPU__DOT__readData_WB = vlSelf->__Vdly__SingleCycleCPU__DOT__readData_WB;
    vlSelf->SingleCycleCPU__DOT__ALUOut_WB = vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_WB;
    vlSelf->SingleCycleCPU__DOT__memRead_MEM = vlSelf->__Vdly__SingleCycleCPU__DOT__memRead_MEM;
    vlSelf->SingleCycleCPU__DOT__ALUOut_MEM = vlSelf->__Vdly__SingleCycleCPU__DOT__ALUOut_MEM;
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0) {
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[vlSelf->__Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3] 
            = vlSelf->__Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
    }
    if (vlSelf->__Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4) {
        __Vilp = 0U;
        while ((__Vilp <= 0x7fU)) {
            vlSelf->SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory[__Vilp] = 0U;
            __Vilp = ((IData)(1U) + __Vilp);
        }
    }
}

void VSingleCycleCPU___024root___eval_nba(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_nba\n"); );
    // Body
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__0(vlSelf);
        vlSelf->__Vm_traceActivity[1U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(0U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__1(vlSelf);
        vlSelf->__Vm_traceActivity[2U] = 1U;
    }
    if (vlSelf->__VnbaTriggered.at(2U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__2(vlSelf);
    }
    if (vlSelf->__VnbaTriggered.at(1U)) {
        VSingleCycleCPU___024root___nba_sequent__TOP__3(vlSelf);
        vlSelf->__Vm_traceActivity[3U] = 1U;
    }
}

void VSingleCycleCPU___024root___eval_triggers__act(VSingleCycleCPU___024root* vlSelf);
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__act(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
#ifdef VL_DEBUG
VL_ATTR_COLD void VSingleCycleCPU___024root___dump_triggers__nba(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG

void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval\n"); );
    // Init
    VlTriggerVec<3> __VpreTriggered;
    IData/*31:0*/ __VnbaIterCount;
    CData/*0:0*/ __VnbaContinue;
    // Body
    __VnbaIterCount = 0U;
    __VnbaContinue = 1U;
    while (__VnbaContinue) {
        __VnbaContinue = 0U;
        vlSelf->__VnbaTriggered.clear();
        vlSelf->__VactIterCount = 0U;
        vlSelf->__VactContinue = 1U;
        while (vlSelf->__VactContinue) {
            vlSelf->__VactContinue = 0U;
            VSingleCycleCPU___024root___eval_triggers__act(vlSelf);
            if (vlSelf->__VactTriggered.any()) {
                vlSelf->__VactContinue = 1U;
                if (VL_UNLIKELY((0x64U < vlSelf->__VactIterCount))) {
#ifdef VL_DEBUG
                    VSingleCycleCPU___024root___dump_triggers__act(vlSelf);
#endif
                    VL_FATAL_MT("SingleCycleCPU.v", 1, "", "Active region did not converge.");
                }
                vlSelf->__VactIterCount = ((IData)(1U) 
                                           + vlSelf->__VactIterCount);
                __VpreTriggered.andNot(vlSelf->__VactTriggered, vlSelf->__VnbaTriggered);
                vlSelf->__VnbaTriggered.set(vlSelf->__VactTriggered);
                VSingleCycleCPU___024root___eval_act(vlSelf);
            }
        }
        if (vlSelf->__VnbaTriggered.any()) {
            __VnbaContinue = 1U;
            if (VL_UNLIKELY((0x64U < __VnbaIterCount))) {
#ifdef VL_DEBUG
                VSingleCycleCPU___024root___dump_triggers__nba(vlSelf);
#endif
                VL_FATAL_MT("SingleCycleCPU.v", 1, "", "NBA region did not converge.");
            }
            __VnbaIterCount = ((IData)(1U) + __VnbaIterCount);
            VSingleCycleCPU___024root___eval_nba(vlSelf);
        }
    }
}

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->start & 0xfeU))) {
        Verilated::overWidthError("start");}
}
#endif  // VL_DEBUG
