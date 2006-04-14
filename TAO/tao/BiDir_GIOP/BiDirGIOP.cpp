#include "BiDir_ORBInitializer.h"
#include "BiDirGIOP.h"
#include "BiDirPolicy_Validator.h"
#include "tao/ORB_Core.h"
#include "tao/debug.h"
#include "tao/ORBInitializer_Registry.h"

ACE_RCSID (BiDir_GIOP,
           BiDirGIOP,
           "$Id$")


// Set the flag to zero to start with
int TAO_BiDirGIOP_Loader::is_activated_ = 0;

TAO_BiDirGIOP_Loader::TAO_BiDirGIOP_Loader (void)
{
}

TAO_BiDirGIOP_Loader::~TAO_BiDirGIOP_Loader (void)
{
}

int
TAO_BiDirGIOP_Loader::init (int,
                            ACE_TCHAR* [])
{
  if (TAO_BiDirGIOP_Loader::is_activated_ == 0 && TAO_DEF_GIOP_MINOR >= 2)
    {
      PortableInterceptor::ORBInitializer_ptr tmp_orb_initializer =
        PortableInterceptor::ORBInitializer::_nil ();
      PortableInterceptor::ORBInitializer_var bidir_orb_initializer;

      ACE_DECLARE_NEW_CORBA_ENV;
      ACE_TRY
        {
          /// Register the BiDir ORBInitializer.
          ACE_NEW_THROW_EX (tmp_orb_initializer,
                            TAO_BiDir_ORBInitializer,
                            CORBA::NO_MEMORY (
                                CORBA::SystemException::_tao_minor_code (
                                    TAO::VMCID,
                                    ENOMEM),
                                CORBA::COMPLETED_NO));
          ACE_TRY_CHECK;

          bidir_orb_initializer = tmp_orb_initializer;

          PortableInterceptor::register_orb_initializer (
            bidir_orb_initializer.in ()
            ACE_ENV_ARG_PARAMETER);
          ACE_TRY_CHECK;

          TAO_BiDirGIOP_Loader::is_activated_ = 1;
        }
      ACE_CATCHANY
        {
          if (TAO_debug_level > 0)
            {
              ACE_PRINT_EXCEPTION (ACE_ANY_EXCEPTION,
                                   "(%P | %t) Caught exception:");
            }
          return -1;
        }
      ACE_ENDTRY;
    }

  return 0;
}

void
TAO_BiDirGIOP_Loader::load_policy_validators (TAO_Policy_Validator &val
                                              ACE_ENV_ARG_DECL)
  ACE_THROW_SPEC ((CORBA::SystemException))
{
  // Is this true? Does the GIOP protocol version matter here?
  if (TAO_DEF_GIOP_MINOR < 2)
    return;

  TAO_BiDirPolicy_Validator *validator = 0;
  ACE_NEW_THROW_EX (validator,
                    TAO_BiDirPolicy_Validator (val.orb_core ()),
                    CORBA::NO_MEMORY (
                        CORBA::SystemException::_tao_minor_code (
                            TAO::VMCID,
                            ENOMEM),
                        CORBA::COMPLETED_NO));
  ACE_CHECK;

  // We may be adding another TAO_BiDirPolicy_Validator instance for the
  // same ORB (different POA). In cases where huge numbers of bi-directional POA instances
  // are created, having a validator instance per POA may introduce additional delays in
  // policy validation and hence, the overal policy creation time. Since this is out of the
  // critical invocation processing path, I plan to keep the design simple and not try to
  // avoid an ineficiency of such small proportions.
  val.add_validator (validator);
}

int
TAO_BiDirGIOP_Loader::Initializer (void)
{
  return ACE_Service_Config::process_directive (ace_svc_desc_TAO_BiDirGIOP_Loader);
}

ACE_STATIC_SVC_DEFINE (TAO_BiDirGIOP_Loader,
                       ACE_TEXT ("BiDirGIOP_Loader"),
                       ACE_SVC_OBJ_T,
                       &ACE_SVC_NAME (TAO_BiDirGIOP_Loader),
                       ACE_Service_Type::DELETE_THIS | ACE_Service_Type::DELETE_OBJ,
                       0)

ACE_FACTORY_DEFINE (TAO_BiDirGIOP, TAO_BiDirGIOP_Loader)
