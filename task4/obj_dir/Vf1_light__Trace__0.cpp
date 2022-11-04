// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_light__Syms.h"


void Vf1_light___024root__trace_chg_sub_0(Vf1_light___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vf1_light___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_chg_top_0\n"); );
    // Init
    Vf1_light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_light___024root*>(voidSelf);
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vf1_light___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vf1_light___024root__trace_chg_sub_0(Vf1_light___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[1U])) {
        bufp->chgBit(oldp+0,(vlSelf->top__DOT__cmd_seq));
        bufp->chgBit(oldp+1,(vlSelf->top__DOT__cmd_delay));
        bufp->chgSData(oldp+2,(vlSelf->top__DOT__myFiniteStateMachine__DOT__current_state),9);
    }
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[2U])) {
        bufp->chgBit(oldp+3,(((0U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                              & ((1U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                                 & (2U == vlSelf->top__DOT__myDelay__DOT__current_state)))));
        bufp->chgSData(oldp+4,(vlSelf->top__DOT__myClktick__DOT__count),16);
        bufp->chgBit(oldp+5,(vlSelf->top__DOT__myClktick__DOT__tick));
        bufp->chgSData(oldp+6,(vlSelf->top__DOT__myDelay__DOT__count),10);
        bufp->chgIData(oldp+7,(vlSelf->top__DOT__myDelay__DOT__current_state),32);
    }
    bufp->chgBit(oldp+8,(vlSelf->clk));
    bufp->chgBit(oldp+9,(vlSelf->rst));
    bufp->chgBit(oldp+10,(vlSelf->trigger));
    bufp->chgCData(oldp+11,(vlSelf->n),5);
    bufp->chgCData(oldp+12,(vlSelf->data_out),8);
    bufp->chgBit(oldp+13,(vlSelf->top__DOT__mux_o));
    bufp->chgCData(oldp+14,(vlSelf->top__DOT__myLfsr__DOT__sreg),7);
    bufp->chgSData(oldp+15,(vlSelf->n),16);
    bufp->chgSData(oldp+16,(vlSelf->top__DOT__myLfsr__DOT__sreg),10);
    bufp->chgIData(oldp+17,(((0U == vlSelf->top__DOT__myDelay__DOT__current_state)
                              ? ((IData)(vlSelf->top__DOT__cmd_delay)
                                  ? 1U : vlSelf->top__DOT__myDelay__DOT__current_state)
                              : ((1U == vlSelf->top__DOT__myDelay__DOT__current_state)
                                  ? ((0U == (IData)(vlSelf->top__DOT__myDelay__DOT__count))
                                      ? 2U : vlSelf->top__DOT__myDelay__DOT__current_state)
                                  : ((2U == vlSelf->top__DOT__myDelay__DOT__current_state)
                                      ? ((IData)(vlSelf->top__DOT__cmd_delay)
                                          ? 3U : 0U)
                                      : ((3U == vlSelf->top__DOT__myDelay__DOT__current_state)
                                          ? ((IData)(vlSelf->top__DOT__cmd_delay)
                                              ? vlSelf->top__DOT__myDelay__DOT__current_state
                                              : 0U)
                                          : 0U))))),32);
    bufp->chgSData(oldp+18,(vlSelf->top__DOT__myFiniteStateMachine__DOT__next_state),9);
}

void Vf1_light___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_cleanup\n"); );
    // Init
    Vf1_light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_light___024root*>(voidSelf);
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
}
