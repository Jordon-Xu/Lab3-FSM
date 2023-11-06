// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "Vtop__Syms.h"


VL_ATTR_COLD void Vtop___024root__trace_init_sub__TOP__0(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"trigger", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBit(c+9,"time_out", false,-1);
    tracep->declBit(c+10,"cmd_delay", false,-1);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+6,"trigger", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBit(c+9,"time_out", false,-1);
    tracep->declBit(c+10,"cmd_delay", false,-1);
    tracep->declBit(c+11,"cmd_seq", false,-1);
    tracep->declBit(c+12,"en_temp", false,-1);
    tracep->declBus(c+13,"random_out", false,-1, 6,0);
    tracep->pushNamePrefix("clk_divider ");
    tracep->declBus(c+18,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+11,"en", false,-1);
    tracep->declBus(c+19,"N", false,-1, 4,0);
    tracep->declBit(c+8,"tick", false,-1);
    tracep->declBus(c+1,"count", false,-1, 4,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("delay_module ");
    tracep->declBus(c+20,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+10,"trigger", false,-1);
    tracep->declBus(c+13,"n", false,-1, 6,0);
    tracep->declBit(c+9,"time_out", false,-1);
    tracep->declBus(c+2,"count", false,-1, 6,0);
    tracep->declBus(c+3,"current_state", false,-1, 31,0);
    tracep->declBus(c+14,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("fsm ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBit(c+12,"en", false,-1);
    tracep->declBit(c+6,"trigger", false,-1);
    tracep->declBus(c+7,"data_out", false,-1, 7,0);
    tracep->declBit(c+11,"cmd_seq", false,-1);
    tracep->declBit(c+10,"cmd_delay", false,-1);
    tracep->declBus(c+15,"out", false,-1, 7,0);
    tracep->declBus(c+16,"current_state", false,-1, 31,0);
    tracep->declBus(c+17,"next_state", false,-1, 31,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("random_gen ");
    tracep->declBit(c+4,"clk", false,-1);
    tracep->declBit(c+5,"rst", false,-1);
    tracep->declBus(c+13,"K", false,-1, 6,0);
    tracep->declBus(c+13,"sreg", false,-1, 6,0);
    tracep->popNamePrefix(2);
}

VL_ATTR_COLD void Vtop___024root__trace_init_top(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_init_top\n"); );
    // Body
    Vtop___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_chg_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void Vtop___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void Vtop___024root__trace_register(Vtop___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_register\n"); );
    // Body
    tracep->addFullCb(&Vtop___024root__trace_full_top_0, vlSelf);
    tracep->addChgCb(&Vtop___024root__trace_chg_top_0, vlSelf);
    tracep->addCleanupCb(&Vtop___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void Vtop___024root__trace_full_top_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_top_0\n"); );
    // Init
    Vtop___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vtop___024root*>(voidSelf);
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    Vtop___024root__trace_full_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void Vtop___024root__trace_full_sub_0(Vtop___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    Vtop___024root__trace_full_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+1,(vlSelf->top__DOT__clk_divider__DOT__count),5);
    bufp->fullCData(oldp+2,(vlSelf->top__DOT__delay_module__DOT__count),7);
    bufp->fullIData(oldp+3,(vlSelf->top__DOT__delay_module__DOT__current_state),32);
    bufp->fullBit(oldp+4,(vlSelf->clk));
    bufp->fullBit(oldp+5,(vlSelf->rst));
    bufp->fullBit(oldp+6,(vlSelf->trigger));
    bufp->fullCData(oldp+7,(vlSelf->data_out),8);
    bufp->fullBit(oldp+8,(vlSelf->tick));
    bufp->fullBit(oldp+9,(vlSelf->time_out));
    bufp->fullBit(oldp+10,(vlSelf->cmd_delay));
    bufp->fullBit(oldp+11,(vlSelf->top__DOT__cmd_seq));
    bufp->fullBit(oldp+12,(vlSelf->top__DOT__en_temp));
    bufp->fullCData(oldp+13,(vlSelf->top__DOT__random_gen__DOT__sreg),7);
    bufp->fullIData(oldp+14,(((0U == vlSelf->top__DOT__delay_module__DOT__current_state)
                               ? ((IData)(vlSelf->cmd_delay)
                                   ? 1U : vlSelf->top__DOT__delay_module__DOT__current_state)
                               : ((1U == vlSelf->top__DOT__delay_module__DOT__current_state)
                                   ? ((0U == (IData)(vlSelf->top__DOT__delay_module__DOT__count))
                                       ? 2U : vlSelf->top__DOT__delay_module__DOT__current_state)
                                   : ((2U == vlSelf->top__DOT__delay_module__DOT__current_state)
                                       ? ((IData)(vlSelf->cmd_delay)
                                           ? 3U : 0U)
                                       : ((3U == vlSelf->top__DOT__delay_module__DOT__current_state)
                                           ? ((IData)(vlSelf->cmd_delay)
                                               ? vlSelf->top__DOT__delay_module__DOT__current_state
                                               : 0U)
                                           : 0U))))),32);
    bufp->fullCData(oldp+15,(vlSelf->top__DOT__fsm__DOT__out),8);
    bufp->fullIData(oldp+16,(vlSelf->top__DOT__fsm__DOT__current_state),32);
    bufp->fullIData(oldp+17,(vlSelf->top__DOT__fsm__DOT__next_state),32);
    bufp->fullIData(oldp+18,(5U),32);
    bufp->fullCData(oldp+19,(0x1eU),5);
    bufp->fullIData(oldp+20,(7U),32);
}