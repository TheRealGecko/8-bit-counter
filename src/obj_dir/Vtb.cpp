// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vtb__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

Vtb::Vtb(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vtb__Syms(contextp(), _vcname__, this)}
    , m_evalLoop{*this, /*convergeLimit:*/ 10000}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
    contextp()->traceBaseModelCbAdd(
        [this](VerilatedTraceBaseC* tfp, int levels, int options) { traceBaseModel(tfp, levels, options); });
}

Vtb::Vtb(const char* _vcname__)
    : Vtb(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vtb::~Vtb() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vtb___024root___eval_debug_assertions(Vtb___024root* vlSelf);
#endif  // VL_DEBUG
VL_ATTR_COLD void Vtb___024root___eval_static(Vtb___024root* vlSelf);
void Vtb___024root___eval_initial(Vtb___024root* vlSelf);
VL_ATTR_COLD bool Vtb___024root___eval_stl(Vtb___024root* vlSelf, CData/*0:0*/ firstIteration);
void Vtb___024root___eval_sample(Vtb___024root* vlSelf);
bool Vtb___024root___eval_ico(Vtb___024root* vlSelf, CData/*0:0*/ firstIteration);
bool Vtb___024root___eval_act(Vtb___024root* vlSelf);
bool Vtb___024root___eval_inact(Vtb___024root* vlSelf);
bool Vtb___024root___eval_nba(Vtb___024root* vlSelf);
bool Vtb___024root___eval_obs(Vtb___024root* vlSelf);
bool Vtb___024root___eval_react(Vtb___024root* vlSelf);
void Vtb___024root___eval_postponed(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_final(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__stl(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__ico(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__act(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__nba(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__obs(Vtb___024root* vlSelf);
VL_ATTR_COLD void Vtb___024root___eval_dump_triggers__react(Vtb___024root* vlSelf);

void Vtb::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vtb::eval_step\n"); );
    m_evalLoop.eval();
}

void Vtb::evalBegin() {
#ifdef VL_DEBUG
    // Debug assertions
    Vtb___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
}

void Vtb::evalEnd() {
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
    vlSymsp->TOP.__VdlySched.cleanupForevered();
}

void Vtb::evalStatic() {
    Vtb___024root___eval_static(&(vlSymsp->TOP));
}

void Vtb::evalInitial() {
    Vtb___024root___eval_initial(&(vlSymsp->TOP));
}

bool Vtb::evalStl(bool firstIteration) {
    return Vtb___024root___eval_stl(&(vlSymsp->TOP), firstIteration);
}

void Vtb::evalSample() {
    Vtb___024root___eval_sample(&(vlSymsp->TOP));
}

bool Vtb::evalIco(bool firstIteration) {
    return Vtb___024root___eval_ico(&(vlSymsp->TOP), firstIteration);
}

bool Vtb::evalAct() {
    return Vtb___024root___eval_act(&(vlSymsp->TOP));
}

bool Vtb::evalInact() {
    return Vtb___024root___eval_inact(&(vlSymsp->TOP));
}

bool Vtb::evalNba() {
    return Vtb___024root___eval_nba(&(vlSymsp->TOP));
}

bool Vtb::evalObs() {
    return Vtb___024root___eval_obs(&(vlSymsp->TOP));
}

bool Vtb::evalReact() {
    return Vtb___024root___eval_react(&(vlSymsp->TOP));
}

void Vtb::evalPostponed() {
    Vtb___024root___eval_postponed(&(vlSymsp->TOP));
}

void Vtb::evalFinal() {
    Vtb___024root___eval_final(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb::dumpTriggersStl() {
    Vtb___024root___eval_dump_triggers__stl(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb::dumpTriggersIco() {
    Vtb___024root___eval_dump_triggers__ico(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb::dumpTriggersAct() {
    Vtb___024root___eval_dump_triggers__act(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb::dumpTriggersNba() {
    Vtb___024root___eval_dump_triggers__nba(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb::dumpTriggersObs() {
    Vtb___024root___eval_dump_triggers__obs(&(vlSymsp->TOP));
}

VL_ATTR_COLD void Vtb::dumpTriggersReact() {
    Vtb___024root___eval_dump_triggers__react(&(vlSymsp->TOP));
}

void Vtb::eval_end_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+eval_end_step Vtb::eval_end_step\n"); );
#ifdef VM_TRACE
    // Tracing
    if (VL_UNLIKELY(vlSymsp->__Vm_dumping)) vlSymsp->_traceDump();
#endif  // VM_TRACE
}

//============================================================
// Events and timing
bool Vtb::eventsPending() { return !vlSymsp->TOP.__VdlySched.empty() && !contextp()->gotFinish(); }

uint64_t Vtb::nextTimeSlot() { return vlSymsp->TOP.__VdlySched.nextTimeSlot(); }

//============================================================
// Utilities

const char* Vtb::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

VL_ATTR_COLD void Vtb::final() {
    contextp()->executingFinal(true);
    evalFinal();
    contextp()->executingFinal(false);
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vtb::hierName() const { return vlSymsp->name(); }
const char* Vtb::modelName() const { return "Vtb"; }
unsigned Vtb::threads() const { return 1; }
void Vtb::prepareClone() const { contextp()->prepareClone(); }
void Vtb::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vtb::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false}};
};

//============================================================
// Trace configuration

void Vtb___024root__trace_decl_types(VerilatedVcd* tracep);

void Vtb___024root__trace_init_top(Vtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vtb___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtb___024root*>(voidSelf);
    Vtb__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(vlSymsp->name(), VerilatedTracePrefixType::SCOPE_MODULE);
    Vtb___024root__trace_decl_types(tracep);
    Vtb___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vtb___024root__trace_register(Vtb___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void Vtb::traceBaseModel(VerilatedTraceBaseC* tfp, int levels, int options) {
    (void)levels; (void)options;
    VerilatedVcdC* const stfp = dynamic_cast<VerilatedVcdC*>(tfp);
    if (VL_UNLIKELY(!stfp)) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vtb::trace()' called on non-VerilatedVcdC object;"
            " use --trace-fst with VerilatedFst object, and --trace-vcd with VerilatedVcd object");
    }
    stfp->spTrace()->addModel(this);
    stfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP), name(), false, 6);
    Vtb___024root__trace_register(&(vlSymsp->TOP), stfp->spTrace());
}
