/* -*- C++ -*- $Id$ */

// ******  Code generated by the The ACE ORB (TAO) IDL Compiler *******
// TAO and the TAO IDL Compiler have been developed by the Center for
// Distributed Object Computing at Washington University, St. Louis.
//
// Information about TAO is available at:
//                 http://www.cs.wustl.edu/~schmidt/TAO.html

#include "TAOC.h"

#include "tao/TAOS.h"
#include "tao/Typecode.h"

#if !defined (__ACE_INLINE__)
#include "TAOC.i"
#endif /* !defined INLINE */

#if (TAO_HAS_CLIENT_PRIORITY_POLICY == 1)

static const CORBA::Long _oc_TAO_PrioritySelectionMode[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  34, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x653a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/PrioritySelectionMode:1.0
  22, ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x65000000),  // name = PrioritySelectionMode
  CORBA::tk_short,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_PrioritySelectionMode (CORBA::tk_alias, sizeof (_oc_TAO_PrioritySelectionMode), (char *) &_oc_TAO_PrioritySelectionMode, 0, sizeof (TAO::PrioritySelectionMode));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_PrioritySelectionMode, &_tc_TAO_tc_TAO_PrioritySelectionMode)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, USE_NO_PRIORITY, 0)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, USE_THREAD_PRIORITY, 1)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, USE_PRIORITY_RANGE, 2)
TAO_NAMESPACE_END
static const CORBA::Long _oc_TAO_PrioritySpecification[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  34, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53706563), ACE_NTOHL (0x69666963), ACE_NTOHL (0x6174696f), ACE_NTOHL (0x6e3a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/PrioritySpecification:1.0
  22, ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53706563), ACE_NTOHL (0x69666963), ACE_NTOHL (0x6174696f), ACE_NTOHL (0x6e000000),  // name = PrioritySpecification
  3, // member count
  5, ACE_NTOHL (0x6d6f6465), ACE_NTOHL (0x0),  // name = mode
  CORBA::tk_alias, // typecode kind for typedefs
  76, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    34, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x653a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/PrioritySelectionMode:1.0
    22, ACE_NTOHL (0x5072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x53656c65), ACE_NTOHL (0x6374696f), ACE_NTOHL (0x6e4d6f64), ACE_NTOHL (0x65000000),  // name = PrioritySelectionMode
    CORBA::tk_short,


  13, ACE_NTOHL (0x6d696e5f), ACE_NTOHL (0x7072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x0),  // name = min_priority
  CORBA::tk_short,

  13, ACE_NTOHL (0x6d61785f), ACE_NTOHL (0x7072696f), ACE_NTOHL (0x72697479), ACE_NTOHL (0x0),  // name = max_priority
  CORBA::tk_short,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_PrioritySpecification (CORBA::tk_struct, sizeof (_oc_TAO_PrioritySpecification), (char *) &_oc_TAO_PrioritySpecification, 0, sizeof (TAO::PrioritySpecification));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_PrioritySpecification, &_tc_TAO_tc_TAO_PrioritySpecification)
TAO_NAMESPACE_END
void TAO::PrioritySpecification::_tao_any_destructor (void *x)
{
  PrioritySpecification *tmp = ACE_static_cast (PrioritySpecification*,x);
  delete tmp;
}

TAO_NAMESPACE_TYPE (const CORBA::ULong)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::ULong, CLIENT_PRIORITY_POLICY_TYPE, 1413545984U)
TAO_NAMESPACE_END
TAO::ClientPriorityPolicy_ptr TAO::ClientPriorityPolicy::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  return ClientPriorityPolicy::_unchecked_narrow (obj, ACE_TRY_ENV);
}

TAO::ClientPriorityPolicy_ptr TAO::ClientPriorityPolicy::_unchecked_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &
  )
{
  if (CORBA::is_nil (obj))
    return ClientPriorityPolicy::_nil ();
  return
      ACE_reinterpret_cast
        (
          ClientPriorityPolicy_ptr,
            obj->_tao_QueryInterface
              (
                ACE_reinterpret_cast
                  (
                    ptr_arith_t,
                    &ClientPriorityPolicy::_narrow
                  )
              )
        );
}

TAO::ClientPriorityPolicy_ptr
TAO::ClientPriorityPolicy::_duplicate (ClientPriorityPolicy_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

void *TAO::ClientPriorityPolicy::_tao_QueryInterface (ptr_arith_t type)
{
  void *retv = 0;
  if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &ClientPriorityPolicy::_narrow))
    retv = ACE_reinterpret_cast (void*, this);
  else if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &CORBA::Policy::_narrow))
    retv = ACE_reinterpret_cast
      (
        void *,
        ACE_static_cast
          (
            CORBA::Policy_ptr,
            this
          )
      );
  else if (type == ACE_reinterpret_cast (ptr_arith_t, &CORBA::Object::_narrow))
    retv = ACE_reinterpret_cast (void *,
      ACE_static_cast (CORBA::Object_ptr, this));

  if (retv)
    this->_add_ref ();
  return retv;
}

const char* TAO::ClientPriorityPolicy::_interface_repository_id (void) const
{
  return "IDL:TAO/ClientPriorityPolicy:1.0";
}

#endif /* TAO_HAS_CLIENT_PRIORITY_POLICY == 1 */

#if (TAO_HAS_BUFFERING_CONSTRAINT_POLICY == 1)

static const CORBA::Long _oc_TAO_BufferingConstraintMode[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  36, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f64653a), ACE_NTOHL (0x312e3000),  // repository ID = IDL:TAO/BufferingConstraintMode:1.0
  24, ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f646500),  // name = BufferingConstraintMode
  CORBA::tk_ushort,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_BufferingConstraintMode (CORBA::tk_alias, sizeof (_oc_TAO_BufferingConstraintMode), (char *) &_oc_TAO_BufferingConstraintMode, 0, sizeof (TAO::BufferingConstraintMode));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_BufferingConstraintMode, &_tc_TAO_tc_TAO_BufferingConstraintMode)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_FLUSH, 0U)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_TIMEOUT, 1U)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_MESSAGE_COUNT, 2U)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::UShort)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::UShort, BUFFER_MESSAGE_BYTES, 4U)
TAO_NAMESPACE_END
static const CORBA::Long _oc_TAO_BufferingConstraint[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  32, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e743a), ACE_NTOHL (0x312e3000),  // repository ID = IDL:TAO/BufferingConstraint:1.0
  20, ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e7400),  // name = BufferingConstraint
  4, // member count
  5, ACE_NTOHL (0x6d6f6465), ACE_NTOHL (0x0),  // name = mode
  CORBA::tk_alias, // typecode kind for typedefs
  76, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    36, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f64653a), ACE_NTOHL (0x312e3000),  // repository ID = IDL:TAO/BufferingConstraintMode:1.0
    24, ACE_NTOHL (0x42756666), ACE_NTOHL (0x6572696e), ACE_NTOHL (0x67436f6e), ACE_NTOHL (0x73747261), ACE_NTOHL (0x696e744d), ACE_NTOHL (0x6f646500),  // name = BufferingConstraintMode
    CORBA::tk_ushort,


  8, ACE_NTOHL (0x74696d65), ACE_NTOHL (0x6f757400),  // name = timeout
  CORBA::tk_alias, // typecode kind for typedefs
  56, // encapsulation length
    TAO_ENCAP_BYTE_ORDER, // byte order
    31, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x6f6d672e), ACE_NTOHL (0x6f72672f), ACE_NTOHL (0x54696d65), ACE_NTOHL (0x42617365), ACE_NTOHL (0x2f54696d), ACE_NTOHL (0x65543a31), ACE_NTOHL (0x2e300000),  // repository ID = IDL:omg.org/TimeBase/TimeT:1.0
    6, ACE_NTOHL (0x54696d65), ACE_NTOHL (0x54000000),  // name = TimeT
    CORBA::tk_ulonglong,


  14, ACE_NTOHL (0x6d657373), ACE_NTOHL (0x6167655f), ACE_NTOHL (0x636f756e), ACE_NTOHL (0x74000000),  // name = message_count
  CORBA::tk_ulong,

  14, ACE_NTOHL (0x6d657373), ACE_NTOHL (0x6167655f), ACE_NTOHL (0x62797465), ACE_NTOHL (0x73000000),  // name = message_bytes
  CORBA::tk_ulong,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_BufferingConstraint (CORBA::tk_struct, sizeof (_oc_TAO_BufferingConstraint), (char *) &_oc_TAO_BufferingConstraint, 0, sizeof (TAO::BufferingConstraint));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_BufferingConstraint, &_tc_TAO_tc_TAO_BufferingConstraint)
TAO_NAMESPACE_END
void TAO::BufferingConstraint::_tao_any_destructor (void *x)
{
  BufferingConstraint *tmp = ACE_static_cast (BufferingConstraint*,x);
  delete tmp;
}

TAO_NAMESPACE_TYPE (const CORBA::ULong)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::ULong, BUFFERING_CONSTRAINT_POLICY_TYPE, 1413545985U)
TAO_NAMESPACE_END
TAO::BufferingConstraintPolicy_ptr TAO::BufferingConstraintPolicy::_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &ACE_TRY_ENV
  )
{
  return BufferingConstraintPolicy::_unchecked_narrow (obj, ACE_TRY_ENV);
}

TAO::BufferingConstraintPolicy_ptr TAO::BufferingConstraintPolicy::_unchecked_narrow (
    CORBA::Object_ptr obj,
    CORBA::Environment &
  )
{
  if (CORBA::is_nil (obj))
    return BufferingConstraintPolicy::_nil ();
  return
      ACE_reinterpret_cast
        (
          BufferingConstraintPolicy_ptr,
            obj->_tao_QueryInterface
              (
                ACE_reinterpret_cast
                  (
                    ptr_arith_t,
                    &BufferingConstraintPolicy::_narrow
                  )
              )
        );
}

TAO::BufferingConstraintPolicy_ptr
TAO::BufferingConstraintPolicy::_duplicate (BufferingConstraintPolicy_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

void *TAO::BufferingConstraintPolicy::_tao_QueryInterface (ptr_arith_t type)
{
  void *retv = 0;
  if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &BufferingConstraintPolicy::_narrow))
    retv = ACE_reinterpret_cast (void*, this);
  else if (type == ACE_reinterpret_cast
    (ptr_arith_t,
      &CORBA::Policy::_narrow))
    retv = ACE_reinterpret_cast
      (
        void *,
        ACE_static_cast
          (
            CORBA::Policy_ptr,
            this
          )
      );
  else if (type == ACE_reinterpret_cast (ptr_arith_t, &CORBA::Object::_narrow))
    retv = ACE_reinterpret_cast (void *,
      ACE_static_cast (CORBA::Object_ptr, this));

  if (retv)
    this->_add_ref ();
  return retv;
}

const char* TAO::BufferingConstraintPolicy::_interface_repository_id (void) const
{
  return "IDL:TAO/BufferingConstraintPolicy:1.0";
}

#endif /* TAO_HAS_BUFFERING_CONSTRAINT_POLICY == 1 */

static const CORBA::Long _oc_TAO_SyncScope[] =
{
  TAO_ENCAP_BYTE_ORDER, // byte order
  22, ACE_NTOHL (0x49444c3a), ACE_NTOHL (0x54414f2f), ACE_NTOHL (0x53796e63), ACE_NTOHL (0x53636f70), ACE_NTOHL (0x653a312e), ACE_NTOHL (0x30000000),  // repository ID = IDL:TAO/SyncScope:1.0
  10, ACE_NTOHL (0x53796e63), ACE_NTOHL (0x53636f70), ACE_NTOHL (0x65000000),  // name = SyncScope
  CORBA::tk_short,

};
static CORBA::TypeCode _tc_TAO_tc_TAO_SyncScope (CORBA::tk_alias, sizeof (_oc_TAO_SyncScope), (char *) &_oc_TAO_SyncScope, 0, sizeof (TAO::SyncScope));
TAO_NAMESPACE_TYPE (CORBA::TypeCode_ptr)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (CORBA::TypeCode_ptr, _tc_SyncScope, &_tc_TAO_tc_TAO_SyncScope)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_NONE, 0)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_WITH_TRANSPORT, 1)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_WITH_SERVER, 2)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_WITH_TARGET, 3)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_EAGER_BUFFERING, 0)
TAO_NAMESPACE_END
TAO_NAMESPACE_TYPE (const CORBA::Short)
TAO_NAMESPACE_BEGIN (TAO)
TAO_NAMESPACE_DEFINE (const CORBA::Short, SYNC_DELAYED_BUFFERING, -2)
TAO_NAMESPACE_END

#if (TAO_HAS_CLIENT_PRIORITY_POLICY == 1)

 void operator<<= (CORBA::Any &_tao_any, const TAO::PrioritySpecification &_tao_elem) // copying
{
  TAO_OutputCDR stream;
  stream << _tao_elem;
  _tao_any._tao_replace (
      TAO::_tc_PrioritySpecification,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin ()
    );
}

void operator<<= (CORBA::Any &_tao_any, TAO::PrioritySpecification *_tao_elem) // non copying
{
  TAO_OutputCDR stream;
  stream << *_tao_elem;
  _tao_any._tao_replace (
      TAO::_tc_PrioritySpecification,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin (),
      1,
      _tao_elem,
      TAO::PrioritySpecification::_tao_any_destructor
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, TAO::PrioritySpecification *&_tao_elem)
{
  return _tao_any >>= ACE_const_cast(const TAO::PrioritySpecification*&,_tao_elem);
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const TAO::PrioritySpecification *&_tao_elem)
{
  _tao_elem = 0;
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_PrioritySpecification, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = ACE_static_cast(
          const TAO::PrioritySpecification*,
          _tao_any.value ()
        );
      return 1;
    }
    else
    {
      TAO::PrioritySpecification *tmp;
      ACE_NEW_RETURN (tmp, TAO::PrioritySpecification, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *tmp)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            TAO::_tc_PrioritySpecification,
            1,
            ACE_static_cast (void *, tmp),
            TAO::PrioritySpecification::_tao_any_destructor
          );
        _tao_elem = tmp;
        return 1;
      }
      else
      {
        delete tmp;
      }
    }
  }
  ACE_CATCHANY
  {
  }
  ACE_ENDTRY;
  return 0;
}

#endif /* TAO_HAS_CLIENT_PRIORITY_POLICY == 1 */

#if (TAO_HAS_BUFFERING_CONSTRAINT_POLICY == 1)

void operator<<= (CORBA::Any &_tao_any, const TAO::BufferingConstraint &_tao_elem) // copying
{
  TAO_OutputCDR stream;
  stream << _tao_elem;
  _tao_any._tao_replace (
      TAO::_tc_BufferingConstraint,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin ()
    );
}

void operator<<= (CORBA::Any &_tao_any, TAO::BufferingConstraint *_tao_elem) // non copying
{
  TAO_OutputCDR stream;
  stream << *_tao_elem;
  _tao_any._tao_replace (
      TAO::_tc_BufferingConstraint,
      TAO_ENCAP_BYTE_ORDER,
      stream.begin (),
      1,
      _tao_elem,
      TAO::BufferingConstraint::_tao_any_destructor
    );
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, TAO::BufferingConstraint *&_tao_elem)
{
  return _tao_any >>= ACE_const_cast(const TAO::BufferingConstraint*&,_tao_elem);
}

CORBA::Boolean operator>>= (const CORBA::Any &_tao_any, const TAO::BufferingConstraint *&_tao_elem)
{
  _tao_elem = 0;
  ACE_TRY_NEW_ENV
  {
    CORBA::TypeCode_var type = _tao_any.type ();
    if (!type->equivalent (TAO::_tc_BufferingConstraint, ACE_TRY_ENV)) // not equal
      {
        return 0;
      }
    ACE_TRY_CHECK;
    if (_tao_any.any_owns_data ())
    {
      _tao_elem = ACE_static_cast(
          const TAO::BufferingConstraint*,
          _tao_any.value ()
        );
      return 1;
    }
    else
    {
      TAO::BufferingConstraint *tmp;
      ACE_NEW_RETURN (tmp, TAO::BufferingConstraint, 0);
      TAO_InputCDR stream (
          _tao_any._tao_get_cdr (),
          _tao_any._tao_byte_order ()
        );
      if (stream >> *tmp)
      {
        ((CORBA::Any *)&_tao_any)->_tao_replace (
            TAO::_tc_BufferingConstraint,
            1,
            ACE_static_cast (void *, tmp),
            TAO::BufferingConstraint::_tao_any_destructor
          );
        _tao_elem = tmp;
        return 1;
      }
      else
      {
        delete tmp;
      }
    }
  }
  ACE_CATCHANY
  {
  }
  ACE_ENDTRY;
  return 0;
}

#endif /* TAO_HAS_BUFFERING_CONSTRAINT_POLICY == 1 */
