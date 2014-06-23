#include "Callback.h"
#include "Integer.h"
#include "Float.h"
#include <stdio.h>


int myMain()
{
	int a = 3, b = 5;
	float c = 9.4, d = 2.67, rFloat;
	void (*ptrFuncAdd)(void *, void *);
	
	addInt(&a,&b);
	printf("addInt(3 , 5) = %d \n", a);
	addFloat(&c,&d);
	printf("addInt(9.4 , 2.67) = %f \n", c);
	
	ptrFuncAdd = addInt;
	a = 3;
	ptrFuncAdd(&a,&b);
	printf("ptrFuncAdd(3 , 5) = %i \n", a);
	
	ptrFuncAdd = addFloat;
	c = 9.4;
	ptrFuncAdd(&c,&d);
	printf("ptrFuncAdd(9.4 , 2.67) = %f \n", c);
	return 0;
}