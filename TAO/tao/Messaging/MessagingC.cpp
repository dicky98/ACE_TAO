// -*- C++ -*-
//
// $Id$

// ****  Code generated by the The ACE ORB (TAO) IDL Compiler ****
// TAO and the TAO IDL Compiler have been developed by:
//       Center for Distributed Object Computing
//       Washington University
//       St. Louis, MO
//       USA
//       http://www.cs.wustl.edu/~schmidt/doc-center.html
// and
//       Distributed Object Computing Laboratory
//       University of California at Irvine
//       Irvine, CA
//       USA
//       http://doc.ece.uci.edu/
// and
//       Institute for Software Integrated Systems
//       Vanderbilt University
//       Nashville, TN
//       USA
//       http://www.isis.vanderbilt.edu/
//
// Information about TAO is available at:
//     http://www.cs.wustl.edu/~schmidt/TAO.html

// TAO_IDL - Generated from
// be\be_codegen.cpp:302


#include "Messaging.h"
#include "tao/CDR.h"
#include "tao/Object_T.h"
#include "tao/ORB_Core.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "MessagingC.inl"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be\be_visitor_arg_traits.cpp:69

// Arg traits specializations.
namespace TAO
{
}


// TAO_IDL - Generated from
// be\be_visitor_valuetype/valuetype_cs.cpp:66

void
TAO::Value_Traits<Messaging::ExceptionHolder>::add_ref (
    Messaging::ExceptionHolder * p
  )
{
  CORBA::add_ref (p);
}

void
TAO::Value_Traits<Messaging::ExceptionHolder>::remove_ref (
    Messaging::ExceptionHolder * p
  )
{
  CORBA::remove_ref (p);
}

void
TAO::Value_Traits<Messaging::ExceptionHolder>::release (
    Messaging::ExceptionHolder * p
  )
{
  CORBA::remove_ref (p);
}

Messaging::ExceptionHolder *
Messaging::ExceptionHolder::_downcast (CORBA::ValueBase *v)
{
  return dynamic_cast< ::Messaging::ExceptionHolder * > (v);
}

const char *
Messaging::ExceptionHolder::_tao_obv_repository_id (void) const
{
  return this->_tao_obv_static_repository_id ();
}

void
Messaging::ExceptionHolder::_tao_any_destructor (void *_tao_void_pointer)
{
  ExceptionHolder *_tao_tmp_pointer =
    static_cast<
        ExceptionHolder *> (
        _tao_void_pointer
      );
  CORBA::remove_ref (_tao_tmp_pointer);
}

CORBA::Boolean Messaging::ExceptionHolder::_tao_marshal_v (TAO_OutputCDR & strm)
{
  return this->_tao_marshal__Messaging_ExceptionHolder (strm);
}

CORBA::Boolean Messaging::ExceptionHolder::_tao_unmarshal_v (TAO_InputCDR & strm)
{
  return this->_tao_unmarshal__Messaging_ExceptionHolder (strm);
}

CORBA::Boolean Messaging::ExceptionHolder::_tao_unmarshal (
    TAO_InputCDR &strm,
    ExceptionHolder *&new_object
  )
{
  CORBA::ValueBase *base = 0;
  CORBA::ValueFactory_var factory;
  CORBA::Boolean retval =
    CORBA::ValueBase::_tao_unmarshal_pre (
        strm,
        factory.out (),
        base,
        ExceptionHolder::_tao_obv_static_repository_id ()
      );

  if (retval == 0)
    {
      return 0;
    }

  if (factory.in () != 0)
    {
      base = factory->create_for_unmarshal ();

      if (base == 0)
        {
          return 0;  // %! except.?
        }

      retval = base->_tao_unmarshal_v (strm);

      if (retval == 0)
        {
          return 0;
        }
    }

  // Now base must be null or point to the unmarshaled object.
  // Align the pointer to the right subobject.
  new_object = ExceptionHolder::_downcast (base);
  return retval;
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/valuetype_init_cs.cpp:85

Messaging::ExceptionHolder_init::ExceptionHolder_init (void)
{
}

Messaging::ExceptionHolder_init::~ExceptionHolder_init (void)
{
}

Messaging::ExceptionHolder_init *
Messaging::ExceptionHolder_init::_downcast (CORBA::ValueFactoryBase *v)
{
  return dynamic_cast< ::Messaging::ExceptionHolder_init * > (v);
}

const char*
Messaging::ExceptionHolder_init::tao_repository_id (void)
{
  return ::Messaging::ExceptionHolder::_tao_obv_static_repository_id ();
}

CORBA::ValueBase *
Messaging::ExceptionHolder_init::create_for_unmarshal (ACE_ENV_SINGLE_ARG_DECL)
{
  CORBA::ValueBase *ret_val = 0;
  ACE_NEW_THROW_EX (
      ret_val,
      OBV_Messaging::ExceptionHolder,
      CORBA::NO_MEMORY ()
    );
  return ret_val;
}

// TAO_IDL - Generated from
// be\be_visitor_interface/interface_cs.cpp:60

// Traits specializations for Messaging::ReplyHandler.

Messaging::ReplyHandler_ptr
TAO::Objref_Traits<Messaging::ReplyHandler>::duplicate (
    Messaging::ReplyHandler_ptr p
  )
{
  return Messaging::ReplyHandler::_duplicate (p);
}

void
TAO::Objref_Traits<Messaging::ReplyHandler>::release (
    Messaging::ReplyHandler_ptr p
  )
{
  CORBA::release (p);
}

Messaging::ReplyHandler_ptr
TAO::Objref_Traits<Messaging::ReplyHandler>::nil (void)
{
  return Messaging::ReplyHandler::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<Messaging::ReplyHandler>::marshal (
    Messaging::ReplyHandler_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return CORBA::Object::marshal (p, cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker *
(*Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

Messaging::ReplyHandler::ReplyHandler (void)
 : the_TAO_ReplyHandler_Proxy_Broker_ (0)
{
  this->Messaging_ReplyHandler_setup_collocation ();
}

void
Messaging::ReplyHandler::Messaging_ReplyHandler_setup_collocation ()
{
  if (::Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer)
    {
      this->the_TAO_ReplyHandler_Proxy_Broker_ =
        ::Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer (this);
    }
}

Messaging::ReplyHandler::~ReplyHandler (void)
{}

void
Messaging::ReplyHandler::_tao_any_destructor (void *_tao_void_pointer)
{
  ReplyHandler *_tao_tmp_pointer =
    static_cast<ReplyHandler *> (_tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

Messaging::ReplyHandler_ptr
Messaging::ReplyHandler::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL
  )
{
  return
    TAO::Narrow_Utils<ReplyHandler>::narrow (
        _tao_objref,
        "IDL:omg.org/Messaging/ReplyHandler:1.0",
        Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer
        ACE_ENV_ARG_PARAMETER
      );
}

Messaging::ReplyHandler_ptr
Messaging::ReplyHandler::_unchecked_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL
  )
{
  return
    TAO::Narrow_Utils<ReplyHandler>::unchecked_narrow (
        _tao_objref,
        "IDL:omg.org/Messaging/ReplyHandler:1.0",
        Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer
        ACE_ENV_ARG_PARAMETER
      );
}

Messaging::ReplyHandler_ptr
Messaging::ReplyHandler::_duplicate (ReplyHandler_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

void
Messaging::ReplyHandler::_tao_release (ReplyHandler_ptr obj)
{
  CORBA::release (obj);
}

CORBA::Boolean
Messaging::ReplyHandler::_is_a (
    const char *value
    ACE_ENV_ARG_DECL
  )
{
  if (
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/Messaging/ReplyHandler:1.0"
        ) ||
      !ACE_OS::strcmp (
          value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
    )
    {
      return true; // success using local knowledge
    }
  else
    {
      return this->ACE_NESTED_CLASS (CORBA, Object)::_is_a (
          value
          ACE_ENV_ARG_PARAMETER
        );
    }
}

const char* Messaging::ReplyHandler::_interface_repository_id (void) const
{
  return "IDL:omg.org/Messaging/ReplyHandler:1.0";
}

CORBA::Boolean
Messaging::ReplyHandler::marshal (TAO_OutputCDR &cdr)
{
  return (cdr << this);
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/valuetype_obv_cs.cpp:58

OBV_Messaging::ExceptionHolder::ExceptionHolder (void)
{}

OBV_Messaging::ExceptionHolder::~ExceptionHolder (void)
{}

CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_marshal__Messaging_ExceptionHolder (TAO_OutputCDR &strm)
{
  return _tao_marshal_state (strm);
}

CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_unmarshal__Messaging_ExceptionHolder (TAO_InputCDR &strm)
{
  return _tao_unmarshal_state (strm);
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/field_cs.cpp:580

// Accessor to set the member.
void
OBV_Messaging::ExceptionHolder::is_system_exception (CORBA::Boolean val)
{
  // Set the value.
  this->_pd_is_system_exception = val;
}

// Retrieve the member
CORBA::Boolean
OBV_Messaging::ExceptionHolder::is_system_exception (void) const
{
  return this->_pd_is_system_exception;
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/field_cs.cpp:580

// Accessor to set the member.
void
OBV_Messaging::ExceptionHolder::byte_order (CORBA::Boolean val)
{
  // Set the value.
  this->_pd_byte_order = val;
}

// Retrieve the member
CORBA::Boolean
OBV_Messaging::ExceptionHolder::byte_order (void) const
{
  return this->_pd_byte_order;
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/field_cs.cpp:755

// Accessor to set the member.
void
OBV_Messaging::ExceptionHolder::marshaled_exception (const CORBA::OctetSeq &val)
{
  this->_pd_marshaled_exception = val;
}

// Readonly get method.
const CORBA::OctetSeq &
OBV_Messaging::ExceptionHolder::marshaled_exception (void) const
{
  return this->_pd_marshaled_exception;
}

// Read/write get method.
CORBA::OctetSeq &
OBV_Messaging::ExceptionHolder::marshaled_exception (void)
{
  return this->_pd_marshaled_exception;
}

// TAO_IDL - Generated from
// be\be_valuetype.cpp:488

void
CORBA::add_ref (Messaging::ExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_add_ref ();
    }
}

void
CORBA::remove_ref (Messaging::ExceptionHolder * vt)
{
  if (vt != 0)
    {
      vt->_remove_ref ();
    }
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/cdr_op_cs.cpp:73

CORBA::Boolean
operator<< (
    TAO_OutputCDR &strm,
    const Messaging::ExceptionHolder *_tao_valuetype
  )
{
  return
    CORBA::ValueBase::_tao_marshal (
        strm,
        const_cast<Messaging::ExceptionHolder *> (_tao_valuetype),
        reinterpret_cast<ptrdiff_t> (&Messaging::ExceptionHolder::_downcast)
      );
}

CORBA::Boolean
operator>> (
    TAO_InputCDR &strm,
    Messaging::ExceptionHolder *&_tao_valuetype
  )
{
  return Messaging::ExceptionHolder::_tao_unmarshal (strm, _tao_valuetype);
}

// TAO_IDL - Generated from
// be\be_visitor_valuetype/marshal_cs.cpp:44

CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_marshal_state (TAO_OutputCDR &strm)
{
  return (
      (strm << CORBA::Any::from_boolean (_pd_is_system_exception)) &&
      (strm << CORBA::Any::from_boolean (_pd_byte_order)) &&
      (strm << _pd_marshaled_exception)
    );
}

CORBA::Boolean
OBV_Messaging::ExceptionHolder::_tao_unmarshal_state (TAO_InputCDR &strm)
{
  return (
    (strm >> CORBA::Any::to_boolean (_pd_is_system_exception)) &&
    (strm >> CORBA::Any::to_boolean (_pd_byte_order)) &&
    (strm >> _pd_marshaled_exception)
  );
}

// TAO_IDL - Generated from
// be\be_visitor_interface/cdr_op_cs.cpp:63

CORBA::Boolean operator<< (
    TAO_OutputCDR &strm,
    const Messaging::ReplyHandler_ptr _tao_objref
  )
{
  CORBA::Object_ptr _tao_corba_obj = _tao_objref;
  return (strm << _tao_corba_obj);
}

CORBA::Boolean operator>> (
    TAO_InputCDR &strm,
    Messaging::ReplyHandler_ptr &_tao_objref
  )
{
  CORBA::Object_var obj;

  if (!(strm >> obj.inout ()))
    {
      return false;
    }

  typedef ::Messaging::ReplyHandler RHS_SCOPED_NAME;

  // Narrow to the right type.
  _tao_objref =
    TAO::Narrow_Utils<RHS_SCOPED_NAME>::unchecked_narrow (
        obj.in (),
        Messaging__TAO_ReplyHandler_Proxy_Broker_Factory_function_pointer
      );

  return 1;
}

// TAO_IDL - Generated from
// be\be_visitor_root/root.cpp:1619

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Value_Traits<
        Messaging::ExceptionHolder
      >;

  template class
    TAO_Value_Var_T<
        Messaging::ExceptionHolder

      >;

  template class
    TAO_Value_Out_T<
        Messaging::ExceptionHolder

      >;

  template class
    TAO::Objref_Traits<
        Messaging::ReplyHandler
      >;

  template class
    TAO_Objref_Var_T<
        Messaging::ReplyHandler
      >;
  
  template class
    TAO_Objref_Out_T<
        Messaging::ReplyHandler
      >;

  template class
    TAO::Narrow_Utils<
        Messaging::ReplyHandler
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Value_Traits< \
        Messaging::ExceptionHolder \
      >

# pragma instantiate \
    TAO_Value_Var_T< \
        Messaging::ExceptionHolder \
        
      >
  
# pragma instantiate \
    TAO_Value_Out_T< \
        Messaging::ExceptionHolder \
        
      >

# pragma instantiate \
    TAO::Objref_Traits< \
        Messaging::ReplyHandler \
      >

# pragma instantiate \
    TAO_Objref_Var_T< \
        Messaging::ReplyHandler
      >
  
# pragma instantiate \
    TAO_Objref_Out_T< \
        Messaging::ReplyHandler
      >

# pragma instantiate \
    TAO::Narrow_Utils< \
        Messaging::ReplyHandler \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */ 
