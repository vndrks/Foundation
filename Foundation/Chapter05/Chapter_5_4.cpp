#include "Chapter_5_4.h"

#include <stdio.h>

#include <Windows.h>

int Chapter_5_4::TypeConvert()
{
	int i, j;
	double d;

	i = 3;
	d = 2.17;
	j = i + d;

	printf("j = %d\n", j);

	return 0;
}

int Chapter_5_4::gugu1()
{
	COORD pos;

	pos = { 5, 3 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("2 * 1 = 2");

	pos = { 5, 4 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("2 * 2 = 4");

	pos = { 5, 5 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("2 * 3 = 6");

	return 0;
}

int Chapter_5_4::gugu2()
{
	COORD pos;
	for (int i = 2; i <= 5; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			pos = { (short)i * 15 - 25, (short)j + 2 };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

			printf("%d x %d = %d", i, j, i * j);
		}
	}

	for (int i = 6; i <= 9; ++i)
	{
		for (int j = 1; j <= 9; ++j)
		{
			pos = { ((short)i - 4) * 15 - 25, (short)j + 12 };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

			printf("%d x %d = %d", i, j, i * j);
		}
	}
	return 0;
}

int Chapter_5_4::gugu3()
{
	int i, j;
	COORD pos;

	for (i = 2; i <= 9; ++i)
	{
		for (j = 1; j <= 9; ++j)
		{
			if (i <= 5)
			{
				pos = { (short)i * 15 - 25, (short)j + 2 };
			}
			else
			{
				pos = { ((short)i - 4) * 15 - 25, (short)j + 12 };
			}
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d x %d = %d", i, j, i * j);
		}
	}
	return 0;
}

int Chapter_5_4::gugu4()
{
	int i, j;
	COORD pos;

	for (i = 2; i <= 9; ++i)
	{
		for (j = 1; j <= 9; ++j)
		{
			pos = { ((short)i - (i > 5 ? 4 : 0)) * 15 - 25, (short)j + (i > 5 ? 12 : 2) };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d x %d = %d", i, j, i * j);
		}
	}
	return 0;
}

int Chapter_5_4::gugu5()
{
	int i, j;
	COORD pos;
	for (i = 2; i <= 9; ++i)
	{
		for (j = 1; j <= 9; ++j)
		{
			pos = { ((i - (i > 5) * 4) * 15 - 25, (short)j + 2 + (i > 5) * 10 )};
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
			printf("%d x %d = %d", i, j, i * j);
		}
	}
	return 0;
}

int Chapter_5_4::gugu6()
{
	return 0;
}

int Chapter_5_4::AsciiTable()
{
	int i, j;
	COORD pos;

	for (i = 0; i < 5; ++i)
	{
		for (j = 0; j < 19; ++j)
		{
			pos = { (short)i, (short)j + 2 };
			printf("%c", j + 32);

			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		}
	}

	return 0;
}
