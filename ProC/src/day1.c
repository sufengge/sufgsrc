#include<stdio.h>
#include<string.h>

typedef struct 
{
	char t;
	char t1;
	char t2;
	unsigned short i;
	unsigned short i1;
	unsigned short i2;
	unsigned long m;
	unsigned long m1;
	unsigned long m2;
}A_struct;

int main()
{

	A_struct test;

	printf(" t->[%ld]\n t1->[%ld]\n t2->[%ld]\n i->[%ld]\n i1->[%ld]\n i2->[%ld]\n m->[%ld]\n m1->[%ld]\n m2->[%ld]\n", \
			sizeof(test.t),
			sizeof(test.t1),
			sizeof(test.t2),
			sizeof(test.i),
			sizeof(test.i1),
			sizeof(test.i2),
			sizeof(test.m),
			sizeof(test.m1),
			sizeof(test.m2)
	      );


	printf("rest = [%ld] \n",sizeof(test));

	return 0;

}
