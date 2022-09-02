// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VINTMULSCYCLEV3_NOPARAM_H_
#define _VINTMULSCYCLEV3_NOPARAM_H_  // guard

#include "verilated_heavy.h"
#include "VIntMulScycleV3_noparam__Dpi.h"

//==========

class VIntMulScycleV3_noparam__Syms;

//----------

VL_MODULE(VIntMulScycleV3_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_OUT8(istream_rdy,0,0);
    VL_IN8(istream_val,0,0);
    VL_IN8(ostream_rdy,0,0);
    VL_OUT8(ostream_val,0,0);
    VL_OUT(ostream_msg,31,0);
    VL_IN64(istream_msg,63,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    CData/*0:0*/ IntMulScycleV3_noparam__DOT__v__DOT__istream_val_reg;
    IData/*31:0*/ IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in0_reg;
    IData/*31:0*/ IntMulScycleV3_noparam__DOT__v__DOT__istream_msg_in1_reg;
    WData/*4095:0*/ IntMulScycleV3_noparam__DOT__v__DOT__str[128];
    IData/*31:0*/ IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__len1;
    IData/*31:0*/ IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ IntMulScycleV3_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VIntMulScycleV3_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VIntMulScycleV3_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VIntMulScycleV3_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VIntMulScycleV3_noparam();
    
    // API METHODS
    /// Evaluate the model.  Application must call when inputs change.
    void eval() { eval_step(); }
    /// Evaluate when calling multiple units/models per time step.
    void eval_step();
    /// Evaluate at end of a timestep for tracing, when using eval_step().
    /// Application must call after all eval() and before time changes.
    void eval_end_step() {}
    /// Simulation complete, run final blocks.  Application must call on completion.
    void final();
    
    // INTERNAL METHODS
  private:
    static void _eval_initial_loop(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VIntMulScycleV3_noparam__Syms* symsp, bool first);
    static void __Vdpiexp_IntMulScycleV3_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp);
  public:
    static void _combo__TOP__1(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp);
  private:
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__3(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VIntMulScycleV3_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
