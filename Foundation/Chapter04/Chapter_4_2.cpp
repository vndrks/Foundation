#include "Chapter_4_2.h"

#include <algorithm>
#include <vector>
#include <iostream>

void Print(int i)
{
	std::cout << "Example for loop use function pointer " << i << std::endl;
}

//extern Print4Functor func;

/* Example 4-2 - For */
int Chapter_4_2::ExampleFor()
{
	int i;
	for (i = 0; i < 10; i = i + 1)
	{
		printf("Example for loop %d\n", i);
	}


// Apply.
	std::vector<int> lData;
	for (int i = 0; i < 10; i = i + 1)
	{
		lData.push_back(i);
	}

	// Function pointer
	std::for_each(lData.begin(), lData.end(), Print);
		
	// Functor
	Print4Functor func;
	std::for_each(lData.begin(), lData.end(), func);

	// Lambda
	std::for_each(lData.begin(), lData.end(), [](const int i) {
			printf("Example for loop use lambda %d\n", i);
		});

	return 0;
}

/* Example 4-2 - ForSum */
int Chapter_4_2::ExampleForSum()
{
	int nSum = 0;
	
	for (int i = 0; i <= 100; i = i + 1)
	{
		nSum += i;
	}
	printf("Sum from 1 to 100 : %d\n", nSum);

	return 0;
}

/* Problem 4-2 - ForSum2 */
int Chapter_4_2::ProblemForSum2()
{
	int nNum;
	printf("Input number : ");
	int nRet = scanf_s("%d", &nNum);

	std::vector<int> lData;
	lData.push_back(nNum);

	int nSum = std::for_each(lData.begin(), lData.end(), ForSum2()).GetSum();
	

	printf("Sum from 1 to %d : %d\n", nNum, nSum);
	return 0;
}

/* Example 4-2 - mincommon */
int Chapter_4_2::Mincommon()
{
	int i, nNum1, nNum2;
	printf("Enter first number : ");
	scanf_s("%d", &nNum1);

	printf("Enter second number : ");
	scanf_s("%d", &nNum2);

	i = 1;

	for (;;)
	{
		if (i % nNum1 == 0 && i % nNum2 == 0)
		{
			break;
		}
		i = i + 1;
	}
	printf("LCM : %d\n", i);
	return 0;
}

/* Example 4-2 - 3 dan */
int Chapter_4_2::Samdan()
{
	int i, j;
	for (i = 1; i <= 3; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d x %d = %d \n", i, j, i * j);
		}
	}
	return 0;
}

/* Example 4-2 - Cubic8 */
int Chapter_4_2::Cubic8()
{
	int j1, j2;

	for (j1 = 1; j1 <= 6; ++j1)
	{
		for (j2 = 1; j2 <= 6; ++j2)
		{
			if (j1 + j2 == 8)
			{
				printf("val1 : %d, val2 : %d \n", j1, j2);
			}
		}
	}
	return 0;
}

/* Problem 4-2 - Triangle2 */
int Chapter_4_2::Triangle2()
{
	for (int i = 1; i < 15; ++i)
	{
		for (int j = 0; j < i; j = j + 1)
		{
			printf("%c", i + '0');
		}
		printf("\n");
	}

	//for (int i = 49; i <= 63; ++i)
	//{
	//	for (int j = 1; j <= i - 48; ++j)
	//	{
	//		printf("%c", i);
	//	}
	//	printf("\n");
	//}
	return 0;
}

int Chapter_4_2::Triangle3()
{
	int i, j;

	/*
	for (i = 1; i <= 15; ++i)
	{
		for (j = 15; j >= i; j = j - 1)
		{
			printf("%c", i + '0');
		}
		printf("\n");
	}
	*/

	for (i = 15; i > 0; --i)
	{
		for (j = 1; j <= i; ++j)
		{
			printf("%c", i + '0');
		}
		printf("\n");
	}
	return 0;
}

#define MAX_COUNT_15 15
int Chapter_4_2::Triangle4()
{
	int	i, j;

	for (i = 0; i < MAX_COUNT_15; ++i)
	{
		for (j = 1; j <= MAX_COUNT_15; ++j)
		{
			if (j >= MAX_COUNT_15 - i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
	return 0;
}

#define MAX_COUNT_31 31
int Chapter_4_2::Triangle5()
{
	int i, j;
	for (i = 1; i <= MAX_COUNT_31 / 2; ++i)
	{	
		for (j = 1; j < MAX_COUNT_31; ++j)
		{
			if ((j > ((MAX_COUNT_31 / 2) - i)) && (j < ((MAX_COUNT_31 / 2) + i)))
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}

	return 0;
}

int Chapter_4_2::Factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n * Factorial(n - 1);
}

int Chapter_4_2::ForMultiAdd()
{
	int nNum = 0;
	printf("Enter number : ");
	scanf_s("%d", &nNum);

	int nResult;

	/* Recursion */
	// nResult = Factorial(nNum);
	
	/* Sol 1. */
	//int nMultiply = 0;
	//int nPrevMultiply = 1;
	//nResult = 0;
	//for (int i = 1; i <= nNum; ++i)
	//{
	//	nMultiply = i * nPrevMultiply;
	//	nResult = nMultiply + nResult;
	//	nPrevMultiply = nMultiply;
	//}

	/* Sol 2. */
	//int i = 1;
	//int j = 1;
	//int nMul = 1;
	//nResult = 0;

	//for (i = 1; i <= nNum; ++i)
	//{
	//	nMul = 1;
	//	for (j = 1; j <= i; ++j)
	//	{
	//		nMul *= j;
	//	}
	//	nResult += nMul;
	//}


	/* Sol 3. */
	int i = 1;
	int j = 1;
	nResult = 1;
	do
	{
		i++;
		j *= i;
		nResult += j;
	} while (i < nNum);
	
	printf("Sum Factorial : %d\n", nResult);
	return 0;
}