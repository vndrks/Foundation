#include "Chapter10_3.h"
#include <stdio.h>
#include <string>

int Chapter10_3::Test01()
{
	int* ar;

	ar = (int*)malloc(1000 * sizeof(int));	// Allocation memory
	free(ar);								// free memory

	return 0;
}

int Chapter10_3::Malloc()
{
	int* pScore;
	int i;
	int nStNum;
	int nSum;

	printf("Enter number of student : ");
	scanf_s("%d", &nStNum);

	pScore = (int*)malloc(nStNum * sizeof(int));

	if (pScore == NULL)
	{
		printf("Not enough memory\n");
		return -1;
	}

	for (i = 0; i < nStNum; ++i)
	{
		printf("Enter score of %d student : ", i + 1);
		scanf_s("%d", &pScore[i]);
	}

	nSum = 0;
	for (i = 0; i < nStNum; ++i)
	{
		nSum += pScore[i];
	}

	printf("Total : %d,  Average : %.2f \n", nSum, (double)nSum / (double)nStNum);

	free(pScore);
	return 0;
}

int Chapter10_3::TestCalloc()
{
	int nStuCount;
	int* ptr;
	int nSum = 0;

	printf("Enter count : ");
	scanf_s("%d", &nStuCount);

	ptr = (int*)calloc(nStuCount, sizeof(int));
	for (int i = 0; i < nStuCount - 1; ++i)	// last addr is auto init : 0
	{
		printf("%d Score : ", i + 1);
		scanf_s("%d", &ptr[i]);
	}

	for (int i = 0; i < nStuCount; ++i)
	{
		printf("%d Student score : %d\n", i + 1, ptr[i]);
		nSum += ptr[i];
	}

	printf("Sum : %d\n", nSum);

	free(ptr);

	return 0;
}

int Chapter10_3::Realloc()
{
	int* ar;
	ar = (int*)malloc(5 * sizeof(int));
	ar[4] = 1234;

	ar = (int*)realloc(ar, 10 * sizeof(int));

	ar[9] = 5678;

	printf("ar[4] : %d, ar[9] : %d\n", ar[4], ar[9]);

	int nSize = _msize(ar);
	printf("Memory Size : %d\n", nSize);
	free(ar);
	return 0;
}

