#include "Chapter_6_2.h"

#include <stdio.h>
#include <string>
#include <iostream>
#include <conio.h>

#include <chrono>

int Chapter_6_2::MaxFunc2()
{
	int a, b, m;

	printf("Enter two number : ");
	scanf_s("%d%d", &a, &b);
	m = _Max(a, b);

	printf("The larger of the two number is %d\n", m);
	return 0;
}

int Chapter_6_2::BoxMessage()
{
	BoxMessage("Print a string in a box.");
	BoxMessage("Calculator box size yourself.");

	return 0;
}

int Chapter_6_2::BoxMessage2()
{
	_BoxMessage2("Print a string in a box.");
	_BoxMessage2("Calculator box size yourself");
	return 0;
}

int Chapter_6_2::Power()
{
	unsigned int nInteger;
	unsigned int nPower;
	printf("Enter Integer and power : ");
	scanf_s("%u%u", &nInteger, &nPower);

	std::chrono::system_clock::time_point beginTime = std::chrono::system_clock::now();
	printf("%u\n", _power(nInteger, nPower));
	std::chrono::system_clock::time_point endTime = std::chrono::system_clock::now();

	std::chrono::duration<double> dur = endTime - beginTime;

	std::cout << "operation time 1 : " << dur.count() << std::endl;

	printf("operation time 2: %f\n", dur.count());
	
	return 0;
}

int Chapter_6_2::_Max(int a, int b)
{
	if (a > b)
	{
		return a;
	}
	else
	{
		return b;
	}
	return 0;
}

void Chapter_6_2::BoxMessage(const char* str)
{
	int i;
	int nLength;

	nLength = strlen(str);
	puts("");
	for (i = 0; i < nLength + 4; ++i)
	{
		_putch('-');
	}

	puts("");
	printf("| %s |\n", str);

	for (i = 0; i < nLength + 4; ++i)
	{
		_putch('-');
	}
	puts("");
}

void Chapter_6_2::_BoxMessage2(const char* str)
{
	int nLength = strlen(str);
	puts("");
	_Putchs('-', nLength + 4);
	printf("| %s |\n", str);
	_Putchs('-', nLength + 4);
}

void Chapter_6_2::_Putchs(int ch, int n)
{
	int i;
	for (i = 0; i < n; ++i)
	{
		_putch(ch);
	}
	puts("");
}

unsigned int Chapter_6_2::_power(unsigned int nInteger, unsigned int nPow)
{
	int nResult = 1;

	/* Sol. 1 */
	//for (int i = 0; i < nPow; ++i)
	//{
	//	nResult *= nInteger;
	//}
	

	/* Sol. 2 */
 //	if (nPow == 0)
	//{
	//	return 1;
	//}
	//else
	//{
	//	return nInteger * _power(nInteger, nPow - 1);
	//}

	/* Sol. 3 */
	if (nPow == 0)
	{
		return 1;
	}

	if ((nPow % 2) == 0)
	{
		int nResult = _power(nInteger, nPow / 2);
		return nResult * nResult;
	}
	else
	{
		int nResult = _power(nInteger, (nPow - 1) / 2);
		return nInteger * nResult * nResult;
	}
	
	return nResult;
}
