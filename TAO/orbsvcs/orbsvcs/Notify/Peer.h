/* -*- C++ -*- */
/**
 *  @file Peer.h
 *
 *  $Id$
 *
 *  @author Pradeep Gore <pradeep@oomworks.com>
 *
 *
 */

#ifndef TAO_Notify_PEER_H
#define TAO_Notify_PEER_H
#include /**/ "ace/pre.h"

#include "notify_serv_export.h"

#if !defined (ACE_LACKS_PRAGMA_ONCE)
# pragma once
#endif /* ACE_LACKS_PRAGMA_ONCE */

#include "orbsvcs/CosNotificationC.h"
#include "EventTypeSeq.h"

class TAO_Notify_Proxy;
class TAO_Notify_QoSProperties;
class TAO_Notify_Peer;

/**
 * @class TAO_Notify_Peer
 *
 * @brief Base class for Supplier and Consumer classes.
 *        This object delegates its reference count to its creator proxy object.
 *
 */
class TAO_Notify_Serv_Export TAO_Notify_Peer
{
public:
  typedef TAO_Notify_Refcountable_Guard_T< TAO_Notify_Peer > Ptr;
  /// Constuctor
  TAO_Notify_Peer (void);

  /// Destructor
  virtual ~TAO_Notify_Peer ();

  /// This method sigantures deliberately match the RefCounting methods required for ESF Proxy
  CORBA::ULong _incr_refcnt (void);
  CORBA::ULong _decr_refcnt (void);


  /// Shutdown the peer.
  virtual void shutdown (ACE_ENV_SINGLE_ARG_DECL);

  /// Access Proxy.
  virtual TAO_Notify_Proxy* proxy (void) = 0;

  // Dispatch updates
  virtual void dispatch_updates (const TAO_Notify_EventTypeSeq & added,
                                 const TAO_Notify_EventTypeSeq & removed
                                 ACE_ENV_ARG_DECL);

  /// QoS changed notification from the Peer.
  virtual void qos_changed (const TAO_Notify_QoSProperties& qos_properties);

  /// Handle dispatch exceptions.
  void handle_dispatch_exception (ACE_ENV_SINGLE_ARG_DECL);

  /// Retrieve the ior of this peer
  virtual bool get_ior (ACE_CString & iorstr) const = 0;

protected:
  /// Implementation of Peer specific dispatch_updates
  virtual void dispatch_updates_i (const CosNotification::EventTypeSeq& added,
                                   const CosNotification::EventTypeSeq& removed
                                   ACE_ENV_ARG_DECL) = 0;
private:
  /// Release
  virtual void release (void) = 0;
};

#include /**/ "ace/post.h"
#endif /* TAO_Notify_PEER_H */
