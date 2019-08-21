#include "Chapter_4_1.h"
#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

int Chapter_4_1::ExampleIf()
{
	int i;

	printf("Input number : ");
	scanf_s("%d", &i);

	if (i == 7)
		printf("Input number is 7.\n");

	return 0;
}

int Chapter_4_1::ExampleIf2()
{
	int i;

	printf("Input number : ");
	scanf_s("%d", &i);

	if (i == 7)
	{
		printf("Input number is 7.\n");
		printf("Lucky 7\n");
	}
	return 0;
}

int Chapter_4_1::ExampleIf3()
{
	int i;

	printf("Input number : ");
	scanf_s("%d", &i);

	if (i == 7)
	{
		printf("Number is 7.\n");
	}
	else
	{
		printf("Number is not 7.\n");
	}
	return 0;
}

int Chapter_4_1::ExampleIf4()
{
	int i;
	printf("input number : ");
	scanf_s("%d", &i);

	if (i == 7)
	{
		printf("Number is 7.\n");
	}
	else if (i == 8)
	{
		printf("Number is 8.\n");
	}
	else
	{
		printf("Not 7 and Not 8\n");
	}
	return 0;
}

int Chapter_4_1::ExampleIf5()
{
	int i;
	printf("Enter an integer : ");
	scanf_s("%d", &i);
	
	if (i % 2 == 0)
	{
		printf("%d is even number.\n", i);
	}
	else
	{
		printf("%d is odd number.\n", i);
	}
	return 0;
}

int Chapter_4_1::ExampleIf6()
{
	int i;
	printf("Enter the location the output string : ");
	scanf_s("%d", &i);

	system("cls");
	COORD pos;
	
	if (i == 1)
	{
		pos = { 20, 10 };
	}
	else if (i == 2)
	{
		pos = { 40, 10 };
	}
	else
	{
		pos = { 60, 10 };
	}
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("Test SetConsoleCursorPosition(...)\n");

	return 0;
}

int Chapter_4_1::ExampleIf7()
{
	int i, j;
	
	printf("Enter the first Integer : ");
	scanf_s("%d", &i);
	printf("Enter the second Integer : ");
	scanf_s("%d", &j);

	if (i > j)
	{
		printf("%d is greater than %d\n", i, j);
	}
	else if (i < j)
	{
		printf("%d is smaller than %d\n", i, j);
	}
	else
	{
		printf("%d and %d are the same.\n", i, j);
	}
	return 0;
}
