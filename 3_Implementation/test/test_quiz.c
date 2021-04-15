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


void cregvalid(void)

{
   //available username

    
    //generating a random string to generate unique username
    char str[30];
    srand(time(0));
    int n;
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJK123456789!$*...";
    for(n=0;n<20;n++)
    {
        
            int key = rand() % (int) (sizeof charset - 1);
            str[n] = charset[key];
        
        
    }
    
    str[n]='\0';
    
 
    //unavailable username
   TEST_ASSERT_EQUAL(REGISTERSUCCESS, reg(str,"kh123"));

}

void creginvalid(void)
{
    //unavailable username
   TEST_ASSERT_EQUAL(REGISTERFAILURE, reg("khushbu12","khushbu123"));
}


    

void clogininvalid1(void)
{
    
    //invalid username, valid password

    TEST_ASSERT_EQUAL(LOGINFAILURE, login("khushbu","khushbu123"));
   
}

void clogininvalid2(void)
{
    //valid username, invalid password
    TEST_ASSERT_EQUAL(LOGINFAILURE, login("khushbu12","khushbu"));
}


void clogininvalid3(void)
{
    //invalid username, valid password
    TEST_ASSERT_EQUAL(LOGINFAILURE, login("khush","khush123"));
}


void cloginvalid(void)
{

   //valid username, valid password
    TEST_ASSERT_EQUAL(LOGINSUCCESS, login("khushbu12","khushbu123"));

}

   


int test_main(void)

{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(cregvalid);
    RUN_TEST(creginvalid);
    RUN_TEST(clogininvalid1);
    RUN_TEST(clogininvalid2);
    RUN_TEST(clogininvalid3);
    RUN_TEST(cloginvalid);
    
   

    /* Close the Unity Test Framework */
    return UNITY_END();
}


