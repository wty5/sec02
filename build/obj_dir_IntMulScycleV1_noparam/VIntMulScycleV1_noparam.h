// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Primary design header
//
// This header should be included by all source files instantiating the design.
// The class here is then constructed to instantiate the design.
// See the Verilator manual for examples.

#ifndef _VINTMULSCYCLEV1_NOPARAM_H_
#define _VINTMULSCYCLEV1_NOPARAM_H_  // guard

#include "verilated_heavy.h"
#include "VIntMulScycleV1_noparam__Dpi.h"

//==========

class VIntMulScycleV1_noparam__Syms;

//----------

VL_MODULE(VIntMulScycleV1_noparam) {
  public:
    
    // PORTS
    // The application code writes and reads these signals to
    // propagate new values into/out from the Verilated model.
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    VL_IN(in0,31,0);
    VL_IN(in1,31,0);
    VL_OUT(out,31,0);
    
    // LOCAL SIGNALS
    // Internals; generally not touched by application code
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__in0_reg;
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__in1_reg;
    WData/*4095:0*/ IntMulScycleV1_noparam__DOT__v__DOT__str[128];
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__len0;
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx0;
    IData/*31:0*/ IntMulScycleV1_noparam__DOT__v__DOT__vc_trace__DOT__idx1;
    
    // LOCAL VARIABLES
    // Internals; generally not touched by application code
    CData/*0:0*/ __Vclklast__TOP__clk;
    
    // INTERNAL VARIABLES
    // Internals; generally not touched by application code
    VIntMulScycleV1_noparam__Syms* __VlSymsp;  // Symbol table
    
    // CONSTRUCTORS
  private:
    VL_UNCOPYABLE(VIntMulScycleV1_noparam);  ///< Copying not allowed
  public:
    /// Construct the model; called by application code
    /// The special name  may be used to make a wrapper with a
    /// single model invisible with respect to DPI scope names.
    VIntMulScycleV1_noparam(const char* name = "TOP");
    /// Destroy the model; called (often implicitly) by application code
    ~VIntMulScycleV1_noparam();
    
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
    static void _eval_initial_loop(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp);
  public:
    void __Vconfigure(VIntMulScycleV1_noparam__Syms* symsp, bool first);
    static void __Vdpiexp_IntMulScycleV1_noparam__DOT__v__DOT__line_trace_TOP(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp, WData/*4095:0*/ (&trace_str)[128]);
  private:
    static QData _change_request(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp);
    static QData _change_request_1(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp);
    void _ctor_var_reset() VL_ATTR_COLD;
  public:
    static void _eval(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp);
  private:
#ifdef VL_DEBUG
    void _eval_debug_assertions();
#endif  // VL_DEBUG
  public:
    static void _eval_initial(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _eval_settle(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void _sequent__TOP__1(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp);
    static void _settle__TOP__2(VIntMulScycleV1_noparam__Syms* __restrict vlSymsp) VL_ATTR_COLD;
    static void line_trace(svBitVecVal* trace_str);
} VL_ATTR_ALIGNED(VL_CACHE_LINE_BYTES);

//----------


#endif  // guard
