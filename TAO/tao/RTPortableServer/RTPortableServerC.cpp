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
// be/be_codegen.cpp:301


#include "RTPortableServerC.h"
#include "tao/Stub.h"
#include "tao/Invocation_Adapter.h"
#include "tao/Object_T.h"
#include "tao/Any_Impl_T.h"
#include "tao/Any_Dual_Impl_T.h"
#include "tao/Any_Basic_Impl_T.h"
#include "tao/Basic_Arguments.h"
#include "tao/Object_Argument_T.h"
#include "tao/Special_Basic_Arguments.h"
#include "tao/UB_String_Arguments.h"
#include "tao/Var_Size_Argument_T.h"
#include "tao/Typecode.h"
#include "ace/OS_NS_string.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "RTPortableServerC.i"
#endif /* !defined INLINE */

// TAO_IDL - Generated from
// be/be_visitor_arg_traits.cpp:59

// Arg traits specializations.
namespace TAO
{

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:262

#if !defined (__TAO_SEQ_CORBA_OCTET___ARG_TRAITS_CS_)
#define __TAO_SEQ_CORBA_OCTET___ARG_TRAITS_CS_

  ACE_TEMPLATE_SPECIALIZATION
  class TAO_RTPortableServer_Export Arg_Traits<CORBA::OctetSeq>
    : public
        Var_Size_Arg_Traits_T<
            CORBA::OctetSeq,
            CORBA::OctetSeq_var,
            CORBA::OctetSeq_out
          >
  {
  };

#endif /* end #if !defined */

  // TAO_IDL - Generated from
  // be/be_visitor_arg_traits.cpp:262

#if !defined (__TAO_SEQ_CORBA_OCTET___ARG_TRAITS_CS_)
#define __TAO_SEQ_CORBA_OCTET___ARG_TRAITS_CS_

  ACE_TEMPLATE_SPECIALIZATION
  class TAO_RTPortableServer_Export Arg_Traits<PortableServer::ObjectId>
    : public
        Var_Size_Arg_Traits_T<
            PortableServer::ObjectId,
            PortableServer::ObjectId_var,
            PortableServer::ObjectId_out
          >
  {
  };

#endif /* end #if !defined */
};

// TAO_IDL - Generated from
// be/be_visitor_interface/interface_cs.cpp:60

// Traits specializations for RTPortableServer::POA.

RTPortableServer::POA_ptr
TAO::Objref_Traits<RTPortableServer::POA>::tao_duplicate (
    RTPortableServer::POA_ptr p
  )
{
  return RTPortableServer::POA::_duplicate (p);
}

void
TAO::Objref_Traits<RTPortableServer::POA>::tao_release (
    RTPortableServer::POA_ptr p
  )
{
  CORBA::release (p);
}

RTPortableServer::POA_ptr
TAO::Objref_Traits<RTPortableServer::POA>::tao_nil (void)
{
  return RTPortableServer::POA::_nil ();
}

CORBA::Boolean
TAO::Objref_Traits<RTPortableServer::POA>::tao_marshal (
    RTPortableServer::POA_ptr p,
    TAO_OutputCDR & cdr
  )
{
  return p->marshal (cdr);
}

// Function pointer for collocation factory initialization.
TAO::Collocation_Proxy_Broker *
(*RTPortableServer__TAO_POA_Proxy_Broker_Factory_function_pointer) (
    CORBA::Object_ptr obj
  ) = 0;

RTPortableServer::POA::POA (void)
{}

RTPortableServer::POA::~POA (void)
{}

void
RTPortableServer::POA::_tao_any_destructor (void *_tao_void_pointer)
{
  POA *_tao_tmp_pointer =
    ACE_static_cast (POA *, _tao_void_pointer);
  CORBA::release (_tao_tmp_pointer);
}

RTPortableServer::POA_ptr
RTPortableServer::POA::_narrow (
    CORBA::Object_ptr _tao_objref
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  POA_ptr proxy =
    dynamic_cast<POA_ptr> (_tao_objref);
  proxy->_add_ref ();
  return proxy;
}

RTPortableServer::POA_ptr
RTPortableServer::POA::_duplicate (POA_ptr obj)
{
  if (! CORBA::is_nil (obj))
    {
      obj->_add_ref ();
    }

  return obj;
}

CORBA::Boolean
RTPortableServer::POA::_is_a (
    const char *value
    ACE_ENV_ARG_DECL_NOT_USED
  )
{
  if (
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/PortableServer/POA:2.3"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/RTPortableServer/POA:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/LocalObject:1.0"
        ) ||
      !ACE_OS::strcmp (
          (char *)value,
          "IDL:omg.org/CORBA/Object:1.0"
        )
     )
    {
      return 1; // success using local knowledge
    }
  else
    {
      return 0;
    }
}

const char* RTPortableServer::POA::_interface_repository_id (void) const
{
  return "IDL:omg.org/RTPortableServer/POA:1.0";
}

CORBA::Boolean
RTPortableServer::POA::marshal (TAO_OutputCDR &)
{
  return 0;
}

// TAO_IDL - Generated from
// be/be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_RTPortableServer_POA[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  37,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x5254506f),
  ACE_NTOHL (0x72746162),
  ACE_NTOHL (0x6c655365),
  ACE_NTOHL (0x72766572),
  ACE_NTOHL (0x2f504f41),
  ACE_NTOHL (0x3a312e30),
  ACE_NTOHL (0x0),  // repository ID = IDL:omg.org/RTPortableServer/POA:1.0
    4,
  ACE_NTOHL (0x504f4100),  // name = POA
  };

static CORBA::TypeCode _tc_TAO_tc_RTPortableServer_POA (
    CORBA::tk_objref,
    sizeof (_oc_RTPortableServer_POA),
    (char *) &_oc_RTPortableServer_POA,
    0,
    sizeof (RTPortableServer::POA)
  );

namespace RTPortableServer
{
  ::CORBA::TypeCode_ptr _tc_POA =
    &_tc_TAO_tc_RTPortableServer_POA;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<RTPortableServer::POA>::to_object (
    CORBA::Object_ptr &_tao_elem
  ) const
{
  _tao_elem = CORBA::Object::_duplicate (this->value_);
  return 1;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<RTPortableServer::POA>::marshal_value (TAO_OutputCDR &)
{
  return 0;
}

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Impl_T<RTPortableServer::POA>::demarshal_value (TAO_InputCDR &)
{
  return 0;
}

// Copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    RTPortableServer::POA_ptr _tao_elem
  )
{
  RTPortableServer::POA_ptr _tao_objptr =
    RTPortableServer::POA::_duplicate (_tao_elem);
  _tao_any <<= &_tao_objptr;
}

// Non-copying insertion.
void
operator<<= (
    CORBA::Any &_tao_any,
    RTPortableServer::POA_ptr *_tao_elem
  )
{
  TAO::Any_Impl_T<RTPortableServer::POA>::insert (
      _tao_any,
      RTPortableServer::POA::_tao_any_destructor,
      RTPortableServer::_tc_POA,
      *_tao_elem
    );
}

CORBA::Boolean
operator>>= (
    const CORBA::Any &_tao_any,
    RTPortableServer::POA_ptr &_tao_elem
  )
{
  return
    TAO::Any_Impl_T<RTPortableServer::POA>::extract (
        _tao_any,
        RTPortableServer::POA::_tao_any_destructor,
        RTPortableServer::_tc_POA,
        _tao_elem
      );
}



// TAO_IDL - Generated from
// be/be_visitor_root/root.cpp:1703

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Objref_Traits<
        RTPortableServer::POA
      >;

  template class
    TAO_Objref_Var_T<
        RTPortableServer::POA
      >;

  template class
    TAO_Objref_Out_T<
        RTPortableServer::POA
      >;

  template class
    TAO::Any_Impl_T<
        RTPortableServer::POA
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Objref_Traits< \
        RTPortableServer::POA \
      >

# pragma instantiate \
    TAO_Objref_Var_T< \
        RTPortableServer::POA
      >

# pragma instantiate \
    TAO_Objref_Out_T< \
        RTPortableServer::POA
      >

# pragma instantiate \
    TAO::Any_Impl_T< \
        RTPortableServer::POA \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */
