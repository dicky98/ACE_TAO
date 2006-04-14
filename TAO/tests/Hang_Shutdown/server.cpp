// $Id$

#include "test_i.h"
#include "ace/Get_Opt.h"
#include "ace/OS_NS_stdio.h"
#include "ace/Argv_Type_Converter.h"

namespace TAO
{
  namespace Test
  {
    const char *ior_output_file = "server.ior";

    static int
    try_main (int argc,
              char *argv[])
    {
      ACE_DECLARE_NEW_CORBA_ENV;

      ACE_TRY
        {
          CORBA::ORB_var orb =
            CORBA::ORB_init (argc,
                             argv,
                             ""
                             ACE_ENV_ARG_PARAMETER);
          ACE_TRY_CHECK;

          CORBA::Object_var poa_object =
            orb->resolve_initial_references("RootPOA"
                                            ACE_ENV_ARG_PARAMETER);
          ACE_TRY_CHECK;

          PortableServer::POA_var root_poa =
            PortableServer::POA::_narrow (poa_object.in ()
                                          ACE_ENV_ARG_PARAMETER);
          ACE_TRY_CHECK;

          if (CORBA::is_nil (root_poa.in ()))
            ACE_ERROR_RETURN ((LM_ERROR,
                               " (%P|%t) Panic: nil RootPOA\n"),
                              1);

          PortableServer::POAManager_var poa_manager =
            root_poa->the_POAManager ();

          test_i *test_impl;
          ACE_NEW_RETURN (test_impl,
                          test_i (),
                          1);
          PortableServer::ServantBase_var owner_transfer (test_impl);

          Hang_var test =
            test_impl->_this ();

          CORBA::String_var ior =
            orb->object_to_string (test.in ()
                                   ACE_ENV_ARG_PARAMETER);
          ACE_TRY_CHECK;

          // If the ior_output_file exists, output the ior to it
          FILE *output_file= ACE_OS::fopen (ior_output_file, ACE_TEXT("w"));
          if (output_file == 0)
            ACE_ERROR_RETURN ((LM_ERROR,
                               "Cannot open output file for writing IOR: %s",
                               ior_output_file),
                              1);
          ACE_OS::fprintf (output_file, "%s", ior.in ());
          ACE_OS::fclose (output_file);

          poa_manager->activate (ACE_ENV_SINGLE_ARG_PARAMETER);
          ACE_TRY_CHECK;

          ACE_Time_Value tv (10);

          orb->run (&tv);

          ACE_DEBUG ((LM_DEBUG,
                      "(%P|%t) server - event loop finished\n"));

          root_poa->destroy (1,
                             1
                             ACE_ENV_ARG_PARAMETER);
          ACE_TRY_CHECK;

          orb->destroy (ACE_ENV_SINGLE_ARG_PARAMETER);
          ACE_TRY_CHECK;
        }
      ACE_CATCHANY
        {
          ACE_PRINT_EXCEPTION (ACE_ANY_EXCEPTION,
                               "Caught CORBA exception \n");
          return -1;
        }
      ACE_ENDTRY;

      return 0;
    }
  }
}

int
ACE_TMAIN (int argc, ACE_TCHAR *argv[])
{
  ACE_Argv_Type_Converter convert (argc, argv);

  return TAO::Test::try_main (convert.get_argc(), convert.get_ASCII_argv());
}
