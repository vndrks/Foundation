#include "Chapter_8_1.h"

#include <stdio.h>
#include <math.h>

int Chapter_8_1::Sin()
{
	int r;

	printf("sin(%d) = %f\n", 1, sin(1 * 3.1416 / 180));

	for (r = 0; r <= 90; r += 10)
	{
		printf("sin(%d) = %f\n", r, sin(r * 3.1416 / 180));
	}

	return 0;
}

int Chapter_8_1::Test()
{
	double h1 = hypot(3, 4);
	double log10_1 = log10(64);
	double exp1 = exp(64);
	double log1 = log(64);

	printf("hypot(3, 4) : %f\n", h1);
	printf("log10(64) : %f\n", log10_1);
	printf("exp(64) : %f\n", exp1);
	printf("log(64) : %f\n", log1);

	return 0;
}

int Chapter_8_1::Floor()
{
	printf("floor(3.14) = %f\n", floor(3.14));
	printf("ceil(3.14) = %f\n", ceil(3.14));
	printf("floor(-3.14) = %f\n", floor(-3.14));
	printf("ceil(-3.14) = %f\n", ceil(-3.14));

	return 0;
}

int Chapter_8_1::Test2()
{
	printf("floor(-1.4 + 0.5) : %.2f\n", floor(-1.4 + 0.5));
	printf("floor(-1.4 + 0.5) : %.2f\n", floor(-1.5 + 0.5));
	printf("floor(-1.4 + 0.5) : %.2f\n", floor(-1.6 + 0.5));
	return 0;
}

#define JD_ROUND(x, dig) (floor((x) * pow(10, dig) + 0.5) / pow(10, dig))

int Chapter_8_1::Round()
{
	double x = 123.456789;
	int i;

	for (i = -2; i < 5; i++)
	{
		printf("%fÀÇ %dÀÚ¸® round = %f\n", x, i, JD_ROUND(x, i));
	}
	return 0;
}

int Chapter_8_1::Abs()
{
	int i = 3;
	int j = -3;

	double fi = 3.14;
	double fj = -3.14;

	long li = 64;
	long lj = -64;

	printf("%d 's abstract : %d\n", i, abs(i));
	printf("%d 's abstract : %d\n", j, abs(j));

	printf("%f 's abstract : %.2f\n", fi, fabs(fi));
	printf("%f 's abstract : %.2f\n", fj, fabs(fj));

	printf("%d 's abstract : %d\n", li, labs(li));
	printf("%d 's abstract : %d\n", lj, labs(lj));
	return 0;
}

#define MyAbs(x)	(((x) > 0) ? (x) : -(x))
int Chapter_8_1::AbsTest()
{
	int i = -3;
	int j = MyAbs(i);

	printf("%d 's abstract : %d\n", i, j);
	
	if (MyAbs(i) == 3)
	{
		
	}

	int x = 22;
	int y = -5;
	
	//if ((x > 10) && (x < 50))
	if(MyAbs(30) < 20)
	{

	}
	return 0;
}
