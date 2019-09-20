#include "Chapter_6_1.h"

#include <stdio.h>

int Chapter_6_1::MaxFunc()
{
	int a, b, m;

	printf("Enter two numbers : ");
	scanf_s("%d%d", &a, &b);

	m = Max(a, b);
	printf("The larger of the two values is %d\n", m);

	return 0;
}

int Chapter_6_1::AddFunc()
{
	int a, b;
	a = 3;
	b = 4;

	printf("3 + 4 = %d\n", Add(a, b));
	printf("5 + 6 = %d\n", Add(5, 6));

	return 0;
}

int Chapter_6_1::Dec2Hex2()
{
	int nInput;

	for (;;)
	{
		printf("Enter of 0 to 255 (exit : -1) : ");
		scanf_s("%d", &nInput);

		if (nInput == -1)
		{
			break;
		}
		printf("Entered number Hex : %c%c\n", Dec2Hexchar(nInput >> 4), Dec2Hexchar(nInput & 0xf));
	}

	return 0;
}

int Chapter_6_1::voidFunc()
{
	PrintWalt();

	printf("1 + 2 = %d\n", 1 + 2);

	return 0;
}

int Chapter_6_1::Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
}

int Chapter_6_1::Add(int ttt, int ddd)
{
	return ttt + ddd;
}

char Chapter_6_1::Dec2Hexchar(int d)
{
	if (d >= 16)
	{
		return '?';
	}
	return d + '0' + (d > 9) * 7;
}

void Chapter_6_1::PrintWalt()
{
	printf("Calculating... wait a moment.\n");
}
