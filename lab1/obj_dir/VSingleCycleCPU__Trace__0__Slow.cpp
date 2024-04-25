// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VSingleCycleCPU__Syms.h"


VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_sub__TOP__0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+60,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+61+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+60,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+61+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+1,"PC", false,-1, 31,0);
    tracep->declBus(c+2,"PC_plus4", false,-1, 31,0);
    tracep->declBus(c+3,"PC_branch", false,-1, 31,0);
    tracep->declBus(c+93,"MuxPC_Out", false,-1, 31,0);
    tracep->declBus(c+4,"MuxALU_Out", false,-1, 31,0);
    tracep->declBus(c+56,"ALU_Out", false,-1, 31,0);
    tracep->declBus(c+5,"Ins", false,-1, 31,0);
    tracep->declBus(c+6,"Imm", false,-1, 31,0);
    tracep->declBus(c+7,"readData1", false,-1, 31,0);
    tracep->declBus(c+8,"readData2", false,-1, 31,0);
    tracep->declBus(c+94,"writeData", false,-1, 31,0);
    tracep->declBus(c+9,"shiftOut", false,-1, 31,0);
    tracep->declBus(c+95,"readData", false,-1, 31,0);
    tracep->declBus(c+10,"ALUCtl", false,-1, 3,0);
    tracep->declBus(c+11,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+12,"branch", false,-1);
    tracep->declBit(c+57,"memRead", false,-1);
    tracep->declBit(c+13,"memWrite", false,-1);
    tracep->declBit(c+14,"memtoReg", false,-1);
    tracep->declBit(c+15,"ALUSrc", false,-1);
    tracep->declBit(c+16,"regWrite", false,-1);
    tracep->declBit(c+58,"zero", false,-1);
    tracep->declBit(c+96,"andOut", false,-1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+10,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+7,"A", false,-1, 31,0);
    tracep->declBus(c+4,"B", false,-1, 31,0);
    tracep->declBus(c+56,"ALUOut", false,-1, 31,0);
    tracep->declBit(c+58,"zero", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+11,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+17,"funct7", false,-1);
    tracep->declBus(c+18,"funct3", false,-1, 2,0);
    tracep->declBus(c+10,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+97,"b", false,-1, 31,0);
    tracep->declBus(c+2,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_2 ");
    tracep->declBus(c+1,"a", false,-1, 31,0);
    tracep->declBus(c+9,"b", false,-1, 31,0);
    tracep->declBus(c+3,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+19,"opcode", false,-1, 6,0);
    tracep->declBit(c+12,"branch", false,-1);
    tracep->declBit(c+57,"memRead", false,-1);
    tracep->declBit(c+14,"memtoReg", false,-1);
    tracep->declBus(c+11,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+13,"memWrite", false,-1);
    tracep->declBit(c+15,"ALUSrc", false,-1);
    tracep->declBit(c+16,"regWrite", false,-1);
    tracep->declBus(c+20,"ctrl", false,-1, 7,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+13,"memWrite", false,-1);
    tracep->declBit(c+57,"memRead", false,-1);
    tracep->declBus(c+56,"address", false,-1, 31,0);
    tracep->declBus(c+8,"writeData", false,-1, 31,0);
    tracep->declBus(c+95,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->declBus(c+6,"imm", false,-1, 31,0);
    tracep->declBus(c+19,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+1,"readAddr", false,-1, 31,0);
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_ALU ");
    tracep->declBus(c+98,"size", false,-1, 31,0);
    tracep->declBit(c+15,"sel", false,-1);
    tracep->declBus(c+8,"s0", false,-1, 31,0);
    tracep->declBus(c+6,"s1", false,-1, 31,0);
    tracep->declBus(c+4,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_PC ");
    tracep->declBus(c+98,"size", false,-1, 31,0);
    tracep->declBit(c+96,"sel", false,-1);
    tracep->declBus(c+2,"s0", false,-1, 31,0);
    tracep->declBus(c+3,"s1", false,-1, 31,0);
    tracep->declBus(c+93,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+98,"size", false,-1, 31,0);
    tracep->declBit(c+14,"sel", false,-1);
    tracep->declBus(c+56,"s0", false,-1, 31,0);
    tracep->declBus(c+95,"s1", false,-1, 31,0);
    tracep->declBus(c+94,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBus(c+93,"pc_i", false,-1, 31,0);
    tracep->declBus(c+1,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+59,"clk", false,-1);
    tracep->declBit(c+60,"rst", false,-1);
    tracep->declBit(c+16,"regWrite", false,-1);
    tracep->declBus(c+21,"readReg1", false,-1, 4,0);
    tracep->declBus(c+22,"readReg2", false,-1, 4,0);
    tracep->declBus(c+23,"writeReg", false,-1, 4,0);
    tracep->declBus(c+94,"writeData", false,-1, 31,0);
    tracep->declBus(c+7,"readData1", false,-1, 31,0);
    tracep->declBus(c+8,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+24+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ShiftLeftOne ");
    tracep->declBus(c+6,"i", false,-1, 31,0);
    tracep->declBus(c+9,"o", false,-1, 31,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_init_top\n"); );
    // Body
    VSingleCycleCPU___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VSingleCycleCPU___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&VSingleCycleCPU___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&VSingleCycleCPU___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&VSingleCycleCPU___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_top_0\n"); );
    // Init
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VSingleCycleCPU___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_full_sub_0(VSingleCycleCPU___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VSingleCycleCPU___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__PC),32);
    bufp->fullIData(oldp+2,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PC)),32);
    bufp->fullIData(oldp+3,((vlSelf->SingleCycleCPU__DOT__PC 
                             + (vlSelf->SingleCycleCPU__DOT__Imm 
                                << 1U))),32);
    bufp->fullIData(oldp+4,(vlSelf->SingleCycleCPU__DOT__MuxALU_Out),32);
    bufp->fullIData(oldp+5,(vlSelf->SingleCycleCPU__DOT__Ins),32);
    bufp->fullIData(oldp+6,(vlSelf->SingleCycleCPU__DOT__Imm),32);
    bufp->fullIData(oldp+7,(vlSelf->SingleCycleCPU__DOT__readData1),32);
    bufp->fullIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__readData2),32);
    bufp->fullIData(oldp+9,((vlSelf->SingleCycleCPU__DOT__Imm 
                             << 1U)),32);
    bufp->fullCData(oldp+10,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
    bufp->fullCData(oldp+11,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 3U))),2);
    bufp->fullBit(oldp+12,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 7U))));
    bufp->fullBit(oldp+13,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 2U))));
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+15,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 1U))));
    bufp->fullBit(oldp+16,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullBit(oldp+17,(((0x80U > vlSelf->SingleCycleCPU__DOT__PC) 
                            & ((IData)(vlSelf->__VdfgTmp_h00ca03af__0) 
                               >> 6U))));
    bufp->fullCData(oldp+18,(((0x80U <= vlSelf->SingleCycleCPU__DOT__PC)
                               ? 0U : (7U & ((IData)(vlSelf->__VdfgTmp_h980adac1__0) 
                                             >> 4U)))),3);
    bufp->fullCData(oldp+19,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Control__opcode),7);
    bufp->fullCData(oldp+20,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl),8);
    bufp->fullCData(oldp+21,(((0x80U <= vlSelf->SingleCycleCPU__DOT__PC)
                               ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h30fffff8__0 
                                                >> 0xfU)))),5);
    bufp->fullCData(oldp+22,(((0x80U <= vlSelf->SingleCycleCPU__DOT__PC)
                               ? 0U : (0x1fU & (vlSelf->__VdfgTmp_h75522435__0 
                                                >> 0x14U)))),5);
    bufp->fullCData(oldp+23,(vlSelf->SingleCycleCPU__DOT____Vcellinp__m_Register__writeReg),5);
    bufp->fullIData(oldp+24,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+25,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+26,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+27,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+28,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+29,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+31,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+32,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+33,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+34,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+35,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+37,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+38,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__ALU_Out),32);
    bufp->fullBit(oldp+57,(vlSelf->SingleCycleCPU__DOT__memRead));
    bufp->fullBit(oldp+58,((0U == vlSelf->SingleCycleCPU__DOT__ALU_Out)));
    bufp->fullBit(oldp+59,(vlSelf->clk));
    bufp->fullBit(oldp+60,(vlSelf->start));
    bufp->fullIData(oldp+61,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+62,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+63,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+64,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+65,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+66,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+67,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+68,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+69,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+70,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+71,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+72,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+73,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+74,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+75,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+76,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+77,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+78,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+79,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+80,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+81,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+82,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+83,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+84,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+85,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+86,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+87,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+88,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+89,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+90,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+91,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+92,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+93,(((((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                >> 7U) & (0U == vlSelf->SingleCycleCPU__DOT__ALU_Out))
                               ? (vlSelf->SingleCycleCPU__DOT__PC 
                                  + (vlSelf->SingleCycleCPU__DOT__Imm 
                                     << 1U)) : ((IData)(4U) 
                                                + vlSelf->SingleCycleCPU__DOT__PC))),32);
    bufp->fullIData(oldp+94,(vlSelf->SingleCycleCPU__DOT__writeData),32);
    bufp->fullIData(oldp+95,(vlSelf->SingleCycleCPU__DOT__readData),32);
    bufp->fullBit(oldp+96,((((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                             >> 7U) & (0U == vlSelf->SingleCycleCPU__DOT__ALU_Out))));
    bufp->fullIData(oldp+97,(4U),32);
    bufp->fullIData(oldp+98,(0x20U),32);
}
