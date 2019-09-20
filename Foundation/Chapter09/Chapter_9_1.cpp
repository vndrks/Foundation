#include "Chapter_9_1.h"

#include <stdio.h>
#include <conio.h>

int Chapter_9_1::TestArr()
{
	int arr[5];

	for (int idx = 0; idx < 5; ++idx)
	{
		arr[idx] = idx + 100;
		printf("%d : %d\n", idx, arr[idx]);
	}
	
	return 0;
}

int Chapter_9_1::Array()
{
	int arScore[5];
	int i;
	int sum;

	for (i = 0; i < sizeof(arScore) / sizeof(arScore[0]); ++i)
	{
		printf("Enter score no.%d : ", i + 1);
		scanf_s("%d", &arScore[i]);
	}

	sum = 0;

	for (i = 0; i < sizeof(arScore) / sizeof(arScore[0]); ++i)
	{
		sum += arScore[i];
	}

	printf("Total : %d, Average : %d\n", sum, sum / (sizeof(arScore) / sizeof(arScore[0])));
	return 0;
}

int Chapter_9_1::TestArrError()
{
	int ar[5];
	ar[8] = 1;


	printf("Size : %d\n", sizeof(ar)/sizeof(ar[0]));
	printf("%d\n", ar[6]);
	printf("%d\n", ar[7]);
	printf("%d\n", ar[8]);
	return 0;
}

int Chapter_9_1::ArrayBound()
{
	char chName[10];

	printf("What is ur name? ");
	gets_s(chName, sizeof(chName));
	printf("You are %s\n", chName);

	return 0;
}

int Chapter_9_1::ArrayBound2()
{
	int i;
	int ar[5];

	i = 1234;
	ar[5] = 5678;
	printf("i = %d\n", i);

	return 0;
}

int Chapter_9_1::ArraySung()
{
	int arScore[2][3];
	int nClass, nStudent;
	int arSum[2];
	int nMaxScore = 0;
	int nMaxClass;
	int nMaxStudent;

	arScore[0][0] = 92;
	arScore[0][1] = 84;
	arScore[0][2] = 76;
	arScore[1][0] = 88;
	arScore[1][1] = 72;
	arScore[1][2] = 98;

	for (nClass = 0; nClass < 2; ++nClass)
	{
		arSum[nClass] = 0;
		for (nStudent = 0; nStudent < 3; ++nStudent)
		{
			arSum[nClass] += arScore[nClass][nStudent];

			if (nMaxScore < arScore[nClass][nStudent])
			{
				nMaxScore = arScore[nClass][nStudent];
				nMaxClass = nClass;
				nMaxStudent = nStudent;
			}

		}
		printf("[%d] Class Total : %d,  Max : Student %d Score is %d\n", nClass, arSum[nClass], nMaxStudent, arScore[nClass][nMaxStudent]);
		printf("%d Class Sum : %d, Average : %d \n", nClass, arSum[nClass], arSum[nClass] / 3);
	}
	printf("Max Score Student : Class %d, Studen is %d\n ", nMaxClass, nMaxStudent);

	return 0;
}

int Chapter_9_1::TestlValue()
{
	int ar[5];
	//int ar2[5];

	//ar = ar2;		// ar 은 포인터 상수(메모리 시작번지를 가리키는) 이기 때문에 lvalue가 아니다.

	printf("%d\n", sizeof(ar));
	return 0;
}
