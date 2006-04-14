// -*- C++ -*-

// ===================================================================
/**
 *  @file SL3_SecurityCurrent_Impl.h
 *
 *  $Id$
 *
 *  @author Ossama Othman <ossama@dre.vanderbilt.edu>
 */
// ===================================================================

#ifndef TAO_SL3_SECURITY_CURRENT_IMPL_H
#define TAO_SL3_SECURITY_CURRENT_IMPL_H

#include /**/ "ace/pre.h"

#include "ace/config-all.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "security_export.h"
#include "orbsvcs/SecurityLevel3C.h"

namespace TAO
{
  namespace SL3
  {
    /**
     * @class SecurityCurrent_Impl
     *
     * @brief Base class for the TSS portion of any underlying
     *        security mechanism.
     *
     * This class provides the same interface as the
     * SecurityLevel3::SecurityCurrent object.  However, it is not
     * derived from that interface since we need to explicitly avoid
     * virtual inheritance so that it is safe to store subclasses in a
     * "void * *" and later cast that pointer back to the subclass
     * pointer type.
     */
    class TAO_Security_Export SecurityCurrent_Impl
    {
    public:

      /// Destructor.
      virtual ~SecurityCurrent_Impl (void);

      /**
       * @name SecurityLevel3::Current Methods
       *
       * These methods are founds in the SecurityLevel3::Current
       * interface.
       */
      //@{
      /// Return the Credentials received from the client associate with
      /// the current request.
      virtual SecurityLevel3::ClientCredentials_ptr client_credentials (
          ACE_ENV_SINGLE_ARG_DECL)
        ACE_THROW_SPEC ((CORBA::SystemException)) = 0;

      /// Is the current request local?
      virtual CORBA::Boolean request_is_local (
          ACE_ENV_SINGLE_ARG_DECL)
        ACE_THROW_SPEC ((CORBA::SystemException)) = 0;
      //@}

      /// Return the unique tag that identifies the concrete subclass.
      virtual CORBA::ULong tag (void) const = 0;

    };

  }  // End Security namespace.
}  // End TAO namespace.

#include /**/ "ace/post.h"

#endif  /* TAO_SL3_SECURITY_CURRENT_IMPL_H */
