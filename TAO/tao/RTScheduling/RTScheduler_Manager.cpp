// $Id$

#include "RTScheduler_Manager.h"

#if ! defined (__ACE_INLINE__)
#include "RTScheduler_Manager.i"
#endif /* __ACE_INLINE__ */

ACE_RCSID(TAO, RT_ORB, "$Id$")

TAO_RTScheduler_Manager::TAO_RTScheduler_Manager (void)
{
 
}

TAO_RTScheduler_Manager::~TAO_RTScheduler_Manager (void)
{
}

TAO_RTScheduler_Manager_ptr
TAO_RTScheduler_Manager::_narrow (CORBA::Object_ptr obj
                                  ACE_ENV_ARG_DECL_NOT_USED)
{
  return 
    TAO_RTScheduler_Manager::_duplicate (
        dynamic_cast<TAO_RTScheduler_Manager *> (obj)
      );
}

TAO_RTScheduler_Manager_ptr
TAO_RTScheduler_Manager::_duplicate (TAO_RTScheduler_Manager_ptr obj)
{
  if (!CORBA::is_nil (obj))
    obj->_add_ref ();
  return obj;
}

const char*
TAO_RTScheduler_Manager::_interface_repository_id (void) const
{
  return "IDL:RTScheduler_Manager:1.0";
}

