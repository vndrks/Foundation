#include "Chapter_5_1.h"

#include <stdio.h>
#include <conio.h>
#include <Windows.h>

int Chapter_5_1::IntDivide()
{
	int nScore;

	nScore = 86 + 65 + 92 + 88;
	printf("Total : %d, Average : %f\n", nScore, nScore / 4.);
	return 0;
}

int Chapter_5_1::CharAni()
{
	int i;

	COORD pos;
	
	for (i = 1; i <= 75; i = i + 1)
	{
		pos = { (short)i, 10 };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		if (i % 2 == 0)
		{
			puts(" __@");
		}
		else
		{
			puts(" ^^@");
		}
		Sleep(100);
	}
	return 0;
}

int Chapter_5_1::ScrollChar()
{

	int i = 0;
	int j = 0;

	COORD pos;

	while (1)			// for move right
	{
		if (i == 7)
		{
			i = 0;
		}
		
		for (j = 0; j <= 77; j = j + 1)
		{
			pos = { (short)j, 12 };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

			if (j % 7 == i)
			{
				_putch('O');
			}
			else
			{
				_putch('.');
			}
		}

		i = i + 1;
		Sleep(200);
	}

	return 0;
}

int Chapter_5_1::Increase()
{
	int i = 3;
	printf("prefix : %d\n", ++i);

	i = 3;
	printf("postfix : %d\n", i++);

	i = 0;
	while (i++ < 5)
	{
		printf("%d\n", i);
	}
	return 0;
}

int Chapter_5_1::InConeLine()
{
	int i = 3;
	printf("%d, %d\n", i, ++i);	// 4, 4
	i = 3;
	printf("%d, %d\n", i, i++); // 4, 3

	return 0;
}

int Chapter_5_1::Over1000()
{
	int i = 0;
	int nSum = 0;

	for (;;)
	{
		nSum += i;

		if (nSum > 1000)
		{
			printf("i : %d, nSum : %d\n", i, nSum);
			break;
		}

		++i;
	}

	return 0;
}
