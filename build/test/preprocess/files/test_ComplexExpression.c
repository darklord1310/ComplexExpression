#include "unity.h"
#include "string.h"
#include "Strings.h"
#include "Integer.h"
#include "Float.h"
#include "ComplexExpression.h"






void setUp(void)

{

}



void tearDown(void)

{

}



void test_complexExpression_explore_integer(void)

{

 int a = 4, b = 18 , result;



 result = complexExpression(a,b);

 printf("complexExpression(4,18) = %d \n", complexExpression(a,b));



 _complexExpression(&a,&b,&result,addInt,mulInt,assignInt);

 printf("_complexExpression(4,18) = %d \n", result);

}



void test_complexExpression_explore_float(void)

{

 float a = 4.123, b = 18.567 , result;



 result = complexExpression(a,b);

 printf("complexExpression(4.123,18.567) = %f \n", complexExpression(a,b));



 _complexExpression(&a,&b,&result,addFloat,mulFloat,assignFloat);

 printf("_complexExpression(4.123,18.567) = %f \n", result);

}



void test_joinStrings_should_join_2_strings_together()

{

 char buffer[200] = "Hello ";

 char name[200] = "Bananaman";



 joinStrings(buffer,name);

 printf("%s \n", buffer);

}



void test_mulStrings_given_superman_and_3_should_return_Superman_x3()

{

 char buffer[200] = "Superman ";

 int count = 3;



 mulStrings(&count, buffer);

 printf("%s \n", buffer);

}



void test_assignString_given_Spiderman_with_some_webs_should_copy_it_to_destination()

{

 char source[200] = "Spideman with some webs";

 char dest[200];



 assignStrings(dest,source);

 printf("%s\n", dest);

}



void test_complexExpression_explore_strings()

{

 char buffer[200] = "Batman ";

 char result[200];

 int count = 3;



 _complexExpression(buffer, &count ,&result ,joinStrings ,mulStrings ,assignStrings);

 printf("_complexExpression(\"Batman,3) : %s \n", result);

}
