#pragma once

#include <stdio.h>

class Chapter_4_2
{
public:
	int ExampleFor();
	int ExampleForSum();
	int ProblemForSum2();
	int Mincommon();
	int Samdan();
	int Cubic8();
	int Triangle2();
	int Triangle3();
	int Triangle4();
	int Triangle5();
	int Factorial(int n);
	int ForMultiAdd();
};

class Print4Functor
{
public:
	void operator()(int i)
	{
		printf("For loop use Functor %d\n", i);
	}
};

class ForSum2
{
public:
	ForSum2() : _m_nSum(0) {}

public:
	void operator()(const int nNum)
	{
		for (int i = 1; i <= nNum; ++i)
		{
			_m_nSum += i;
		}
	}

	int GetSum()
	{
		return _m_nSum;
	}

private:
	int _m_nSum;
};
