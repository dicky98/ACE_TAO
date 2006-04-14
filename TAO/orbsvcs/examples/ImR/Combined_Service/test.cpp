// $Id$
// This is a simple test of an ImR using the corba interfaces

#include "testC.h"

#include <stdexcept>
#include "ace/SString.h"
#include "ace/Log_Msg.h"
#include "ace/OS_NS_stdio.h"
#include "ace/Argv_Type_Converter.h"

#define assertTrue(CONDITION) \
    if (CONDITION == false) { \
      ACE_CString str("Error : "#CONDITION" "__FILE__":"); \
      char line[32]; \
      ACE_OS::sprintf(line, "%d", __LINE__); \
      throw std::runtime_error(str.c_str()); \
    }

using namespace CORBA;

int ACE_TMAIN(int argc, ACE_TCHAR* argv[])
{
  ACE_Argv_Type_Converter convert (argc, argv);

  try {
 
    ORB_var orb = ORB_init(convert.get_argc(), convert.get_ASCII_argv());

    Object_var obj = orb->resolve_initial_references("Test");
    test_var test = test::_narrow(obj.in());
    assertTrue(! is_nil(test.in()));

    Long n = test->get();
    Long m = test->get();
    assertTrue(m == n + 1);
 
    ACE_DEBUG((LM_DEBUG, "All tests ran successfully.\n"));

    return 0;
  } catch (CORBA::Exception& e) {
    ACE_PRINT_EXCEPTION(e, "test:");
  }
  return 1;
}
