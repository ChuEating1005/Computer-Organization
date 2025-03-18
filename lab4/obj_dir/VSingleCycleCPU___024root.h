// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VSingleCycleCPU.h for the primary calling header

#ifndef VERILATED_VSINGLECYCLECPU___024ROOT_H_
#define VERILATED_VSINGLECYCLECPU___024ROOT_H_  // guard

#include "verilated.h"


class VSingleCycleCPU__Syms;

class alignas(VL_CACHE_LINE_BYTES) VSingleCycleCPU___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    // Anonymous structures to workaround compiler member-count bugs
    struct {
        VL_IN8(clk,0,0);
        VL_IN8(start,0,0);
        CData/*0:0*/ SingleCycleCPU__DOT__memRead_MEM;
        CData/*0:0*/ SingleCycleCPU__DOT__stall_ID;
        CData/*0:0*/ SingleCycleCPU__DOT__memRead_EX;
        CData/*0:0*/ SingleCycleCPU__DOT__memWrite_EX;
        CData/*0:0*/ SingleCycleCPU__DOT__regWrite_EX;
        CData/*0:0*/ SingleCycleCPU__DOT__SelA_EX;
        CData/*0:0*/ SingleCycleCPU__DOT__SelB_EX;
        CData/*0:0*/ SingleCycleCPU__DOT__funct7;
        CData/*0:0*/ SingleCycleCPU__DOT__BrEq;
        CData/*0:0*/ SingleCycleCPU__DOT__BrLt;
        CData/*0:0*/ SingleCycleCPU__DOT__PCsel;
        CData/*1:0*/ SingleCycleCPU__DOT__memtoReg_EX;
        CData/*1:0*/ SingleCycleCPU__DOT__ALUOp_EX;
        CData/*1:0*/ SingleCycleCPU__DOT__ForwardA;
        CData/*1:0*/ SingleCycleCPU__DOT__ForwardB;
        CData/*2:0*/ SingleCycleCPU__DOT__funct3;
        CData/*3:0*/ SingleCycleCPU__DOT__ALUCtl;
        CData/*4:0*/ SingleCycleCPU__DOT__writeReg_EX;
        CData/*4:0*/ SingleCycleCPU__DOT__rs1Addr_EX;
        CData/*4:0*/ SingleCycleCPU__DOT__rs2Addr_EX;
        CData/*6:0*/ SingleCycleCPU__DOT__opcode_EX;
        CData/*0:0*/ SingleCycleCPU__DOT__memWrite_MEM;
        CData/*0:0*/ SingleCycleCPU__DOT__regWrite_MEM;
        CData/*1:0*/ SingleCycleCPU__DOT__memtoReg_MEM;
        CData/*4:0*/ SingleCycleCPU__DOT__writeReg_MEM;
        CData/*0:0*/ SingleCycleCPU__DOT__regWrite_WB;
        CData/*1:0*/ SingleCycleCPU__DOT__memtoReg_WB;
        CData/*4:0*/ SingleCycleCPU__DOT__writeReg_WB;
        CData/*0:0*/ __Vdly__SingleCycleCPU__DOT__memRead_MEM;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v0;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v1;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v2;
        CData/*6:0*/ __Vdlyvdim0__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*7:0*/ __Vdlyvval__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v3;
        CData/*0:0*/ __Vdlyvset__SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory__v4;
        CData/*0:0*/ __Vdly__SingleCycleCPU__DOT__regWrite_WB;
        CData/*4:0*/ __Vdly__SingleCycleCPU__DOT__writeReg_WB;
        CData/*0:0*/ __VstlFirstIteration;
        CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__start__0;
        CData/*0:0*/ __Vtrigprevexpr___TOP__SingleCycleCPU__DOT__memRead_MEM__0;
        CData/*0:0*/ __VactDidInit;
        CData/*0:0*/ __VactContinue;
        SData/*8:0*/ SingleCycleCPU__DOT__m_Control__DOT__ctrl;
        IData/*31:0*/ SingleCycleCPU__DOT__Mux_PC_out;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_IF;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_ID;
        IData/*31:0*/ SingleCycleCPU__DOT__inst_ID;
        IData/*31:0*/ SingleCycleCPU__DOT__imm_ID;
        IData/*31:0*/ SingleCycleCPU__DOT__rs1_EX;
        IData/*31:0*/ SingleCycleCPU__DOT__rs2_EX;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_EX;
        IData/*31:0*/ SingleCycleCPU__DOT__imm_EX;
        IData/*31:0*/ SingleCycleCPU__DOT__MuxForwardA_out;
        IData/*31:0*/ SingleCycleCPU__DOT__MuxForwardB_out;
        IData/*31:0*/ SingleCycleCPU__DOT__MuxSelA_out;
        IData/*31:0*/ SingleCycleCPU__DOT__MuxSelB_out;
        IData/*31:0*/ SingleCycleCPU__DOT__ALUOut_EX;
    };
    struct {
        IData/*31:0*/ SingleCycleCPU__DOT__rs2_MEM;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_MEM;
        IData/*31:0*/ SingleCycleCPU__DOT__ALUOut_MEM;
        IData/*31:0*/ SingleCycleCPU__DOT__readData_MEM;
        IData/*31:0*/ SingleCycleCPU__DOT__ALUOut_WB;
        IData/*31:0*/ SingleCycleCPU__DOT__readData_WB;
        IData/*31:0*/ SingleCycleCPU__DOT__PC_WB;
        IData/*31:0*/ SingleCycleCPU__DOT__writeData;
        IData/*31:0*/ __Vdly__SingleCycleCPU__DOT__ALUOut_MEM;
        IData/*31:0*/ __Vtrigprevexpr___TOP__SingleCycleCPU__DOT__ALUOut_MEM__0;
        IData/*31:0*/ __VactIterCount;
        VL_OUT(r[32],31,0);
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_InstMem__DOT__insts;
        VlUnpacked<IData/*31:0*/, 32> SingleCycleCPU__DOT__m_Register__DOT__regs;
        VlUnpacked<CData/*7:0*/, 128> SingleCycleCPU__DOT__m_DataMemory__DOT__data_memory;
        VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    };
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<3> __VactTriggered;
    VlTriggerVec<3> __VnbaTriggered;

    // INTERNAL VARIABLES
    VSingleCycleCPU__Syms* const vlSymsp;

    // CONSTRUCTORS
    VSingleCycleCPU___024root(VSingleCycleCPU__Syms* symsp, const char* v__name);
    ~VSingleCycleCPU___024root();
    VL_UNCOPYABLE(VSingleCycleCPU___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
