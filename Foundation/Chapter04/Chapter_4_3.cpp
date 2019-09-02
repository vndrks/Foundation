#include "Chapter_4_3.h"

int Chapter_4_3::WhileSum()
{
	int i = 0;
	int nSum = 0;
	while (i <= 100)
	{
		nSum += i;
		++i;
	}
	printf("Sum : %d\n", nSum);

	return 0;
}

int Chapter_4_3::DoWhile()
{
	int i = 0;
	int nSum = 0;
	do
	{
		nSum += i;
		i++;
	} while (i <= 100);

	printf("Sum : %d\n", nSum);

	return 0;
}

int Chapter_4_3::Holjjak()
{
	int nNum;

	do
	{
		printf("Enter number (Exit 0) : ");
		scanf_s("%d", &nNum);

		if (nNum % 2 == 0)
		{
			printf("Even number.\n");
		}
		else 
		{
			printf("Odd number.\n");
		}
	} while (nNum != 0);

	return 0;
}

int Chapter_4_3::Holjjak2()
{
	int nNum;

	for (;;)
	{
		printf("Enter number (Exit 0) : ");
		scanf_s("%d", &nNum);

		if (nNum == 0)
		{
			break;
		}

		if (nNum % 2 == 0)
		{
			printf("Even number.\n");
		}
		else
		{
			printf("Odd number.\n");
		}
	}
	return 0;
}

int Chapter_4_3::Sum999()
{
	int nInput;
	int nSum = 0;
	double nAverage = .2f;
	int nCount = 0;

	do
	{
		printf("Enter number (Exit 999) : ");
		scanf_s("%d", &nInput);

		if (nInput != 999)
		{
			nSum += nInput;
			nCount = nCount + 1;
		}
	} while (nInput != 999);

	nAverage = (double)nSum / nCount;
	printf("Sum : %d\n\n", nSum);
	printf("nAverage : %.2f\n\n", nAverage);
	return 0;
}
