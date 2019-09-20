#include "Chapter10_1.h"

#include <stdio.h>

int Chapter10_1::Test01()
{
	int i = 1234;
	int* pi;
	pi = &i;
	printf("ppp : %d\n", *pi);
	return 0;
}

int Chapter10_1::PointerType()
{
	int i = 1234;
	int* pi;
	double d = 3.14;
	double* pd;

	pi = &i;
	pd = &d;

	printf("Integer number : %d\n", *pi);
	printf("real number : %f\n", *pd);

	pi = (int*)&d;
	printf("D address val : %d\n", *pi);

	return 0;
}

int Chapter10_1::PointerType2()
{
	int ar[] = {1, 2, 3, 4, 5};
	int* pi;

	pi = ar;
	printf("First index value : %d\n", *pi);
	++pi;											// px + i -> px = px + (i * sizeof(T))
	printf("Second index value : %d\n", *pi);
	--pi;
	printf("Second index value : %d\n", *pi);
	--pi;
	printf("Second index value : %d\n", *pi);

	return 0;
}

int Chapter10_1::PointerMinus()
{
	char ar[] = "Pointer";
	char* pi1;
	char* pi2;

	pi1 = &ar[0];
	pi2 = &ar[5];

	printf("Distance %c to %c : %d\n", *pi1, *pi2, pi2 - pi1);
	printf("Memory size %c to %c : %d\n", *pi1, *pi2, (pi2 - pi1) * sizeof(char));

	return 0;
}

int Chapter10_1::Test02()
{
	int* pi;
	int i = 1234;

	unsigned int * pu;
	pi = &i;
	pu = (unsigned int*)pi;

	printf("pu : %d, pi : %d\n", *pu, *pi);

	return 0;
}

int Chapter10_1::Test03()
{
	int i1 = 4;
	int i2 = 32;

	int* pi1 = &i1;
	int* pi2 = &i2;

	printf("pi1 addr : %x\n", &pi1);
	printf("pi2 addr : %x\n", &pi2);
	if (pi1 > pi2)
	{
		printf("pi1 > pi2\n");

	}
	else
	{
		printf("pi1 < pi2\n");
	}
	return 0;
}

int Chapter10_1::MidPointer()
{
	int ar[] = { 1, 2, 3, 4, 5 };

	int* pi1;
	int* pi2;
	int* pMid;

	pi1 = &ar[0];
	pi2 = &ar[4];

	pMid = pi1 + ((pi2 - pi1) / 2);

	printf("Mid value : %d\n", *pMid);

	return 0;
}

int Chapter10_1::PtrPlusPlus()
{
	int ar[] = {10, 20, 30, 40, 50};
	int i;
	int* ptr;

	ptr = ar;

	for (i = 0; i < sizeof(ar) / sizeof(ar[0]); i++)
	{
		printf("%d\n", *ptr++);		// 10, 20, 30, 40, 50
		//printf("%d\n", ++*ptr);		// 11, 12, 13, 14, 15
		//printf("%d\n", *++ptr);		// 20, 30, 40, 50, ????
		//printf("%d\n", ++(*ptr));		// 11, 12, 13, 14, 15
		//printf("%d\n", (*ptr)++);		// 10, 11, 12, 13, 14
	}

	return 0;
}

int Chapter10_1::PtrPpSum()
{
	int ar[] = { 10, 20, 30, 40, 50, 0 };
	int sum = 0;
	int* ptr;

	ptr = ar;

	while (*ptr)
	{
 		sum +=  *ptr++;
		/*
		sum += *ptr;
		ptr++;
		*/
	}
	printf("Sum : %d\n", sum);

	return 0;
}
