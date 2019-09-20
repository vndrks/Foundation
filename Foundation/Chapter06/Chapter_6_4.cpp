#include "Chapter_6_4.h"

#include <stdio.h>

//#define jegop(i)	(i * i)		// jegop(3+1) = 7  X
#define jegop(i)	((i) * (i))	// jegop(3+1) = 16 O
#define dubae(i) ((i) + (i))

int Chapter_6_4::Define()
{
	int nSpeed;
	printf("Enter speed(km/h) : ");
	scanf_s("%d", &nSpeed);

	printf("Speed is %f MACH\n", nSpeed / MACH);
	return 0;
}

int Chapter_6_4::MacroInc()
{
	int j, k;
	k = 3;

	j = dubae(k++);
	printf("j = %d, k = %d\n", j, k);

	return 0;
}

int Chapter_6_4::DefineTest()
{
	
	printf("jegop(3) : %d\n", jegop(3));
	printf("jegop(3 + 1) : %d\n", jegop(3 + 1));
	return 0;
}

