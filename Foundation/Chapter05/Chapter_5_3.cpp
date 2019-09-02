#include "Chapter_5_3.h"

#include <stdio.h>

int Chapter_5_3::Samhang()
{
	int i = -5;
	int j = -1;
	int k;

	k = (i > j) ? i : j;
	printf("more big number1 : %d\n", k);

	k = (i > j) ? i : (j < 0) ? 0 : j;
	printf("more big number2 : %d\n", k);
	return 0;
}

int Chapter_5_3::Comma()
{
	int i, j;
	
	i = 3;
	j = i + 2;

	printf("i = %d, j = %d\n", i, j);

	int x;
	printf("x = %d, ret = %d\n", x, (x = 5, x + 4));

	return 0;
}

int Chapter_5_3::TwoControl()
{
	int i, j;

	for (i = 1, j = 1; i < 5; i++, j += 2)
	{
		printf("i = %d", i),
		printf(",j = %d\n", j);
	}
	return 0;
}

int Chapter_5_3::SizeOf()
{
	int i;

	printf("int = %d\n", sizeof(int));
	printf("double = %d\n", sizeof(double));
	printf("i = %d\n", sizeof(i));
	printf("string = %d\n", sizeof("string"));

	int nPrice[100][3];
	printf("array = %d\n", sizeof(nPrice));
	printf("array cnt = %d\n", sizeof(nPrice)/sizeof(nPrice[0][0]));

	return 0;
}

int Chapter_5_3::Cast()
{
	int i, j;
	double r;

	printf("Enter two inteager(a b) : ");
	scanf_s("%d %d", &i, &j);

	r = (double)i / j;
	printf("the ratio %d to %d is %f\n", i, j, r);
	return 0;
}

int Chapter_5_3::Float2Digit()
{
	double fInput;

	int nDigit;
	double fDecimal;

	printf("Enter real number : ");
	scanf_s("%lf", &fInput);

	nDigit = int(fInput);
	fDecimal = fInput - nDigit;

	int nResult;
	printf("nResult : %d\n", int(fDecimal * 100));
	
	return 0;
}
