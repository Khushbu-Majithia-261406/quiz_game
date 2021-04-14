#include "quiz_header.h"
#include "unity.h"

/* Required by the unity test framework */
void setUp()
{                                                                                                                      

    
}
/* Required by the unity test framework */
void tearDown()
{
}


void creg(void)

{
   //available username

    //[NOTE:- this testcase will apply true only once because after that this username will be inserted into the system]

    TEST_ASSERT_EQUAL(REGISTERSUCCESS,reg("HFEUKFHW1233445","newpassword"));


    //unavailable username
   TEST_ASSERT_EQUAL(REGISTERFAILURE, reg("khushbu12","khushbu123"));
}


    

void clogin(void)
{
    
    //invalid username, valid password

    TEST_ASSERT_EQUAL(LOGINFAILURE, login("khushbu","khushbu123"));
   

    //valid username, invalid password
    TEST_ASSERT_EQUAL(LOGINFAILURE, login("khushbu12","khushbu"));


    //invalid username, valid password
    TEST_ASSERT_EQUAL(LOGINFAILURE, login("khush","khush123"));



    //valid username, valid password
    TEST_ASSERT_EQUAL(LOGINSUCCESS, login("khushbu12","khushbu123"));

}

   


int test_main(void)

{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(creg);
    RUN_TEST(clogin);
   

    /* Close the Unity Test Framework */
    return UNITY_END();
}


