#include "Chapter_3_7.h"

#include <stdio.h>

Chapter_3_7::Chapter_3_7()
{
}

Chapter_3_7::~Chapter_3_7()
{
}

int Chapter_3_7::ExampleArray()
{
	int array[5];
	double fRate[10];

	
	return 0;
}

int Chapter_3_7::ExampleStructure()
{
	struct
	{
		char chName[10];
		int nAge;
		double fHeight;
	} Friend;

	Friend.chName[0] = 'A';
	Friend.chName[1] = 'B';
	Friend.nAge = 10;

	return 0;
}

int Chapter_3_7::ExamplePointer()
{
	int nNum = 629;
	int* pPi;

	pPi = &nNum;
	printf("Num : %d\n", *pPi);
	return 0;
}

int Chapter_3_7::ExamplePointer2()
{
	double fNum1, fNum2;
	double* pD;
	double* pE;

	fNum1 = 3.14;
	pD = &fNum1;
	pE = pD;
	fNum2 = *pE;

	printf("Num2 : %f\n", fNum2);
	
	return 0;
}

typedef int nTest;
typedef enum { True, False } Bool;
