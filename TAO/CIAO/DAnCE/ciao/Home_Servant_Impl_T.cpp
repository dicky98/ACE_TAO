// $Id$

#ifndef CIAO_HOME_SERVANT_IMPL_T_C
#define CIAO_HOME_SERVANT_IMPL_T_C

#include "Home_Servant_Impl_T.h"

namespace CIAO
{
  template <typename BASE_SKEL,
            typename EXEC,
            typename EXEC_VAR,
            typename COMP,
            typename COMP_VAR,
            typename COMP_EXEC,
            typename COMP_EXEC_VAR,
            typename COMP_SVNT>
  Home_Servant_Impl<BASE_SKEL,
                    EXEC,
                    EXEC_VAR,
                    COMP,
                    COMP_VAR,
                    COMP_EXEC,
                    COMP_EXEC_VAR,
                    COMP_SVNT>::Home_Servant_Impl (
      EXEC * exe,
      Session_Container * c
    )
    : Home_Servant_Impl_Base (c),
      executor_ (EXEC::_duplicate (exe))
  {
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename EXEC_VAR,
            typename COMP,
            typename COMP_VAR,
            typename COMP_EXEC,
            typename COMP_EXEC_VAR,
            typename COMP_SVNT>
  Home_Servant_Impl<BASE_SKEL,
                    EXEC,
                    EXEC_VAR,
                    COMP,
                    COMP_VAR,
                    COMP_EXEC,
                    COMP_EXEC_VAR,
                    COMP_SVNT>::~Home_Servant_Impl (void)
  {
    // @@ JAI if you have tyedefed something, please use all CAPS.
    const obj_iterator end =
      this->objref_map_.end ();

    for (obj_iterator iter =
           this->objref_map_.begin ();
         iter != end; ++iter)
      {
        this->remove_component ((*iter).int_id_);
      }
  }

  // Operations for CCMHome interface.

  template <typename BASE_SKEL,
            typename EXEC,
            typename EXEC_VAR,
            typename COMP,
            typename COMP_VAR,
            typename COMP_EXEC,
            typename COMP_EXEC_VAR,
            typename COMP_SVNT>
  void
  Home_Servant_Impl<BASE_SKEL,
                    EXEC,
                    EXEC_VAR,
                    COMP,
                    COMP_VAR,
                    COMP_EXEC,
                    COMP_EXEC_VAR,
                    COMP_SVNT>::remove_component (
      ::Components::CCMObject_ptr comp
      ACE_ENV_ARG_DECL
    )
    ACE_THROW_SPEC ((CORBA::SystemException,
                     Components::RemoveFailure))
  {
    PortableServer::ObjectId_var oid =
      this->container_->the_POA ()->reference_to_id (comp
                                                     ACE_ENV_ARG_PARAMETER);
    ACE_CHECK;

    Components::CCMObject_var ccm_obj_ptr;
    COMP_SVNT *servant = 0;

    if (objref_map_.unbind (oid.in (), ccm_obj_ptr) != 0)
      {
        // @@ JAI do error handling like printing out debug statements
        // etc.
        return;
      }

    COMP_VAR _ciao_comp =
      COMP::_narrow (ccm_obj_ptr
                     ACE_ENV_ARG_PARAMETER);
    ACE_CHECK;

    if (CORBA::is_nil (_ciao_comp.in ()))
      {
        // @@ Jai, This should not be thrown by applications like
        // this. Try a beter one, mostly CCM specific.
        ACE_THROW (CORBA::INTERNAL ());
      }

    // @@ Jai, could you please add a line of documentation to say
    // what this is supposed to be doing?
    _ciao_comp->remove (ACE_ENV_SINGLE_ARG_PARAMETER);
    ACE_CHECK;

    if (component_map_.unbind (oid.in (), servant) == 0)
      {

        PortableServer::ServantBase_var safe (servant);
        servant->_ciao_passivate (ACE_ENV_SINGLE_ARG_PARAMETER);
        ACE_CHECK;
      }
    }

  }

  // Operations for keyless home interface.

  template <typename BASE_SKEL,
            typename EXEC,
            typename EXEC_VAR,
            typename COMP,
            typename COMP_VAR,
            typename COMP_EXEC,
            typename COMP_EXEC_VAR,
            typename COMP_SVNT>
  Components::CCMObject_ptr
  Home_Servant_Impl<BASE_SKEL,
                    EXEC,
                    EXEC_VAR,
                    COMP,
                    COMP_VAR,
                    COMP_EXEC,
                    COMP_EXEC_VAR,
                    COMP_SVNT>::create_component (
      ACE_ENV_SINGLE_ARG_DECL
    )
    ACE_THROW_SPEC ((CORBA::SystemException,
                     Components::CreateFailure))
  {
    return this->create (ACE_ENV_SINGLE_ARG_PARAMETER);
  }

  // Operations for implicit home interface.

  template <typename BASE_SKEL,
            typename EXEC,
            typename EXEC_VAR,
            typename COMP,
            typename COMP_VAR,
            typename COMP_EXEC,
            typename COMP_EXEC_VAR,
            typename COMP_SVNT>
  COMP *
  Home_Servant_Impl<BASE_SKEL,
                    EXEC,
                    EXEC_VAR,
                    COMP,
                    COMP_VAR,
                    COMP_EXEC,
                    COMP_EXEC_VAR,
                    COMP_SVNT>::create (
      ACE_ENV_SINGLE_ARG_DECL
    )
    ACE_THROW_SPEC ((CORBA::SystemException,
                     Components::CreateFailure))
  {
    if (this->executor_.in () == 0)
    {
      ACE_THROW_RETURN (CORBA::INTERNAL (),
                        COMP::_nil ());
    }

    ::Components::EnterpriseComponent_var _ciao_ec =
      this->executor_->create (ACE_ENV_SINGLE_ARG_PARAMETER);
    ACE_CHECK_RETURN (COMP::_nil ());

    COMP_EXEC_VAR _ciao_comp =
      COMP_EXEC::_narrow (_ciao_ec.in ()
                          ACE_ENV_ARG_PARAMETER);
    ACE_CHECK_RETURN (COMP::_nil ());

    return this->_ciao_activate_component (_ciao_comp.in ()
                                           ACE_ENV_ARG_PARAMETER);
  }

  // CIAO-specific operations.

  template <typename BASE_SKEL,
            typename EXEC,
            typename EXEC_VAR,
            typename COMP,
            typename COMP_VAR,
            typename COMP_EXEC,
            typename COMP_EXEC_VAR,
            typename COMP_SVNT>
  COMP *
  Home_Servant_Impl<BASE_SKEL,
                    EXEC,
                    EXEC_VAR,
                    COMP,
                    COMP_VAR,
                    COMP_EXEC,
                    COMP_EXEC_VAR,
                    COMP_SVNT>::_ciao_activate_component (
      COMP_EXEC *exe
      ACE_ENV_ARG_DECL
    )
    ACE_THROW_SPEC ((CORBA::SystemException))
  {
    CORBA::Object_var hobj =
      this->container_->get_objref (this
                                    ACE_ENV_ARG_PARAMETER);
    ACE_CHECK_RETURN (COMP::_nil ());

    Components::CCMHome_var home =
      Components::CCMHome::_narrow (hobj.in ()
                                    ACE_ENV_ARG_PARAMETER);
    ACE_CHECK_RETURN (COMP::_nil ());

    COMP_SVNT *svt = 0;
    ACE_NEW_RETURN (svt,
                    COMP_SVNT (exe,
                               home.in (),
                               this->container_),
                    COMP::_nil ());

    PortableServer::ServantBase_var safe (svt);
    PortableServer::ObjectId_var oid;

    CORBA::Object_var objref =
      this->container_->install_component (svt,
                                           oid.out ()
                                           ACE_ENV_ARG_PARAMETER);
    ACE_CHECK_RETURN (COMP::_nil ());

    COMP_VAR ho = COMP::_narrow (objref.in ()
                                 ACE_ENV_ARG_PARAMETER);
    ACE_CHECK_RETURN (COMP::_nil ());

    Components::CCMObject_var ccmobjref =
      Components::CCMObject::_narrow (objref.in ()
                                      ACE_ENV_ARG_PARAMETER);
    ACE_CHECK_RETURN (Components::CCMObject::_nil ());

    this->objref_map_.bind (oid.in (),
      Components::CCMObject::_duplicate (ccmobjref.in ()));

    if (this->component_map_.bind (oid.in (), svt) == 0)
      {
        safe._retn ();
      }

    return ho._retn ();
  }

  template <typename BASE_SKEL,
            typename EXEC,
            typename EXEC_VAR,
            typename COMP,
            typename COMP_VAR,
            typename COMP_EXEC,
            typename COMP_EXEC_VAR,
            typename COMP_SVNT>
  void
  Home_Servant_Impl<BASE_SKEL,
                    EXEC,
                    EXEC_VAR,
                    COMP,
                    COMP_VAR,
                    COMP_EXEC,
                    COMP_EXEC_VAR,
                    COMP_SVNT>::_ciao_passivate_component (
      COMP *comp
      ACE_ENV_ARG_DECL
    )
    ACE_THROW_SPEC ((CORBA::SystemException))
  {
    PortableServer::ObjectId_var oid;
    this->container_->uninstall_component (comp,
                                           oid.out ()
                                           ACE_ENV_ARG_PARAMETER);
    ACE_CHECK;

    COMP_SVNT *servant = 0;

    if (this->component_map_.unbind (oid.in (), servant) == 0)
    {
      PortableServer::ServantBase_var safe (servant);

      servant->_ciao_passivate (ACE_ENV_SINGLE_ARG_PARAMETER);
      ACE_CHECK;
    }
  }
}

#endif /* CIAO_HOME_SERVANT_IMPL_T_C */
