#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "CUnit/CUnit.h"

/**//*---- functions to be tested ------*/
extern int maxi(int i, int j);

/**//*---- test cases ------------------*/
void testIQJ()
{
        CU_ASSERT_EQUAL(maxi(1,1),1);
        CU_ASSERT_EQUAL(maxi(0,-0),0);
}

void testIGJ()
{
        CU_ASSERT_EQUAL(maxi(2,1),2);
        CU_ASSERT_EQUAL(maxi(0,-1),0);
        CU_ASSERT_EQUAL(maxi(-1,-2),-1);
}

void testILJ()
{
        CU_ASSERT_EQUAL(maxi(1,2),2);
        CU_ASSERT_EQUAL(maxi(-1,0),0);
        CU_ASSERT_EQUAL(maxi(-2,-1),-1);
}

CU_TestInfo testcases[] = {
        {"Testing i equals j:", testIQJ},
        {"Testing i greater than j:", testIGJ},
        {"Testing i less than j:", testILJ},
        CU_TEST_INFO_NULL
};
/**//*---- test suites ------------------*/
int suite_success_init(void) { return 0; }
int suite_success_clean(void) { return 0; }

CU_SuiteInfo suites[] = {
        {"Testing the function maxi:", suite_success_init, suite_success_clean, NULL, NULL, testcases},
        {"Testing the function maxi again:",suite_success_init, suite_success_clean, NULL, NULL, testcases},
        CU_SUITE_INFO_NULL
};
/**//*---- setting enviroment -----------*/
void AddTests(void)
{
        assert(NULL != CU_get_registry());
        assert(!CU_is_test_running());
        /**//* shortcut regitry */

        if(CUE_SUCCESS != CU_register_suites(suites)){
                fprintf(stderr, "Register suites failed - %s ", CU_get_error_msg());
                exit(1);
        }
}