// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vcounter.h for the primary calling header

#include "Vcounter__pch.h"

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__0(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__1(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__2(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__3(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__4(Vcounter___024root* vlSelf);
VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__5(Vcounter___024root* vlSelf);

void Vcounter___024root___eval_initial(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    {
        // Inlined CFunc: _eval_initial__TOP
        vlSymsp->_vm_contextp__->dumpfile("counter.vcd"s);
        vlSymsp->_traceDumpOpen();
    }
    Vcounter___024root___eval_initial__TOP__Vtiming__0(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__1(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__2(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__3(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__4(vlSelf);
    Vcounter___024root___eval_initial__TOP__Vtiming__5(vlSelf);
}

void Vcounter___024root___eval_sample(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_sample\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__ico(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG

bool Vcounter___024root___eval_ico(Vcounter___024root* vlSelf, CData/*0:0*/ firstIteration) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_ico\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VicoTriggered[0U] = ((0xfffffffffffffffeULL 
                                      & vlSelfRef.__VicoTriggered[0U]) 
                                     | (IData)((IData)(firstIteration)));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter___024root___dump_triggers__ico(vlSelfRef.__VicoTriggered, "ico"s);
    }
#endif
    return (0U);
}

void Vcounter___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in);
#ifdef VL_DEBUG
VL_ATTR_COLD void Vcounter___024root___dump_triggers__act(const VlUnpacked<QData/*63:0*/, 1> &triggers, const std::string &tag);
#endif  // VL_DEBUG
bool Vcounter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in);

bool Vcounter___024root___eval_act(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_act\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VactExecute;
    // Body
    {
        // Inlined CFunc: _eval_triggers_vec__act
        vlSelfRef.__VactTriggered[0U] = (QData)((IData)(
                                                        ((vlSelfRef.__VdlySched.awaitingCurrentTime() 
                                                          << 4U) 
                                                         | ((((IData)(vlSelfRef.eight_bit_counter_tb__DOT__dut__DOT__count) 
                                                              != (IData)(vlSelfRef.__Vtrigprevexpr___TOP__eight_bit_counter_tb__DOT__dut__DOT__count__0)) 
                                                             << 2U) 
                                                            | ((((IData)(vlSelfRef.eight_bit_counter_tb__DOT__rst) 
                                                                 & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__eight_bit_counter_tb__DOT__rst__0))) 
                                                                << 1U) 
                                                               | ((IData)(vlSelfRef.eight_bit_counter_tb__DOT__clk) 
                                                                  & (~ (IData)(vlSelfRef.__Vtrigprevexpr___TOP__eight_bit_counter_tb__DOT__clk__0))))))));
        vlSelfRef.__Vtrigprevexpr___TOP__eight_bit_counter_tb__DOT__clk__0 
            = vlSelfRef.eight_bit_counter_tb__DOT__clk;
        vlSelfRef.__Vtrigprevexpr___TOP__eight_bit_counter_tb__DOT__rst__0 
            = vlSelfRef.eight_bit_counter_tb__DOT__rst;
        vlSelfRef.__Vtrigprevexpr___TOP__eight_bit_counter_tb__DOT__dut__DOT__count__0 
            = vlSelfRef.eight_bit_counter_tb__DOT__dut__DOT__count;
    }
    Vcounter___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VactTriggered, vlSelfRef.__VactTriggeredAcc);
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        Vcounter___024root___dump_triggers__act(vlSelfRef.__VactTriggered, "act"s);
    }
#endif
    Vcounter___024root___trigger_orInto__act_vec_vec(vlSelfRef.__VnbaTriggered, vlSelfRef.__VactTriggered);
    __VactExecute = Vcounter___024root___trigger_anySet__act(vlSelfRef.__VactTriggered);
    if (__VactExecute) {
        vlSelfRef.__VactTriggeredAcc.fill(0ULL);
        {
            // Inlined CFunc: _timing_resume
            if ((0x0000000000000010ULL & vlSelfRef.__VactTriggered[0U])) {
                vlSelfRef.__VdlySched.resume();
            }
        }
    }
    return (__VactExecute);
}

bool Vcounter___024root___eval_inact(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_inact\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VinactExecute;
    // Body
    __VinactExecute = vlSelfRef.__VdlySched.awaitingZeroDelay();
    if (__VinactExecute) {
        VL_FATAL_MT("counter_tb.v", 3, "", "ZERODLY: Design Verilated with '--no-sched-zero-delay', but #0 delay executed at runtime");
    }
    return (__VinactExecute);
}

void Vcounter___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out);

bool Vcounter___024root___eval_nba(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_nba\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Locals
    CData/*0:0*/ __VnbaExecute;
    // Body
    __VnbaExecute = Vcounter___024root___trigger_anySet__act(vlSelfRef.__VnbaTriggered);
    if (__VnbaExecute) {
        {
            // Inlined CFunc: _eval_body__nba
            if (VL_UNLIKELY(((4ULL & vlSelfRef.__VnbaTriggered[0U])))) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__0
                    VL_WRITEF_NX("cnt is \n%d\n",1, '#',8,vlSelfRef.eight_bit_counter_tb__DOT__dut__DOT__count);
                }
            }
            if ((3ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__1
                    vlSelfRef.eight_bit_counter_tb__DOT__dut__DOT__count 
                        = ((IData)(vlSelfRef.eight_bit_counter_tb__DOT__rst)
                            ? 0U : (0x000000ffU & ((IData)(vlSelfRef.eight_bit_counter_tb__DOT__set_val_ena)
                                                    ? (IData)(vlSelfRef.eight_bit_counter_tb__DOT__val)
                                                    : 
                                                   ((IData)(1U) 
                                                    + (IData)(vlSelfRef.eight_bit_counter_tb__DOT__dut__DOT__count)))));
                }
            }
            if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__2
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__out_ena__v0) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__out_ena__v0 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__out_ena = 0U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__out_ena__v1) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__out_ena__v1 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__out_ena = 1U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__clk__v0) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__clk__v0 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__clk = 0U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__clk__v1) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__clk__v1 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__clk 
                            = vlSelfRef.__VdlyVal__eight_bit_counter_tb__DOT__clk__v1;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__rst__v0) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__rst__v0 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__rst = 0U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__rst__v1) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__rst__v1 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__rst = 1U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__val__v0) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__val__v0 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__val = 0U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__val__v1) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__val__v1 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__val = 5U;
                    }
                }
                vlSelfRef.__Vm_traceActivity[1U] = 1U;
            }
            if ((0x0000000000000018ULL & vlSelfRef.__VnbaTriggered[0U])) {
                {
                    // Inlined CFunc: _nba_sequent__TOP__3
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v0) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v0 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__set_val_ena = 0U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v1) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v1 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__set_val_ena = 1U;
                    }
                    if (vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v2) {
                        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v2 = 0U;
                        vlSelfRef.eight_bit_counter_tb__DOT__set_val_ena = 0U;
                    }
                }
            }
        }
        Vcounter___024root___trigger_clear__act(vlSelfRef.__VnbaTriggered);
    }
    return (__VnbaExecute);
}

bool Vcounter___024root___eval_obs(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_obs\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

bool Vcounter___024root___eval_react(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_react\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    return (0U);
}

void Vcounter___024root___eval_postponed(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_postponed\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__0(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__0\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__clk__v0 = 1U;
    while (true) {
        co_await vlSelfRef.__VdlySched.delay(0x0000000000000032ULL, 
                                             nullptr, 
                                             "counter_tb.v", 
                                             22);
        vlSelfRef.__VdlyVal__eight_bit_counter_tb__DOT__clk__v1 
            = (1U & (~ (IData)(vlSelfRef.eight_bit_counter_tb__DOT__clk)));
        vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__clk__v1 = 1U;
    }
    co_return;
}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__1(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__1\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001f4ULL, 
                                         nullptr, "counter_tb.v", 
                                         26);
    VL_FINISH_MT("counter_tb.v", 27, "");
    co_return;
}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__2(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__2\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__rst__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000001a4ULL, 
                                         nullptr, "counter_tb.v", 
                                         32);
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__rst__v1 = 1U;
    co_return;
}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__3(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__3\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x00000000000000dcULL, 
                                         nullptr, "counter_tb.v", 
                                         38);
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v1 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000032ULL, 
                                         nullptr, "counter_tb.v", 
                                         40);
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__set_val_ena__v2 = 1U;
    co_return;
}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__4(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__4\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__out_ena__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000046ULL, 
                                         nullptr, "counter_tb.v", 
                                         46);
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__out_ena__v1 = 1U;
    co_return;
}

VlCoroutine Vcounter___024root___eval_initial__TOP__Vtiming__5(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_initial__TOP__Vtiming__5\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
    // Body
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__val__v0 = 1U;
    co_await vlSelfRef.__VdlySched.delay(0x0000000000000078ULL, 
                                         nullptr, "counter_tb.v", 
                                         52);
    vlSelfRef.__VdlySet__eight_bit_counter_tb__DOT__val__v1 = 1U;
    co_return;
}

bool Vcounter___024root___trigger_anySet__ico(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___trigger_anySet__ico\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

bool Vcounter___024root___trigger_anySet__act(const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___trigger_anySet__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        if (in[n]) {
            return (1U);
        }
        n = ((IData)(1U) + n);
    } while ((1U > n));
    return (0U);
}

void Vcounter___024root___trigger_orInto__act_vec_vec(VlUnpacked<QData/*63:0*/, 1> &out, const VlUnpacked<QData/*63:0*/, 1> &in) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___trigger_orInto__act_vec_vec\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = (out[n] | in[n]);
        n = ((IData)(1U) + n);
    } while ((0U >= n));
}

void Vcounter___024root___trigger_clear__act(VlUnpacked<QData/*63:0*/, 1> &out) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___trigger_clear__act\n"); );
    // Locals
    IData/*31:0*/ n;
    // Body
    n = 0U;
    do {
        out[n] = 0ULL;
        n = ((IData)(1U) + n);
    } while ((1U > n));
}

#ifdef VL_DEBUG
void Vcounter___024root___eval_debug_assertions(Vcounter___024root* vlSelf) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vcounter___024root___eval_debug_assertions\n"); );
    Vcounter__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    auto& vlSelfRef = std::ref(*vlSelf).get();
}
#endif  // VL_DEBUG
