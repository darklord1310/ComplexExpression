#include "Strings.h"
#include "string.h"



void joinStrings(void *a, void *b)
{
	char *str1 = (char *)a;
	char *str2 = (char *)b;
	strcpy(&str1[strlen(str1)],str2);

}

void mulStrings(void *a, void *b)
{
	int i;
	int *multiplier = (int *)a;
	char *str = (char *)b;
	char *strClone = strdup(str);
	for(i=0; i < *multiplier-1 ;i++)
	{
		strcpy(&str[strlen(str)],strClone);
	}
}

void assignStrings(void *a, void *b)
{
	char *dest = (char *)a;
	char *source = (char *)b;
	
	strcpy(dest,source);
}