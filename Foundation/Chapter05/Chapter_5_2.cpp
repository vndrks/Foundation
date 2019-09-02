#include "Chapter_5_2.h"

#include <stdio.h>

int Chapter_5_2::Test1()
{
	int a = 0;
	int i = 1;

	a = 3 + (i == 0) * 5;

	if (i == 0)
	{
		a = 8;
	}
	else
	{
		a = 3;
	}
	return 0;
}

int Chapter_5_2::Test2()
{
	int a = 3;

	a = a << 1;
	printf("%d\n", a);
	return 0;
}

int Chapter_5_2::Test3()
{
	int n = 0x8877;

	printf("%x\n", n);

	if (((n & 0x7c00) >> 10) == 2)
	{
		printf("ddddd\n");
	}
	return 0;
}

int Chapter_5_2::ShiftMulti()
{
	int i;
	printf("Enter number : ");
	scanf_s("%d", &i);

	printf("x2 Result : %d\n", i << 1);

	// x 3
	printf("x3 Result : %d\n", (i << 1) + i);

	// x 9
	printf("x9 Result : %d\n", (i << 3) + i);
	
	// x 15
	printf("x15 Result : %d\n", (i << 4) - i);

	// x 60
	printf("x60 Result : %d\n", (i << 6) - (i << 2));
	return 0;
}

int Chapter_5_2::Dec2Hex()
{
	int nInput;
	int low;
	int high;

	for (;;)
	{
		printf("Enter number from 0 to 255 (exit : -1) : ");
		scanf_s("%d", &nInput);

		if (nInput == -1)
		{
			break;
		}

		high = nInput >> 4;
		low = nInput & 0xf;

		printf("%c\n", ((high > 9) * 7) + '0');

		int a = low > 9;
		printf("a : %c\n", a + '0');
		printf("Hexadecimal = %c %c\n", high + '0' + (high > 9) * 7, low + '0' + (low > 9) * 7);
	}
	return 0;
}
