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
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 7,0);
    tracep->pushNamePrefix("top ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 7,0);
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+5,"tick", false,-1);
    tracep->pushNamePrefix("my_clktick ");
    tracep->declBus(c+10,"WIDTH", false,-1, 31,0);
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+3,"en", false,-1);
    tracep->declBus(c+11,"N", false,-1, 15,0);
    tracep->declBit(c+5,"tick", false,-1);
    tracep->declBus(c+6,"count", false,-1, 15,0);
    tracep->popNamePrefix(1);
    tracep->pushNamePrefix("my_fsm ");
    tracep->declBit(c+1,"clk", false,-1);
    tracep->declBit(c+2,"rst", false,-1);
    tracep->declBit(c+5,"en", false,-1);
    tracep->declBus(c+4,"data_out", false,-1, 7,0);
    tracep->declBus(c+7,"out", false,-1, 7,0);
    tracep->declBus(c+8,"current_state", false,-1, 31,0);
    tracep->declBus(c+9,"next_state", false,-1, 31,0);
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
    bufp->fullBit(oldp+1,(vlSelf->clk));
    bufp->fullBit(oldp+2,(vlSelf->rst));
    bufp->fullBit(oldp+3,(vlSelf->en));
    bufp->fullCData(oldp+4,(vlSelf->data_out),8);
    bufp->fullBit(oldp+5,(vlSelf->top__DOT__tick));
    bufp->fullSData(oldp+6,(vlSelf->top__DOT__my_clktick__DOT__count),16);
    bufp->fullCData(oldp+7,((((((((((0U == vlSelf->top__DOT__my_fsm__DOT__current_state) 
                                    | (1U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                                   | (2U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                                  | (3U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                                 | (4U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                                | (5U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                               | (6U == vlSelf->top__DOT__my_fsm__DOT__current_state)) 
                              | (7U == vlSelf->top__DOT__my_fsm__DOT__current_state))
                              ? ((0U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                  ? 0U : ((1U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                           ? 1U : (
                                                   (2U 
                                                    == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                    ? 3U
                                                    : 
                                                   ((3U 
                                                     == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                     ? 7U
                                                     : 
                                                    ((4U 
                                                      == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                      ? 0xfU
                                                      : 
                                                     ((5U 
                                                       == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                       ? 0x1fU
                                                       : 
                                                      ((6U 
                                                        == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                                        ? 0x3fU
                                                        : 0x7fU)))))))
                              : ((8U == vlSelf->top__DOT__my_fsm__DOT__current_state)
                                  ? 0xffU : 0U))),8);
    bufp->fullIData(oldp+8,(vlSelf->top__DOT__my_fsm__DOT__current_state),32);
    bufp->fullIData(oldp+9,(vlSelf->top__DOT__my_fsm__DOT__next_state),32);
    bufp->fullIData(oldp+10,(0x10U),32);
    bufp->fullSData(oldp+11,(0x18U),16);
}
