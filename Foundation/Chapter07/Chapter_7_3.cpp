#include "Chapter_7_3.h"

#include <stdio.h>

void func();
int i = 3;

int Chapter_7_3::Scope()
{
	printf("i = %d\n", i);
	printf("i = %d\n", ::i);
	func();
	return 0;
}

int Chapter_7_3::BlockScope()
{
	if (1 == 1)
	{
		int s;
		s = 5;
	}
	//s = 10;	// Error
	return 0;
}

int Chapter_7_3::BlockScope2()
{
	int b;
	b = 5;
	{
		int b;
		b = 3;
		printf("b = %d\n", b);
	}

	return 0;
}

int Chapter_7_3::ForBlock()
{
	int x;

	for (int x = 0; x < 5; x++)
	{
		printf("%d\n", x);
	}
	for (int x = 5; x < 9; x++)
	{
		printf("%d\n", x);
	}
	return 0;
}


void Chapter_7_3::func()
{
	int i = 5;
	printf("i = %d\n", i);
}