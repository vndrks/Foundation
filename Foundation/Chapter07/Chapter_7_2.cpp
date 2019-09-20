#include "Chapter_7_2.h"

#include <stdio.h>
#include <chrono>
#include <iostream>

int Chapter_7_2::Static()
{
	int i;

	for (i = 0; i < 5; ++i)
	{
		PrintCount();
	}

	return 0;
}

int Chapter_7_2::TestRegisterVar1()
{
	//register int r;
	//register int r1;
	//register int r2;
	//register double r3;

	//r = 0;
	//r1 = 1;
	//r2 = 2;
	//r3 = 3;

 //	printf("r : %d , r1 : %d , r2 : %d, r3 : %f\n", r, r1, r2, r3);
	return 0;
}

int Chapter_7_2::TestRegisterVar2()
{
	//register int i, j;
	int i, j;
	int a = 1;

	std::chrono::system_clock::time_point begin = std::chrono::system_clock::now();
	for (i = 0; i < 10000000; i++)
	{
		for (j = 0; j < 1000; j++)
		{
			a = 2;
		}
	}
	std::chrono::system_clock::time_point end = std::chrono::system_clock::now();

	//std::chrono::duration<double> dur = end - begin;
	std::chrono::milliseconds mill = std::chrono::duration_cast<std::chrono::milliseconds>(end - begin);

	int64_t dur = mill.count();
	printf("Finish. %lld\n", dur);
	return 0;
}

void Chapter_7_2::PrintCount()
{
	static int nCnt = 0;

	nCnt++;
	printf("I was called %dth\n", nCnt);
}


