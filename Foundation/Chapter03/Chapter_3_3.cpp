#include "Chapter_3_3.h"

Chapter_3_3::Chapter_3_3()
{
}

Chapter_3_3::~Chapter_3_3()
{
}

int Chapter_3_3::Overflow()
{
	short a, b, c;
	unsigned short x, y, z;

	a = 20000;
	b = 30000;
	c = a + b;
	printf("%d + %d = %d\n", a, b, c);

	x = 20000;
	y = 30000;
	z = x - y;
	printf("%d + %d = %d\n", x, y, z);

	return 0;
}

/* decimal number to binary number*/
int Chapter_3_3::Overflow_Extra(int nVal1, int nVal2)
{
	char chBinaryArr[17];
	if (nVal1 != 0)
	{
		int nResult = 0;
		for (int i = 0; nVal1 > 0; ++i)
		{
			int nBinary = nVal1 % 2;
			nResult += nBinary * i;
			nVal1 = nVal1 / 2;
		}
		return nResult;
	}
	if (nVal2 != 0)
	{

	}
	return 0;
}

int Chapter_3_3::GetInt64()
{
	__int64 x, y, z;

	x = 111111111;
	y = 111111111;
	z = x * y;

	printf("%I64d\n", z);
	return 0;
}
