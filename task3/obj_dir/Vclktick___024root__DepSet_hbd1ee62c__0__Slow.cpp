// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "verilated.h"

#include "Vclktick___024root.h"

extern const VlUnpacked<SData/*8:0*/, 1024> Vclktick__ConstPool__TABLE_h22a7becd_0;

VL_ATTR_COLD void Vclktick___024root___settle__TOP__0(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___settle__TOP__0\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    // Body
    __Vtableidx1 = (((IData)(vlSelf->clktick__DOT__tick) 
                     << 9U) | (IData)(vlSelf->clktick__DOT__myF1StateMachine__DOT__current_state));
    vlSelf->clktick__DOT__myF1StateMachine__DOT__next_state 
        = Vclktick__ConstPool__TABLE_h22a7becd_0[__Vtableidx1];
}

VL_ATTR_COLD void Vclktick___024root___eval_initial(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_initial\n"); );
    // Body
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

VL_ATTR_COLD void Vclktick___024root___eval_settle(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_settle\n"); );
    // Body
    Vclktick___024root___settle__TOP__0(vlSelf);
}

VL_ATTR_COLD void Vclktick___024root___final(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___final\n"); );
}

VL_ATTR_COLD void Vclktick___024root___ctor_var_reset(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___ctor_var_reset\n"); );
    // Body
    vlSelf->clk = VL_RAND_RESET_I(1);
    vlSelf->rst = VL_RAND_RESET_I(1);
    vlSelf->en = VL_RAND_RESET_I(1);
    vlSelf->trigger = VL_RAND_RESET_I(1);
    vlSelf->N = VL_RAND_RESET_I(16);
    vlSelf->data_out = VL_RAND_RESET_I(8);
    vlSelf->clktick__DOT__count = VL_RAND_RESET_I(16);
    vlSelf->clktick__DOT__tick = VL_RAND_RESET_I(1);
    vlSelf->clktick__DOT__myF1StateMachine__DOT__current_state = VL_RAND_RESET_I(9);
    vlSelf->clktick__DOT__myF1StateMachine__DOT__next_state = VL_RAND_RESET_I(9);
}
