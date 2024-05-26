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
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+81+i*1,"r", true,(i+0), 31,0);
    }
    tracep->pushNamePrefix("SingleCycleCPU ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"start", false,-1);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+81+i*1,"r", true,(i+0), 31,0);
    }
    tracep->declBus(c+36,"PC", false,-1, 31,0);
    tracep->declBus(c+37,"PC_plus4", false,-1, 31,0);
    tracep->declBus(c+1,"MuxSelB_Out", false,-1, 31,0);
    tracep->declBus(c+71,"writeData", false,-1, 31,0);
    tracep->declBus(c+2,"ALUCtl", false,-1, 3,0);
    tracep->declBit(c+3,"funct7", false,-1);
    tracep->declBus(c+4,"funct3", false,-1, 2,0);
    tracep->declBus(c+38,"inst_IF", false,-1, 31,0);
    tracep->declBus(c+5,"inst_ID", false,-1, 31,0);
    tracep->declBus(c+6,"writeReg_EX", false,-1, 4,0);
    tracep->declBus(c+7,"writeReg_MEM", false,-1, 4,0);
    tracep->declBus(c+72,"writeReg_WB", false,-1, 4,0);
    tracep->declBus(c+113,"rs1_ID", false,-1, 31,0);
    tracep->declBus(c+8,"rs1_EX", false,-1, 31,0);
    tracep->declBus(c+114,"rs2_ID", false,-1, 31,0);
    tracep->declBus(c+9,"rs2_EX", false,-1, 31,0);
    tracep->declBus(c+10,"rs2_MEM", false,-1, 31,0);
    tracep->declBus(c+11,"imm_ID", false,-1, 31,0);
    tracep->declBus(c+12,"imm_EX", false,-1, 31,0);
    tracep->declBus(c+13,"ALUOut_EX", false,-1, 31,0);
    tracep->declBus(c+73,"ALUOut_MEM", false,-1, 31,0);
    tracep->declBus(c+74,"ALUOut_WB", false,-1, 31,0);
    tracep->declBus(c+115,"readData_MEM", false,-1, 31,0);
    tracep->declBus(c+75,"readData_WB", false,-1, 31,0);
    tracep->declBit(c+14,"memRead_ID", false,-1);
    tracep->declBit(c+15,"memRead_EX", false,-1);
    tracep->declBit(c+76,"memRead_MEM", false,-1);
    tracep->declBit(c+16,"memWrite_ID", false,-1);
    tracep->declBit(c+17,"memWrite_EX", false,-1);
    tracep->declBit(c+18,"memWrite_MEM", false,-1);
    tracep->declBit(c+19,"memtoReg_ID", false,-1);
    tracep->declBit(c+20,"memtoReg_EX", false,-1);
    tracep->declBit(c+21,"memtoReg_MEM", false,-1);
    tracep->declBit(c+77,"memtoReg_WB", false,-1);
    tracep->declBit(c+22,"regWrite_ID", false,-1);
    tracep->declBit(c+23,"regWrite_EX", false,-1);
    tracep->declBit(c+24,"regWrite_MEM", false,-1);
    tracep->declBit(c+78,"regWrite_WB", false,-1);
    tracep->declBus(c+25,"ALUOp_ID", false,-1, 1,0);
    tracep->declBus(c+26,"ALUOp_EX", false,-1, 1,0);
    tracep->declBit(c+27,"SelB_ID", false,-1);
    tracep->declBit(c+28,"SelB_EX", false,-1);
    tracep->pushNamePrefix("m_ALU ");
    tracep->declBus(c+2,"ALUctl", false,-1, 3,0);
    tracep->declBus(c+8,"A", false,-1, 31,0);
    tracep->declBus(c+1,"B", false,-1, 31,0);
    tracep->declBus(c+13,"ALUOut", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ALUCtrl ");
    tracep->declBus(c+26,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+3,"funct7", false,-1);
    tracep->declBus(c+4,"funct3", false,-1, 2,0);
    tracep->declBus(c+2,"ALUCtl", false,-1, 3,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Adder_1 ");
    tracep->declBus(c+36,"a", false,-1, 31,0);
    tracep->declBus(c+116,"b", false,-1, 31,0);
    tracep->declBus(c+37,"sum", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Control ");
    tracep->declBus(c+29,"opcode", false,-1, 6,0);
    tracep->declBit(c+14,"memRead", false,-1);
    tracep->declBit(c+19,"memtoReg", false,-1);
    tracep->declBus(c+25,"ALUOp", false,-1, 1,0);
    tracep->declBit(c+16,"memWrite", false,-1);
    tracep->declBit(c+27,"SelB", false,-1);
    tracep->declBit(c+22,"regWrite", false,-1);
    tracep->declBus(c+30,"ctrl", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_DataMemory ");
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+18,"memWrite", false,-1);
    tracep->declBit(c+76,"memRead", false,-1);
    tracep->declBus(c+73,"address", false,-1, 31,0);
    tracep->declBus(c+10,"writeData", false,-1, 31,0);
    tracep->declBus(c+115,"readData", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_EXReg ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBit(c+14,"memRead_in", false,-1);
    tracep->declBit(c+16,"memWrite_in", false,-1);
    tracep->declBit(c+19,"memtoReg_in", false,-1);
    tracep->declBit(c+22,"regWrite_in", false,-1);
    tracep->declBus(c+25,"ALUOp_in", false,-1, 1,0);
    tracep->declBit(c+27,"SelB_in", false,-1);
    tracep->declBus(c+113,"rs1_in", false,-1, 31,0);
    tracep->declBus(c+114,"rs2_in", false,-1, 31,0);
    tracep->declBus(c+11,"imm_in", false,-1, 31,0);
    tracep->declBit(c+31,"funct7_in", false,-1);
    tracep->declBus(c+32,"funct3_in", false,-1, 2,0);
    tracep->declBus(c+33,"writeReg_in", false,-1, 4,0);
    tracep->declBit(c+15,"memRead_out", false,-1);
    tracep->declBit(c+17,"memWrite_out", false,-1);
    tracep->declBit(c+20,"memtoReg_out", false,-1);
    tracep->declBit(c+23,"regWrite_out", false,-1);
    tracep->declBus(c+26,"ALUOp_out", false,-1, 1,0);
    tracep->declBit(c+28,"SelB_out", false,-1);
    tracep->declBus(c+8,"rs1_out", false,-1, 31,0);
    tracep->declBus(c+9,"rs2_out", false,-1, 31,0);
    tracep->declBus(c+12,"imm_out", false,-1, 31,0);
    tracep->declBit(c+3,"funct7_out", false,-1);
    tracep->declBus(c+4,"funct3_out", false,-1, 2,0);
    tracep->declBus(c+6,"writeReg_out", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_IDReg ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+38,"inst_in", false,-1, 31,0);
    tracep->declBus(c+5,"inst_out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_ImmGen ");
    tracep->declBus(c+5,"inst", false,-1, 31,0);
    tracep->declBus(c+11,"imm", false,-1, 31,0);
    tracep->declBus(c+29,"opcode", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_InstMem ");
    tracep->declBus(c+36,"readAddr", false,-1, 31,0);
    tracep->declBus(c+38,"inst", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_MEMReg ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBit(c+15,"memRead_in", false,-1);
    tracep->declBit(c+17,"memWrite_in", false,-1);
    tracep->declBit(c+20,"memtoReg_in", false,-1);
    tracep->declBit(c+23,"regWrite_in", false,-1);
    tracep->declBus(c+13,"ALUResult_in", false,-1, 31,0);
    tracep->declBus(c+9,"rs2_in", false,-1, 31,0);
    tracep->declBus(c+6,"writeReg_in", false,-1, 4,0);
    tracep->declBit(c+76,"memRead_out", false,-1);
    tracep->declBit(c+18,"memWrite_out", false,-1);
    tracep->declBit(c+21,"memtoReg_out", false,-1);
    tracep->declBit(c+24,"regWrite_out", false,-1);
    tracep->declBus(c+73,"ALUResult_out", false,-1, 31,0);
    tracep->declBus(c+10,"rs2_out", false,-1, 31,0);
    tracep->declBus(c+7,"writeReg_out", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_SelB ");
    tracep->declBus(c+117,"size", false,-1, 31,0);
    tracep->declBit(c+28,"sel", false,-1);
    tracep->declBus(c+9,"s0", false,-1, 31,0);
    tracep->declBus(c+12,"s1", false,-1, 31,0);
    tracep->declBus(c+1,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Mux_WriteData ");
    tracep->declBus(c+117,"size", false,-1, 31,0);
    tracep->declBit(c+77,"sel", false,-1);
    tracep->declBus(c+74,"s0", false,-1, 31,0);
    tracep->declBus(c+75,"s1", false,-1, 31,0);
    tracep->declBus(c+71,"out", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_PC ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBus(c+37,"pc_i", false,-1, 31,0);
    tracep->declBus(c+36,"pc_o", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_Register ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBit(c+78,"regWrite", false,-1);
    tracep->declBus(c+34,"readReg1", false,-1, 4,0);
    tracep->declBus(c+35,"readReg2", false,-1, 4,0);
    tracep->declBus(c+72,"writeReg", false,-1, 4,0);
    tracep->declBus(c+71,"writeData", false,-1, 31,0);
    tracep->declBus(c+113,"readData1", false,-1, 31,0);
    tracep->declBus(c+114,"readData2", false,-1, 31,0);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+39+i*1,"regs", true,(i+0), 31,0);
    }
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("m_WBReg ");
    tracep->declBit(c+79,"clk", false,-1);
    tracep->declBit(c+80,"rst", false,-1);
    tracep->declBit(c+21,"memtoReg_in", false,-1);
    tracep->declBit(c+24,"regWrite_in", false,-1);
    tracep->declBus(c+73,"ALUResult_in", false,-1, 31,0);
    tracep->declBus(c+115,"readData_in", false,-1, 31,0);
    tracep->declBus(c+7,"writeReg_in", false,-1, 4,0);
    tracep->declBit(c+77,"memtoReg_out", false,-1);
    tracep->declBit(c+78,"regWrite_out", false,-1);
    tracep->declBus(c+74,"ALUResult_out", false,-1, 31,0);
    tracep->declBus(c+75,"readData_out", false,-1, 31,0);
    tracep->declBus(c+72,"writeReg_out", false,-1, 4,0);
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
    bufp->fullIData(oldp+1,(vlSelf->SingleCycleCPU__DOT__MuxSelB_Out),32);
    bufp->fullCData(oldp+2,(vlSelf->SingleCycleCPU__DOT__ALUCtl),4);
    bufp->fullBit(oldp+3,(vlSelf->SingleCycleCPU__DOT__funct7));
    bufp->fullCData(oldp+4,(vlSelf->SingleCycleCPU__DOT__funct3),3);
    bufp->fullIData(oldp+5,(vlSelf->SingleCycleCPU__DOT__inst_ID),32);
    bufp->fullCData(oldp+6,(vlSelf->SingleCycleCPU__DOT__writeReg_EX),5);
    bufp->fullCData(oldp+7,(vlSelf->SingleCycleCPU__DOT__writeReg_MEM),5);
    bufp->fullIData(oldp+8,(vlSelf->SingleCycleCPU__DOT__rs1_EX),32);
    bufp->fullIData(oldp+9,(vlSelf->SingleCycleCPU__DOT__rs2_EX),32);
    bufp->fullIData(oldp+10,(vlSelf->SingleCycleCPU__DOT__rs2_MEM),32);
    bufp->fullIData(oldp+11,(vlSelf->SingleCycleCPU__DOT__imm_ID),32);
    bufp->fullIData(oldp+12,(vlSelf->SingleCycleCPU__DOT__imm_EX),32);
    bufp->fullIData(oldp+13,(((0U == (IData)(vlSelf->SingleCycleCPU__DOT__ALUCtl))
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
                                                   ? 1U
                                                   : 0U)
                                               : 0U)))))),32);
    bufp->fullBit(oldp+14,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 6U))));
    bufp->fullBit(oldp+15,(vlSelf->SingleCycleCPU__DOT__memRead_EX));
    bufp->fullBit(oldp+16,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 2U))));
    bufp->fullBit(oldp+17,(vlSelf->SingleCycleCPU__DOT__memWrite_EX));
    bufp->fullBit(oldp+18,(vlSelf->SingleCycleCPU__DOT__memWrite_MEM));
    bufp->fullBit(oldp+19,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 5U))));
    bufp->fullBit(oldp+20,(vlSelf->SingleCycleCPU__DOT__memtoReg_EX));
    bufp->fullBit(oldp+21,(vlSelf->SingleCycleCPU__DOT__memtoReg_MEM));
    bufp->fullBit(oldp+22,((1U & (IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl))));
    bufp->fullBit(oldp+23,(vlSelf->SingleCycleCPU__DOT__regWrite_EX));
    bufp->fullBit(oldp+24,(vlSelf->SingleCycleCPU__DOT__regWrite_MEM));
    bufp->fullCData(oldp+25,((3U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                    >> 3U))),2);
    bufp->fullCData(oldp+26,(vlSelf->SingleCycleCPU__DOT__ALUOp_EX),2);
    bufp->fullBit(oldp+27,((1U & ((IData)(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl) 
                                  >> 1U))));
    bufp->fullBit(oldp+28,(vlSelf->SingleCycleCPU__DOT__SelB_EX));
    bufp->fullCData(oldp+29,((0x7fU & vlSelf->SingleCycleCPU__DOT__inst_ID)),7);
    bufp->fullCData(oldp+30,(vlSelf->SingleCycleCPU__DOT__m_Control__DOT__ctrl),7);
    bufp->fullBit(oldp+31,((1U & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                  >> 0x1eU))));
    bufp->fullCData(oldp+32,((7U & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+33,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                       >> 7U))),5);
    bufp->fullCData(oldp+34,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+35,((0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                       >> 0x14U))),5);
    bufp->fullIData(oldp+36,(vlSelf->SingleCycleCPU__DOT__PC),32);
    bufp->fullIData(oldp+37,(((IData)(4U) + vlSelf->SingleCycleCPU__DOT__PC)),32);
    bufp->fullIData(oldp+38,(((0x80U <= vlSelf->SingleCycleCPU__DOT__PC)
                               ? 0U : ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                        [(0x7fU & vlSelf->SingleCycleCPU__DOT__PC)] 
                                        << 0x18U) | 
                                       ((vlSelf->SingleCycleCPU__DOT__m_InstMem__DOT__insts
                                         [(0x7fU & 
                                           ((IData)(1U) 
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
    bufp->fullIData(oldp+39,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[0]),32);
    bufp->fullIData(oldp+40,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[1]),32);
    bufp->fullIData(oldp+41,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[2]),32);
    bufp->fullIData(oldp+42,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[3]),32);
    bufp->fullIData(oldp+43,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[4]),32);
    bufp->fullIData(oldp+44,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[5]),32);
    bufp->fullIData(oldp+45,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[6]),32);
    bufp->fullIData(oldp+46,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[7]),32);
    bufp->fullIData(oldp+47,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[8]),32);
    bufp->fullIData(oldp+48,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[9]),32);
    bufp->fullIData(oldp+49,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[10]),32);
    bufp->fullIData(oldp+50,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[11]),32);
    bufp->fullIData(oldp+51,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[12]),32);
    bufp->fullIData(oldp+52,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[13]),32);
    bufp->fullIData(oldp+53,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[14]),32);
    bufp->fullIData(oldp+54,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[15]),32);
    bufp->fullIData(oldp+55,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[16]),32);
    bufp->fullIData(oldp+56,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[17]),32);
    bufp->fullIData(oldp+57,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[18]),32);
    bufp->fullIData(oldp+58,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[19]),32);
    bufp->fullIData(oldp+59,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[20]),32);
    bufp->fullIData(oldp+60,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[21]),32);
    bufp->fullIData(oldp+61,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[22]),32);
    bufp->fullIData(oldp+62,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[23]),32);
    bufp->fullIData(oldp+63,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[24]),32);
    bufp->fullIData(oldp+64,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[25]),32);
    bufp->fullIData(oldp+65,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[26]),32);
    bufp->fullIData(oldp+66,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[27]),32);
    bufp->fullIData(oldp+67,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[28]),32);
    bufp->fullIData(oldp+68,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[29]),32);
    bufp->fullIData(oldp+69,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[30]),32);
    bufp->fullIData(oldp+70,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs[31]),32);
    bufp->fullIData(oldp+71,(((IData)(vlSelf->SingleCycleCPU__DOT__memtoReg_WB)
                               ? vlSelf->SingleCycleCPU__DOT__readData_WB
                               : vlSelf->SingleCycleCPU__DOT__ALUOut_WB)),32);
    bufp->fullCData(oldp+72,(vlSelf->SingleCycleCPU__DOT__writeReg_WB),5);
    bufp->fullIData(oldp+73,(vlSelf->SingleCycleCPU__DOT__ALUOut_MEM),32);
    bufp->fullIData(oldp+74,(vlSelf->SingleCycleCPU__DOT__ALUOut_WB),32);
    bufp->fullIData(oldp+75,(vlSelf->SingleCycleCPU__DOT__readData_WB),32);
    bufp->fullBit(oldp+76,(vlSelf->SingleCycleCPU__DOT__memRead_MEM));
    bufp->fullBit(oldp+77,(vlSelf->SingleCycleCPU__DOT__memtoReg_WB));
    bufp->fullBit(oldp+78,(vlSelf->SingleCycleCPU__DOT__regWrite_WB));
    bufp->fullBit(oldp+79,(vlSelf->clk));
    bufp->fullBit(oldp+80,(vlSelf->start));
    bufp->fullIData(oldp+81,(vlSelf->r[0]),32);
    bufp->fullIData(oldp+82,(vlSelf->r[1]),32);
    bufp->fullIData(oldp+83,(vlSelf->r[2]),32);
    bufp->fullIData(oldp+84,(vlSelf->r[3]),32);
    bufp->fullIData(oldp+85,(vlSelf->r[4]),32);
    bufp->fullIData(oldp+86,(vlSelf->r[5]),32);
    bufp->fullIData(oldp+87,(vlSelf->r[6]),32);
    bufp->fullIData(oldp+88,(vlSelf->r[7]),32);
    bufp->fullIData(oldp+89,(vlSelf->r[8]),32);
    bufp->fullIData(oldp+90,(vlSelf->r[9]),32);
    bufp->fullIData(oldp+91,(vlSelf->r[10]),32);
    bufp->fullIData(oldp+92,(vlSelf->r[11]),32);
    bufp->fullIData(oldp+93,(vlSelf->r[12]),32);
    bufp->fullIData(oldp+94,(vlSelf->r[13]),32);
    bufp->fullIData(oldp+95,(vlSelf->r[14]),32);
    bufp->fullIData(oldp+96,(vlSelf->r[15]),32);
    bufp->fullIData(oldp+97,(vlSelf->r[16]),32);
    bufp->fullIData(oldp+98,(vlSelf->r[17]),32);
    bufp->fullIData(oldp+99,(vlSelf->r[18]),32);
    bufp->fullIData(oldp+100,(vlSelf->r[19]),32);
    bufp->fullIData(oldp+101,(vlSelf->r[20]),32);
    bufp->fullIData(oldp+102,(vlSelf->r[21]),32);
    bufp->fullIData(oldp+103,(vlSelf->r[22]),32);
    bufp->fullIData(oldp+104,(vlSelf->r[23]),32);
    bufp->fullIData(oldp+105,(vlSelf->r[24]),32);
    bufp->fullIData(oldp+106,(vlSelf->r[25]),32);
    bufp->fullIData(oldp+107,(vlSelf->r[26]),32);
    bufp->fullIData(oldp+108,(vlSelf->r[27]),32);
    bufp->fullIData(oldp+109,(vlSelf->r[28]),32);
    bufp->fullIData(oldp+110,(vlSelf->r[29]),32);
    bufp->fullIData(oldp+111,(vlSelf->r[30]),32);
    bufp->fullIData(oldp+112,(vlSelf->r[31]),32);
    bufp->fullIData(oldp+113,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                         >> 0xfU))]),32);
    bufp->fullIData(oldp+114,(vlSelf->SingleCycleCPU__DOT__m_Register__DOT__regs
                              [(0x1fU & (vlSelf->SingleCycleCPU__DOT__inst_ID 
                                         >> 0x14U))]),32);
    bufp->fullIData(oldp+115,(vlSelf->SingleCycleCPU__DOT__readData_MEM),32);
    bufp->fullIData(oldp+116,(4U),32);
    bufp->fullIData(oldp+117,(0x20U),32);
}
