// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vf1_light__Syms.h"


VL_ATTR_COLD void Vf1_light___024root__trace_init_sub__TOP__0(Vf1_light___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst", false,-1);
    tracep->declBit(c+11,"trigger", false,-1);
    tracep->declBus(c+12,"n", false,-1, 4,0);
    tracep->declBus(c+13,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst", false,-1);
    tracep->declBit(c+11,"trigger", false,-1);
    tracep->declBus(c+12,"n", false,-1, 4,0);
    tracep->declBus(c+13,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBit(c+4,"mux_a", false,-1);
    tracep->declBit(c+20,"mux_b", false,-1);
    tracep->declBit(c+14,"mux_o", false,-1);
    tracep->declBit(c+21,"clktick_o", false,-1);
    tracep->declBit(c+22,"time_out", false,-1);
    tracep->declBus(c+15,"k", false,-1, 6,0);
    tracep->pushNamePrefix("myClktick ");
    tracep->declBus(c+23,"N_WIDTH", false,-1, 31,0);
    tracep->declBus(c+24,"D_WIDTH", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst", false,-1);
    tracep->declBit(c+1,"en", false,-1);
    tracep->declBus(c+16,"N", false,-1, 15,0);
    tracep->declBus(c+25,"data_out", false,-1, 7,0);
    tracep->declBus(c+5,"count", false,-1, 15,0);
    tracep->declBit(c+6,"tick", false,-1);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myDelay ");
    tracep->declBus(c+26,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst", false,-1);
    tracep->declBit(c+2,"trigger", false,-1);
    tracep->declBus(c+17,"n", false,-1, 9,0);
    tracep->declBit(c+4,"time_out", false,-1);
    tracep->declBus(c+7,"count", false,-1, 9,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+18,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myFiniteStateMachine ");
    tracep->declBus(c+24,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst", false,-1);
    tracep->declBit(c+14,"en", false,-1);
    tracep->declBit(c+11,"trigger", false,-1);
    tracep->declBus(c+13,"data_out", false,-1, 7,0);
    tracep->declBit(c+1,"cmd_seq", false,-1);
    tracep->declBit(c+2,"cmd_delay", false,-1);
    tracep->declBus(c+3,"current_state", false,-1, 8,0);
    tracep->declBus(c+19,"next_state", false,-1, 8,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myLfsr ");
    tracep->declBit(c+9,"clk", false,-1);
    tracep->declBit(c+10,"rst", false,-1);
    tracep->declBit(c+27,"en", false,-1);
    tracep->declBus(c+15,"data_out", false,-1, 6,0);
    tracep->declBus(c+15,"sreg", false,-1, 6,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("myMux ");
    tracep->declBit(c+4,"a", false,-1);
    tracep->declBit(c+20,"b", false,-1);
    tracep->declBit(c+1,"s", false,-1);
    tracep->declBit(c+14,"o", false,-1);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vf1_light___024root__trace_init_top(Vf1_light___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_init_top\n"); );
    // Body
    Vf1_light___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vf1_light___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_light___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vf1_light___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vf1_light___024root__trace_register(Vf1_light___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vf1_light___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vf1_light___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vf1_light___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vf1_light___024root__trace_full_sub_0(Vf1_light___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vf1_light___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_full_top_0\n"); );
    // Init
    Vf1_light___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vf1_light___024root*>(voidSelf);
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vf1_light___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vf1_light___024root__trace_full_sub_0(Vf1_light___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vf1_light__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vf1_light___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullBit(oldp+1,(vlSelf->top__DOT__cmd_seq));
    bufp->fullBit(oldp+2,(vlSelf->top__DOT__cmd_delay));
    bufp->fullSData(oldp+3,(vlSelf->top__DOT__myFiniteStateMachine__DOT__current_state),9);
    bufp->fullBit(oldp+4,(((0U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                           & ((1U != vlSelf->top__DOT__myDelay__DOT__current_state) 
                              & (2U == vlSelf->top__DOT__myDelay__DOT__current_state)))));
    bufp->fullSData(oldp+5,(vlSelf->top__DOT__myClktick__DOT__count),16);
    bufp->fullBit(oldp+6,(vlSelf->top__DOT__myClktick__DOT__tick));
    bufp->fullSData(oldp+7,(vlSelf->top__DOT__myDelay__DOT__count),10);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__myDelay__DOT__current_state),32);
    bufp->fullBit(oldp+9,(vlSelf->clk));
    bufp->fullBit(oldp+10,(vlSelf->rst));
    bufp->fullBit(oldp+11,(vlSelf->trigger));
    bufp->fullCData(oldp+12,(vlSelf->n),5);
    bufp->fullCData(oldp+13,(vlSelf->data_out),8);
    bufp->fullBit(oldp+14,(vlSelf->top__DOT__mux_o));
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__myLfsr__DOT__sreg),7);
    bufp->fullSData(oldp+16,(vlSelf->n),16);
    bufp->fullSData(oldp+17,(vlSelf->top__DOT__myLfsr__DOT__sreg),10);
    bufp->fullIData(oldp+18,(((0U == vlSelf->top__DOT__myDelay__DOT__current_state)
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
    bufp->fullSData(oldp+19,(vlSelf->top__DOT__myFiniteStateMachine__DOT__next_state),9);
    bufp->fullBit(oldp+20,((1U & (IData)(vlSelf->top__DOT____Vcellout__myClktick__data_out))));
    bufp->fullBit(oldp+21,(vlSelf->top__DOT__clktick_o));
    bufp->fullBit(oldp+22,(vlSelf->top__DOT__time_out));
    bufp->fullIData(oldp+23,(0x10U),32);
    bufp->fullIData(oldp+24,(8U),32);
    bufp->fullCData(oldp+25,(vlSelf->top__DOT____Vcellout__myClktick__data_out),8);
    bufp->fullIData(oldp+26,(0xaU),32);
    bufp->fullBit(oldp+27,(1U));
}
