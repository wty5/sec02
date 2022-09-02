
#=========================================================================
# VIntMulScycleV3_noparam_v.py
#=========================================================================
"""Provide a template of PyMTL wrapper to import verilated models.

This wrapper makes a Verilator-generated C++ model appear as if it were a
normal PyMTL model. This template is based on PyMTL v2.
"""

import os

from cffi import FFI

from pymtl3.datatypes import *
from pymtl3.dsl import Component, connect, InPort, OutPort, Wire, update, update_ff

#-------------------------------------------------------------------------
# IntMulScycleV3_noparam
#-------------------------------------------------------------------------

class IntMulScycleV3_noparam( Component ):
  id_ = 0

  def __init__( s, *args, **kwargs ):
    s._finalization_count = 0

    # initialize FFI, define the exposed interface
    s.ffi = FFI()
    s.ffi.cdef("""
      typedef struct {

        // Exposed port interface
        unsigned char * clk;        
        unsigned char * reset;        
        unsigned long * istream_msg;        
        unsigned char * istream_rdy;        
        unsigned char * istream_val;        
        unsigned int * ostream_msg;        
        unsigned char * ostream_rdy;        
        unsigned char * ostream_val;

        // Verilator model
        void * model;

      } VIntMulScycleV3_noparam_t;

      VIntMulScycleV3_noparam_t * create_model( const char * );
      void destroy_model( VIntMulScycleV3_noparam_t *);
      void comb_eval( VIntMulScycleV3_noparam_t * );
      void seq_eval( VIntMulScycleV3_noparam_t * );
      void assert_en( bool en );
      void trace( VIntMulScycleV3_noparam_t *, char * );

    """)

    # Print the modification time stamp of the shared lib
    # print 'Modification time of {}: {}'.format(
    #   'libIntMulScycleV3_noparam_v.so', os.path.getmtime( './libIntMulScycleV3_noparam_v.so' ) )

    # Import the shared library containing the model. We defer
    # construction to the elaborate_logic function to allow the user to
    # set the vcd_file.
    s._ffi_inst = s.ffi.dlopen('./libIntMulScycleV3_noparam_v.so')

    # increment instance count
    IntMulScycleV3_noparam.id_ += 1

  def finalize( s ):
    """Finalize the imported component.

    This method closes the shared library opened through CFFI. If an imported
    component is not finalized explicitly (i.e. if you rely on GC to collect a
    no longer used imported component), importing a component with the same
    name before all previous imported components are GCed might lead to
    confusing behaviors. This is because once opened, the shared lib
    is cached by the OS until the OS reference counter for this lib reaches
    0 (you can decrement the reference counter by calling `dl_close()` syscall).

    Fortunately real designs tend to always have the same shared lib corresponding
    to the components with the same name. If you are doing translation testing and
    use the same component class name even if they refer to different designs,
    you might need to call `imported_object.finalize()` at the end of each test
    to ensure correct behaviors.
    """
    assert s._finalization_count == 0,      'Imported component can only be finalized once!'
    s._finalization_count += 1
    s._ffi_inst.destroy_model( s._ffi_m )
    s.ffi.dlclose( s._ffi_inst )
    s.ffi = None
    s._ffi_inst = None

  def __del__( s ):
    if s._finalization_count == 0:
      s._finalization_count += 1
      s._ffi_inst.destroy_model( s._ffi_m )
      s.ffi.dlclose( s._ffi_inst )
      s.ffi = None
      s._ffi_inst = None

  def construct( s, *args, **kwargs ):
    # Set up the VCD file name
    verilator_vcd_file = ""
    if 0:
      if False:
        verilator_vcd_file = ".verilator1.vcd"
      else:
        verilator_vcd_file = "IntMulScycleV3_noparam.verilator1.vcd"

    # Convert string to `bytes` which is required by CFFI on python 3
    verilator_vcd_file = verilator_vcd_file.encode('ascii')

    # Construct the model
    s._ffi_m = s._ffi_inst.create_model( s.ffi.new("char[]", verilator_vcd_file) )

    # Buffer for line tracing
    s._line_trace_str = s.ffi.new('char[512]')
    s._convert_string = s.ffi.string

    # Use non-attribute varialbe to reduce CPython bytecode count
    _ffi_m = s._ffi_m
    _ffi_inst_comb_eval = s._ffi_inst.comb_eval
    _ffi_inst_seq_eval  = s._ffi_inst.seq_eval

    # declare the port interface
    s.istream = IStreamIfc( Bits64 )
    s.ostream = OStreamIfc( Bits32 )

    # update blocks that converts ffi interface to/from pymtl ports
    
    s.s_DOT_reset = Wire( Bits1 )
    @update
    def isignal_s_DOT_reset():
      s.s_DOT_reset @= s.reset
    
    s.s_DOT_istream_DOT_msg = Wire( Bits64 )
    @update
    def isignal_s_DOT_istream_DOT_msg():
      s.s_DOT_istream_DOT_msg @= s.istream.msg
    
    s.s_DOT_istream_DOT_val = Wire( Bits1 )
    @update
    def isignal_s_DOT_istream_DOT_val():
      s.s_DOT_istream_DOT_val @= s.istream.val
    
    s.s_DOT_ostream_DOT_rdy = Wire( Bits1 )
    @update
    def isignal_s_DOT_ostream_DOT_rdy():
      s.s_DOT_ostream_DOT_rdy @= s.ostream.rdy
    
    s.s_DOT_istream_DOT_rdy = Wire( Bits1 )
    @update
    def osignal_s_DOT_istream_DOT_rdy():
      s.istream.rdy @= s.s_DOT_istream_DOT_rdy
    
    s.s_DOT_ostream_DOT_msg = Wire( Bits32 )
    @update
    def osignal_s_DOT_ostream_DOT_msg():
      s.ostream.msg @= s.s_DOT_ostream_DOT_msg
    
    s.s_DOT_ostream_DOT_val = Wire( Bits1 )
    @update
    def osignal_s_DOT_ostream_DOT_val():
      s.ostream.val @= s.s_DOT_ostream_DOT_val

    @update
    def comb_upblk():

      # Set inputs
      
      _ffi_m.reset[0] = int(s.s_DOT_reset)
      
      _ffi_m.istream_msg[0] = int(s.s_DOT_istream_DOT_msg)
      
      _ffi_m.istream_val[0] = int(s.s_DOT_istream_DOT_val)
      
      _ffi_m.ostream_rdy[0] = int(s.s_DOT_ostream_DOT_rdy)

      _ffi_inst_comb_eval( _ffi_m )

      # Write all outputs
      
      s.s_DOT_istream_DOT_rdy @= _ffi_m.istream_rdy[0]
      
      s.s_DOT_ostream_DOT_msg @= _ffi_m.ostream_msg[0]
      
      s.s_DOT_ostream_DOT_val @= _ffi_m.ostream_val[0]

    @update_ff
    def seq_upblk():
      # seq_eval will automatically tick clock in C land
      _ffi_inst_seq_eval( _ffi_m )

  def assert_en( s, en ):
    # TODO: for verilator, any assertion failure will cause the C simulator
    # to abort, which results in a Python internal error. A better approach
    # is to throw a Python exception at the time of assertion failure.
    # Verilator allows user-defined `stop` function which is called when
    # the simulation is expected to stop due to various reasons. We might
    # be able to raise a Python exception through Python C API (although
    # at this moment I'm not sure if the C API's are compatible between
    # PyPy and CPython).
    assert isinstance( en, bool )
    s._ffi_inst.assert_en( en )

  def line_trace( s ):
    if 1:
      s._ffi_inst.trace( s._ffi_m, s._line_trace_str )
      return s._convert_string( s._line_trace_str ).decode('ascii')
    else:
      return f' clk={s.clk}, reset={s.reset}, istream.msg={s.istream.msg}, istream.rdy={s.istream.rdy}, istream.val={s.istream.val}, ostream.msg={s.ostream.msg}, ostream.rdy={s.ostream.rdy}, ostream.val={s.ostream.val},'

  def internal_line_trace( s ):
    return ''
