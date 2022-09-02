// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VIntMulScycleV3_noparam.h for the primary calling header

#include "VIntMulScycleV3_noparam.h"
#include "VIntMulScycleV3_noparam__Syms.h"

#include "verilated_dpi.h"

//==========

VL_CTOR_IMP(VIntMulScycleV3_noparam) {
    VIntMulScycleV3_noparam__Syms* __restrict vlSymsp = __VlSymsp = new VIntMulScycleV3_noparam__Syms(this, name());
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Reset internal values
    
    // Reset structure values
    _ctor_var_reset();
}

void VIntMulScycleV3_noparam::__Vconfigure(VIntMulScycleV3_noparam__Syms* vlSymsp, bool first) {
    if (false && first) {}  // Prevent unused
    this->__VlSymsp = vlSymsp;
    if (false && this->__VlSymsp) {}  // Prevent unused
    Verilated::timeunit(-12);
    Verilated::timeprecision(-12);
}

VIntMulScycleV3_noparam::~VIntMulScycleV3_noparam() {
    VL_DO_CLEAR(delete __VlSymsp, __VlSymsp = NULL);
}

void VIntMulScycleV3_noparam::_settle__TOP__2(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_settle__TOP__2\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->istream_rdy = vlTOPp->ostream_rdy;
    vlTOPp->ostream_val = vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    vlTOPp->ostream_msg = (vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg 
                           * vlTOPp->IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg);
}

void VIntMulScycleV3_noparam::_eval_initial(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_eval_initial\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->__Vclklast__TOP__clk = vlTOPp->clk;
}

void VIntMulScycleV3_noparam::final() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::final\n"); );
    // Variables
    VIntMulScycleV3_noparam__Syms* __restrict vlSymsp = this->__VlSymsp;
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
}

void VIntMulScycleV3_noparam::_eval_settle(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_eval_settle\n"); );
    VIntMulScycleV3_noparam* const __restrict vlTOPp VL_ATTR_UNUSED = vlSymsp->TOPp;
    // Body
    vlTOPp->_settle__TOP__2(vlSymsp);
}

void VIntMulScycleV3_noparam::_ctor_var_reset() {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VIntMulScycleV3_noparam::_ctor_var_reset\n"); );
    // Body
    clk = VL_RAND_RESET_I(1);
    reset = VL_RAND_RESET_I(1);
    istream_msg = VL_RAND_RESET_Q(64);
    istream_rdy = VL_RAND_RESET_I(1);
    istream_val = VL_RAND_RESET_I(1);
    ostream_msg = VL_RAND_RESET_I(32);
    ostream_rdy = VL_RAND_RESET_I(1);
    ostream_val = VL_RAND_RESET_I(1);
    IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg = VL_RAND_RESET_I(1);
    IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg = VL_RAND_RESET_I(32);
    IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg = VL_RAND_RESET_I(32);
    VL_RAND_RESET_W(4096, IntMulScycleV3_noparam__DOT__v__DOT__str);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0 = VL_RAND_RESET_I(32);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1 = VL_RAND_RESET_I(32);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0 = VL_RAND_RESET_I(32);
    IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1 = VL_RAND_RESET_I(32);
}
