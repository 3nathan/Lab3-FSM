// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vclktick.h for the primary calling header

#include "verilated.h"

#include "Vclktick___024root.h"

VL_INLINE_OPT void Vclktick___024root___sequent__TOP__0(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___sequent__TOP__0\n"); );
    // Init
    SData/*15:0*/ __Vdly__clktick__DOT__count;
    // Body
    __Vdly__clktick__DOT__count = vlSelf->clktick__DOT__count;
    if (vlSelf->rst) {
        vlSelf->clktick__DOT__tick = 0U;
        __Vdly__clktick__DOT__count = vlSelf->N;
    } else if (vlSelf->en) {
        if ((0U == (IData)(vlSelf->clktick__DOT__count))) {
            vlSelf->clktick__DOT__tick = 1U;
            __Vdly__clktick__DOT__count = vlSelf->N;
        } else {
            __Vdly__clktick__DOT__count = (0xffffU 
                                           & ((IData)(vlSelf->clktick__DOT__count) 
                                              - (IData)(1U)));
            vlSelf->clktick__DOT__tick = 0U;
        }
    }
    vlSelf->clktick__DOT__count = __Vdly__clktick__DOT__count;
}

extern const VlUnpacked<CData/*7:0*/, 512> Vclktick__ConstPool__TABLE_headd0a90_0;
extern const VlUnpacked<SData/*8:0*/, 1024> Vclktick__ConstPool__TABLE_h22a7becd_0;

VL_INLINE_OPT void Vclktick___024root___sequent__TOP__1(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___sequent__TOP__1\n"); );
    // Init
    SData/*9:0*/ __Vtableidx1;
    SData/*8:0*/ __Vtableidx2;
    // Body
    __Vtableidx2 = vlSelf->clktick__DOT__myF1StateMachine__DOT__current_state;
    vlSelf->data_out = Vclktick__ConstPool__TABLE_headd0a90_0
        [__Vtableidx2];
    vlSelf->clktick__DOT__myF1StateMachine__DOT__current_state 
        = ((IData)(vlSelf->rst) ? 0U : (IData)(vlSelf->clktick__DOT__myF1StateMachine__DOT__next_state));
    __Vtableidx1 = (((IData)(vlSelf->clktick__DOT__tick) 
                     << 9U) | (IData)(vlSelf->clktick__DOT__myF1StateMachine__DOT__current_state));
    vlSelf->clktick__DOT__myF1StateMachine__DOT__next_state 
        = Vclktick__ConstPool__TABLE_h22a7becd_0[__Vtableidx1];
}

void Vclktick___024root___eval(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval\n"); );
    // Body
    if (((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk)))) {
        Vclktick___024root___sequent__TOP__0(vlSelf);
    }
    if ((((IData)(vlSelf->clk) & (~ (IData)(vlSelf->__Vclklast__TOP__clk))) 
         | ((IData)(vlSelf->rst) & (~ (IData)(vlSelf->__Vclklast__TOP__rst))))) {
        Vclktick___024root___sequent__TOP__1(vlSelf);
    }
    // Final
    vlSelf->__Vclklast__TOP__clk = vlSelf->clk;
    vlSelf->__Vclklast__TOP__rst = vlSelf->rst;
}

#ifdef VL_DEBUG
void Vclktick___024root___eval_debug_assertions(Vclktick___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vclktick__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vclktick___024root___eval_debug_assertions\n"); );
    // Body
    if (VL_UNLIKELY((vlSelf->clk & 0xfeU))) {
        Verilated::overWidthError("clk");}
    if (VL_UNLIKELY((vlSelf->rst & 0xfeU))) {
        Verilated::overWidthError("rst");}
    if (VL_UNLIKELY((vlSelf->en & 0xfeU))) {
        Verilated::overWidthError("en");}
    if (VL_UNLIKELY((vlSelf->trigger & 0xfeU))) {
        Verilated::overWidthError("trigger");}
}
#endif  // VL_DEBUG
