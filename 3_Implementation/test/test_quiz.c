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
    TEST_ASSERT_EQUAL(SUCCESS, reg("samara","samara123"));
   

    //unavailable username
    TEST_ASSERT_EQUAL(FAILURE, reg("khushbu12","khushbu123"));
}


    

void clogin(void)
{
    
    //invalid username, valid password
    TEST_ASSERT_EQUAL(FAILURE, login("Khushbu","Khushbu123"));
    
    //valid username, invalid password
    TEST_ASSERT_EQUAL(FAILURE, login("Khushbu12","Khushbu"));

    //invalid username, valid password
    TEST_ASSERT_EQUAL(FAILURE, login("Khush","Khush123"));

    //valid username, valid password
    TEST_ASSERT_EQUAL(SUCCESS, login("Khushbu12","Khushbu123"));

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


