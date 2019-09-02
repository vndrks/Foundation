#include "Chapter_4_5.h"

#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

void Chapter_4_5::ExamGoToSum()
{
	int i, sum;
	i = 1;
	sum = 0;
A2:
	printf("A2 \n");

here:
	sum = sum + i;
	if (i < 100)
	{
		i = i + 1;
		goto here;
	}
	printf("Sum from 1 to 100 : %d\n", sum);

//A1:
//	printf("A1 \n");
//
//	goto A1;
//	goto A2;

}

void Chapter_4_5::ExamContinue()
{
	int i;

	for (i = 1; i <= 50; i++)
	{
		if (i % 9 == 0)
		{
			continue;
		}
		if (i % 3 == 0)
		{
			printf("%d\n", i);
		}
	}
}

void Chapter_4_5::ProblemReflectSharp()
{
	system("cls");

	int nX = 0;
	int nY = 0;

	for (;;)
	{
		printf("#");
		Sleep(20);
		SetPos(nX, nY);
		
	}
}

int Chapter_4_5::SetPos(int &nX, int &nY)
{

	if (nX < 119 && nY < 29)
	{
		nX += 1;
		nY += 1;
	}
	else if (nX >= 119 && nY < 29)
	{
		nX = 0;
		nY + 1;
	}
	else if (nX < 119 && nY >= 29)
	{
		nX += 1;
		nY = 0;
	}
	else
	{
		nX += 1;
		nY += 1;
	}

	if (nX > 119 && nY > 29)
	{
		nX = 0;
		nY = 0;
	}

	COORD pos;
	pos = { (short)nX, (short)nY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

	return 0;
}
