// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VSingleCycleCPU__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VSingleCycleCPU::VSingleCycleCPU(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VSingleCycleCPU__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , start{vlSymsp->TOP.start}
    , r{vlSymsp->TOP.r}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VSingleCycleCPU::VSingleCycleCPU(const char* _vcname__)
    : VSingleCycleCPU(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VSingleCycleCPU::~VSingleCycleCPU() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VSingleCycleCPU___024root___eval_debug_assertions(VSingleCycleCPU___024root* vlSelf);
#endif  // VL_DEBUG
void VSingleCycleCPU___024root___eval_static(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___eval_initial(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___eval_settle(VSingleCycleCPU___024root* vlSelf);
void VSingleCycleCPU___024root___eval(VSingleCycleCPU___024root* vlSelf);

void VSingleCycleCPU::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VSingleCycleCPU::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VSingleCycleCPU___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VSingleCycleCPU___024root___eval_static(&(vlSymsp->TOP));
        VSingleCycleCPU___024root___eval_initial(&(vlSymsp->TOP));
        VSingleCycleCPU___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VSingleCycleCPU___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VSingleCycleCPU::eventsPending() { return false; }

uint64_t VSingleCycleCPU::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VSingleCycleCPU::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VSingleCycleCPU___024root___eval_final(VSingleCycleCPU___024root* vlSelf);

VL_ATTR_COLD void VSingleCycleCPU::final() {
    VSingleCycleCPU___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VSingleCycleCPU::hierName() const { return vlSymsp->name(); }
const char* VSingleCycleCPU::modelName() const { return "VSingleCycleCPU"; }
unsigned VSingleCycleCPU::threads() const { return 1; }
void VSingleCycleCPU::prepareClone() const { contextp()->prepareClone(); }
void VSingleCycleCPU::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VSingleCycleCPU::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VSingleCycleCPU___024root__trace_init_top(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VSingleCycleCPU___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VSingleCycleCPU___024root*>(voidSelf);
    VSingleCycleCPU__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VSingleCycleCPU___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VSingleCycleCPU___024root__trace_register(VSingleCycleCPU___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VSingleCycleCPU::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VSingleCycleCPU::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VSingleCycleCPU___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
