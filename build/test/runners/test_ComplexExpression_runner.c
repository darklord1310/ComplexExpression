/* AUTOGENERATED FILE. DO NOT EDIT. */

//=======Test Runner Used To Run Each Test Below=====
#define RUN_TEST(TestFunc, TestLineNum) \
{ \
  Unity.CurrentTestName = #TestFunc; \
  Unity.CurrentTestLineNumber = TestLineNum; \
  Unity.NumberOfTests++; \
  if (TEST_PROTECT()) \
  { \
      setUp(); \
      TestFunc(); \
  } \
  if (TEST_PROTECT() && !TEST_IS_IGNORED) \
  { \
    tearDown(); \
  } \
  UnityConcludeTest(); \
}

//=======Automagically Detected Files To Include=====
#include "unity.h"
#include <setjmp.h>
#include <stdio.h>

int GlobalExpectCount;
int GlobalVerifyOrder;
char* GlobalOrderError;

//=======External Functions This Runner Calls=====
extern void setUp(void);
extern void tearDown(void);
extern void test_complexExpression_explore_integer(void);
extern void test_complexExpression_explore_float(void);
extern void test_joinStrings_should_join_2_strings_together(void);
extern void test_mulStrings_given_superman_and_3_should_return_Superman_x3(void);
extern void test_assignString_given_Spiderman_with_some_webs_should_copy_it_to_destination(void);
extern void test_complexExpression_explore_strings(void);


//=======Test Reset Option=====
void resetTest()
{
  tearDown();
  setUp();
}


//=======MAIN=====
int main(void)
{
  Unity.TestFile = "test_ComplexExpression.c";
  UnityBegin();
  RUN_TEST(test_complexExpression_explore_integer, 18);
  RUN_TEST(test_complexExpression_explore_float, 29);
  RUN_TEST(test_joinStrings_should_join_2_strings_together, 40);
  RUN_TEST(test_mulStrings_given_superman_and_3_should_return_Superman_x3, 49);
  RUN_TEST(test_assignString_given_Spiderman_with_some_webs_should_copy_it_to_destination, 58);
  RUN_TEST(test_complexExpression_explore_strings, 67);

  return (UnityEnd());
}
