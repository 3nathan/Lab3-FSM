// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vclktick__Syms.h"


void Vclktick___024root__trace_chg_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void Vclktick___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_chg_top_0\n"); );
    // Init
    Vclktick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclktick___024root*>(voidSelf);
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    Vclktick___024root__trace_chg_sub_0((&vlSymsp->TOP), bufp);
}

void Vclktick___024root__trace_chg_sub_0(Vclktick___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_chg_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    bufp->chgBit(oldp+0,(vlSelf->clk));
    bufp->chgBit(oldp+1,(vlSelf->rst));
    bufp->chgBit(oldp+2,(vlSelf->en));
    bufp->chgBit(oldp+3,(vlSelf->trigger));
    bufp->chgSData(oldp+4,(vlSelf->N),16);
    bufp->chgCData(oldp+5,(vlSelf->data_out),8);
    bufp->chgSData(oldp+6,(vlSelf->clktick__DOT__count),16);
    bufp->chgBit(oldp+7,(vlSelf->clktick__DOT__tick));
    bufp->chgSData(oldp+8,(vlSelf->clktick__DOT__myF1StateMachine__DOT__current_state),9);
    bufp->chgSData(oldp+9,(vlSelf->clktick__DOT__myF1StateMachine__DOT__next_state),9);
}

void Vclktick___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root__trace_cleanup\n"); );
    // Init
    Vclktick___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vclktick___024root*>(voidSelf);
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VlUnpacked<CData/*0:0*/, 1> __Vm_traceActivity;
    // Body
    vlSymsp->__Vm_activity = false;
    __Vm_traceActivity[0U] = 0U;
}
