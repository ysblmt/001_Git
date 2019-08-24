#include <stdio.h>
#include <string.h>
#include "mymemory.h"

int main()
{
	char a[5] = {1,2,3,4,5};
	char b[3] = {'a','b','c'};
	printf("sizeof(a) = %ld\n",sizeof(a));
	for(int i = 0;i<5;i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	mymemset(a, 3, sizeof(a));
	for(int i=0; i<5; i++)
	{
		printf("%d\t",a[i]);
	}
	printf("\n");
	mymemcpy(a, b, sizeof(b));
	for(int i=0; i<5; i++)
	{
		printf("%c\t",a[i]);
	}
	printf("\n");
	return 0;
}
