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
// be/be_codegen.cpp:848

#ifndef _TAO_IDL_ORIG_IOP_CODECA_ANYOP_H_
#define _TAO_IDL_ORIG_IOP_CODECA_ANYOP_H_

#include /**/ "ace/pre.h"

// ==== Handcrafted
namespace IOP
{
  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_Codec;

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_EncodingFormat;

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_Encoding;

  TAO_NAMESPACE_STORAGE_CLASS ::CORBA::TypeCode_ptr _tc_CodecFactory;
}

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, IOP::Codec_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::InvalidTypeForEncoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::InvalidTypeForEncoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::InvalidTypeForEncoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::InvalidTypeForEncoding *&);

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::FormatMismatch &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::FormatMismatch*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::FormatMismatch *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::FormatMismatch *&);

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Codec::TypeMismatch &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Codec::TypeMismatch*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Codec::TypeMismatch *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Codec::TypeMismatch *&);

// TAO_IDL - Generated from
// be/be_visitor_structure/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::Encoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::Encoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::Encoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::Encoding *&);

// TAO_IDL - Generated from
// be/be_visitor_interface/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory_ptr); // copying
TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory_ptr *); // non-copying
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::CodecFactory_ptr &);

// TAO_IDL - Generated from
// be/be_visitor_exception/any_op_ch.cpp:52

TAO_Export void operator<<= (CORBA::Any &, const IOP::CodecFactory::UnknownEncoding &); // copying version
TAO_Export void operator<<= (CORBA::Any &, IOP::CodecFactory::UnknownEncoding*); // noncopying version
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, IOP::CodecFactory::UnknownEncoding *&); // deprecated
TAO_Export CORBA::Boolean operator>>= (const CORBA::Any &, const IOP::CodecFactory::UnknownEncoding *&);

#include /**/ "ace/post.h"

#endif /* ifndef */
