// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VSingleCycleCPU___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void VSingleCycleCPU___024root__trace_chg_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgIData(oldp+0,(vlSelf->SingleCycleCPU__DOT__MuxSelB_Out),32);
        bufp->chgCData(oldp+1,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
        bufp->chgBit(oldp+2,(vlSelf->SingleCycleCPU__DOT__funct7));
        bufp->chgCData(oldp+3,(vlSelf->SingleCycleCPU__DOT__funct3),3);
        bufp->chgIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__inst_ID),32);
        bufp->chgCData(oldp+5,(vlSelf->SingleCycleCPU__DOT__writeReg_EX),5);
        bufp->chgCData(oldp+6,(vlSelf->SingleCycleCPU__DOT__writeReg_MEM),5);
        bufp->chgIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__rs1_EX),32);
        bufp->chgIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__rs2_EX),32);
        bufp->chgIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__rs2_MEM),32);
        bufp->chgIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__imm_ID),32);
        bufp->chgIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__imm_EX),32);
        bufp->chgIData(oldp+12,(((0U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
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
                                              : ((7U 
                                                  == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
                                                  ? 
                                                 (VL_LTS_III(32, vlSelf->SingleCycleCPU__DOT__rs1_EX, vlSelf->SingleCycleCPU__DOT__MuxSelB_Out)
                                                   ? 1U
                                                   : 0U)
                                                  : 0U)))))),32);
        bufp->chgBit(oldp+13,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 6U))));
        bufp->chgBit(oldp+14,(vlSelf->SingleCycleCPU__DOT__memRead_EX));
        bufp->chgBit(oldp+15,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 2U))));
        bufp->chgBit(oldp+16,(vlSelf->SingleCycleCPU__DOT__memWrite_EX));
        bufp->chgBit(oldp+17,(vlSelf->SingleCycleCPU__DOT__memWrite_MEM));
        bufp->chgBit(oldp+18,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 5U))));
        bufp->chgBit(oldp+19,(vlSelf->SingleCycleCPU__DOT__memtoReg_EX));
        bufp->chgBit(oldp+20,(vlSelf->SingleCycleCPU__DOT__memtoReg_MEM));
        bufp->chgBit(oldp+21,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl))));
        bufp->chgBit(oldp+22,(vlSelf->SingleCycleCPU__DOT__regWrite_EX));
        bufp->chgBit(oldp+23,(vlSelf->SingleCycleCPU__DOT__regWrite_MEM));
        bufp->chgCData(oldp+24,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                       >> 3U))),2);
        bufp->chgCData(oldp+25,(vlSelf->SingleCycleCPU__DOT__ALUOp_EX),2);
        bufp->chgBit(oldp+26,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                     >> 1U))));
        bufp->chgBit(oldp+27,(vlSelf->SingleCycleCPU__DOT__SelB_EX));
        bufp->chgCData(oldp+28,((0x7fU & vlSelf->SingleCycleCPU__DOT__inst_ID)),7);
        bufp->chgCData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl),7);
        bufp->chgBit(oldp+30,((1U & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                     >> 0x1eU))));
        bufp->chgCData(oldp+31,((7U & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                       >> 0xcU))),3);
        bufp->chgCData(oldp+32,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                          >> 7U))),5);
        bufp->chgCData(oldp+33,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                          >> 0xfU))),5);
        bufp->chgCData(oldp+34,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                          >> 0x14U))),5);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__PC),32);
        bufp->chgIData(oldp+36,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PC)),32);
        bufp->chgIData(oldp+37,(((0x80U <= vlSelf->SingleCycleCPU__DOT__PC)
                                  ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                           [(0x7fU 
                                             & vlSelf->SingleCycleCPU__DOT__PC)] 
                                           << 0x18U) 
                                          | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                              [(0x7fU 
                                                & ((IData)(1U) 
                                                   + vlSelf->SingleCycleCPU__DOT__PC))] 
                                              << 0x10U) 
                                             | ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                 [(0x7fU 
                                                   & ((IData)(2U) 
                                                      + vlSelf->SingleCycleCPU__DOT__PC))] 
                                                 << 8U) 
                                                | vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                                [(0x7fU 
                                                  & ((IData)(3U) 
                                                     + vlSelf->SingleCycleCPU__DOT__PC))]))))),32);
        bufp->chgIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
        bufp->chgIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
        bufp->chgIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
        bufp->chgIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
        bufp->chgIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
        bufp->chgIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
        bufp->chgIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
        bufp->chgIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
        bufp->chgIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
        bufp->chgIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
        bufp->chgIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
        bufp->chgIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
        bufp->chgIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
        bufp->chgIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
        bufp->chgIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
        bufp->chgIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
        bufp->chgIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
        bufp->chgIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
        bufp->chgIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
        bufp->chgIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
        bufp->chgIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
        bufp->chgIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
        bufp->chgIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
        bufp->chgIData(oldp+61,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
        bufp->chgIData(oldp+62,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
        bufp->chgIData(oldp+63,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
        bufp->chgIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
        bufp->chgIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
        bufp->chgIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
        bufp->chgIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
        bufp->chgIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
        bufp->chgIData(oldp+69,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[3U])) {
        bufp->chgIData(oldp+70,(((IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_WB)
                                  ? vlSelf->SingleCycleCPU__DOT__readData_WB
                                  : vlSelf->SingleCycleCPU__DOT__ALUOut_WB)),32);
        bufp->chgCData(oldp+71,(vlSelf->SingleCycleCPU__DOT__writeReg_WB),5);
        bufp->chgIData(oldp+72,(vlSelf->SingleCycleCPU__DOT__ALUOut_MEM),32);
        bufp->chgIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__ALUOut_WB),32);
        bufp->chgIData(oldp+74,(vlSelf->SingleCycleCPU__DOT__readData_WB),32);
        bufp->chgBit(oldp+75,(vlSelf->SingleCycleCPU__DOT__memRead_MEM));
        bufp->chgBit(oldp+76,(vlSelf->SingleCycleCPU__DOT__memtoReg_WB));
        bufp->chgBit(oldp+77,(vlSelf->SingleCycleCPU__DOT__regWrite_WB));
    }
    bufp->chgBit(oldp+78,(vlSelf->clk));
    bufp->chgBit(oldp+79,(vlSelf->start));
    bufp->chgIData(oldp+80,(vlSelf->r[0]),32);
    bufp->chgIData(oldp+81,(vlSelf->r[1]),32);
    bufp->chgIData(oldp+82,(vlSelf->r[2]),32);
    bufp->chgIData(oldp+83,(vlSelf->r[3]),32);
    bufp->chgIData(oldp+84,(vlSelf->r[4]),32);
    bufp->chgIData(oldp+85,(vlSelf->r[5]),32);
    bufp->chgIData(oldp+86,(vlSelf->r[6]),32);
    bufp->chgIData(oldp+87,(vlSelf->r[7]),32);
    bufp->chgIData(oldp+88,(vlSelf->r[8]),32);
    bufp->chgIData(oldp+89,(vlSelf->r[9]),32);
    bufp->chgIData(oldp+90,(vlSelf->r[10]),32);
    bufp->chgIData(oldp+91,(vlSelf->r[11]),32);
    bufp->chgIData(oldp+92,(vlSelf->r[12]),32);
    bufp->chgIData(oldp+93,(vlSelf->r[13]),32);
    bufp->chgIData(oldp+94,(vlSelf->r[14]),32);
    bufp->chgIData(oldp+95,(vlSelf->r[15]),32);
    bufp->chgIData(oldp+96,(vlSelf->r[16]),32);
    bufp->chgIData(oldp+97,(vlSelf->r[17]),32);
    bufp->chgIData(oldp+98,(vlSelf->r[18]),32);
    bufp->chgIData(oldp+99,(vlSelf->r[19]),32);
    bufp->chgIData(oldp+100,(vlSelf->r[20]),32);
    bufp->chgIData(oldp+101,(vlSelf->r[21]),32);
    bufp->chgIData(oldp+102,(vlSelf->r[22]),32);
    bufp->chgIData(oldp+103,(vlSelf->r[23]),32);
    bufp->chgIData(oldp+104,(vlSelf->r[24]),32);
    bufp->chgIData(oldp+105,(vlSelf->r[25]),32);
    bufp->chgIData(oldp+106,(vlSelf->r[26]),32);
    bufp->chgIData(oldp+107,(vlSelf->r[27]),32);
    bufp->chgIData(oldp+108,(vlSelf->r[28]),32);
    bufp->chgIData(oldp+109,(vlSelf->r[29]),32);
    bufp->chgIData(oldp+110,(vlSelf->r[30]),32);
    bufp->chgIData(oldp+111,(vlSelf->r[31]),32);
    bufp->chgIData(oldp+112,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                        >> 0xfU))]),32);
    bufp->chgIData(oldp+113,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                             [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                        >> 0x14U))]),32);
    bufp->chgIData(oldp+114,(vlSelf->SingleCycleCPU__DOT__readData_MEM),32);
}

void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_cleanup\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
