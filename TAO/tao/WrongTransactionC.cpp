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
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_codegen.cpp:301


#include "WrongTransactionC.h"

#if (TAO_HAS_MINIMUM_CORBA == 0)

#include "tao/Any_Dual_Impl_T.h"
#include "tao/Typecode.h"

#if defined (__BORLANDC__)
#pragma option -w-rvl -w-rch -w-ccc -w-aus -w-sig
#endif /* __BORLANDC__ */

#if !defined (__ACE_INLINE__)
#include "WrongTransactionC.i"
#endif /* !defined INLINE */

#include "ace/OS_NS_string.h"

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_arg_traits.cpp:59

// Arg traits specializations.
namespace TAO
{
};

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/exception_cs.cpp:63

CORBA::WrongTransaction::WrongTransaction (void)
  : CORBA::UserException (
        "IDL:omg.org/CORBA/WrongTransaction:1.0",
        "WrongTransaction"
      )
{
}

CORBA::WrongTransaction::~WrongTransaction (void)
{
}

CORBA::WrongTransaction::WrongTransaction (const ::CORBA::WrongTransaction &_tao_excp)
  : CORBA::UserException (
        _tao_excp._rep_id (),
        _tao_excp._name ()
      )
{
}

CORBA::WrongTransaction&
CORBA::WrongTransaction::operator= (const ::CORBA::WrongTransaction &_tao_excp)
{
  this->ACE_NESTED_CLASS (CORBA, UserException)::operator= (_tao_excp);
  return *this;
}

void CORBA::WrongTransaction::_tao_any_destructor (void *_tao_void_pointer)
{
  WrongTransaction *_tao_tmp_pointer =
    ACE_static_cast (WrongTransaction*, _tao_void_pointer);
  delete _tao_tmp_pointer;
}

CORBA::WrongTransaction *
CORBA::WrongTransaction::_downcast (CORBA::Exception *_tao_excp)
{
  if (!ACE_OS::strcmp ("IDL:omg.org/CORBA/WrongTransaction:1.0", 
                       _tao_excp->_rep_id ()))
    {
      return ACE_dynamic_cast (WrongTransaction *, _tao_excp);
    }
  else
    {
      return 0;
    }
}

CORBA::Exception *CORBA::WrongTransaction::_alloc (void)
{
  CORBA::Exception *retval = 0;
  ACE_NEW_RETURN (retval, ::CORBA::WrongTransaction, 0);
  return retval;
}

CORBA::Exception *
CORBA::WrongTransaction::_tao_duplicate (void) const
{
  CORBA::Exception *result;
  ACE_NEW_RETURN (
      result,
      ::CORBA::WrongTransaction (*this),
      0
    );
  return result;
}

void CORBA::WrongTransaction::_raise (void) const
{
  TAO_RAISE (*this);
}

void CORBA::WrongTransaction::_tao_encode (
    TAO_OutputCDR &cdr
    ACE_ENV_ARG_DECL
  ) const
{
  if (cdr << *this)
    {
      return;
    }

  ACE_THROW (CORBA::MARSHAL ());
}

void CORBA::WrongTransaction::_tao_decode (
    TAO_InputCDR &cdr
    ACE_ENV_ARG_DECL
  )
{
  if (cdr >> *this)
    {
      return;
    }

  ACE_THROW (CORBA::MARSHAL ());
}

// TAO extension - the virtual _type method.
CORBA::TypeCode_ptr CORBA::WrongTransaction::_type (void) const
{
  return ::CORBA::_tc_WrongTransaction;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_typecode/typecode_defn.cpp:284

static const CORBA::Long _oc_CORBA_WrongTransaction[] =
{
    TAO_ENCAP_BYTE_ORDER, // byte order
  39,
  ACE_NTOHL (0x49444c3a),
  ACE_NTOHL (0x6f6d672e),
  ACE_NTOHL (0x6f72672f),
  ACE_NTOHL (0x434f5242),
  ACE_NTOHL (0x412f5772),
  ACE_NTOHL (0x6f6e6754),
  ACE_NTOHL (0x72616e73),
  ACE_NTOHL (0x61637469),
  ACE_NTOHL (0x6f6e3a31),
  ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/CORBA/WrongTransaction:1.0
    17,
  ACE_NTOHL (0x57726f6e),
  ACE_NTOHL (0x67547261),
  ACE_NTOHL (0x6e736163),
  ACE_NTOHL (0x74696f6e),
  ACE_NTOHL (0x0),  // name = WrongTransaction
  0, // member count
  };

static CORBA::TypeCode _tc_TAO_tc_CORBA_WrongTransaction (
    CORBA::tk_except,
    sizeof (_oc_CORBA_WrongTransaction),
    (char *) &_oc_CORBA_WrongTransaction,
    0,
    sizeof (CORBA::WrongTransaction)
  );

namespace CORBA
{
  ::CORBA::TypeCode_ptr _tc_WrongTransaction =
    &_tc_TAO_tc_CORBA_WrongTransaction;
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_exception/any_op_cs.cpp:50

ACE_TEMPLATE_SPECIALIZATION
CORBA::Boolean
TAO::Any_Dual_Impl_T<CORBA::WrongTransaction>::demarshal_value (
    TAO_InputCDR & cdr
  )
{
  CORBA::String_var id;

  if ((cdr >> id.out ()) == 0)
    {
      return 0;
    }

  ACE_TRY_NEW_ENV
    {
      this->value_->_tao_decode (cdr ACE_ENV_ARG_PARAMETER);
      ACE_TRY_CHECK;
    }
  ACE_CATCHANY
    {
      return 0;
    }
  ACE_ENDTRY;

  return 1;
}

// Copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    const CORBA::WrongTransaction &_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::WrongTransaction>::insert_copy (
      _tao_any,
      CORBA::WrongTransaction::_tao_any_destructor,
      CORBA::_tc_WrongTransaction,
      _tao_elem
    );
}

// Non-copying insertion.
void operator<<= (
    CORBA::Any &_tao_any,
    CORBA::WrongTransaction *_tao_elem
  )
{
  TAO::Any_Dual_Impl_T<CORBA::WrongTransaction>::insert (
      _tao_any,
      CORBA::WrongTransaction::_tao_any_destructor,
      CORBA::_tc_WrongTransaction,
      _tao_elem
    );
}

// Extraction to non-const pointer (deprecated).
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    CORBA::WrongTransaction *&_tao_elem
  )
{
  return _tao_any >>= ACE_const_cast (
      const CORBA::WrongTransaction *&,
      _tao_elem
    );
}

// Extraction to const pointer.
CORBA::Boolean operator>>= (
    const CORBA::Any &_tao_any,
    const CORBA::WrongTransaction *&_tao_elem
  )
{
  return
    TAO::Any_Dual_Impl_T<CORBA::WrongTransaction>::extract (
        _tao_any,
        CORBA::WrongTransaction::_tao_any_destructor,
        CORBA::_tc_WrongTransaction,
        _tao_elem
      );
}

// TAO_IDL - Generated from
// W:\ACE_wrappers\TAO\TAO_IDL\be\be_visitor_root/root.cpp:1703

#if defined (ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION)

  template class
    TAO::Any_Dual_Impl_T<
        CORBA::WrongTransaction
      >;

#elif defined (ACE_HAS_TEMPLATE_INSTANTIATION_PRAGMA)

# pragma instantiate \
    TAO::Any_Dual_Impl_T< \
        CORBA::WrongTransaction \
      >

#endif /* !ACE_HAS_EXPLICIT_TEMPLATE_INSTANTIATION */

#endif /* TAO_HAS_MINIMUM_CORBA == 0 */
