#include "Chapter_3_4.h"

#include <stdio.h>
Chapter_3_4::Chapter_3_4()
{
}

Chapter_3_4::~Chapter_3_4()
{
}

int Chapter_3_4::ExampleFloat()
{
	double fVal;
	fVal = 123.456;

	printf("Fixed point : %f\n", fVal);
	printf("Floating point : %e\n", fVal);
	printf("General : %g\n", fVal);

	return 0;
}
