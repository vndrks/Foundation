#include "Chapter_5_4.h"

#include <stdio.h>
#include <conio.h>
#include <time.h>

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

	for (int i = 0; i <= 4; ++i)
	{
		for (int j = 0; j < 19; ++j)
		{
			pos = { ((short)i + 1) * 16, (short)j + 2 };
			SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

			printf("%d %X %c", j + (19 * i) + 32, j + (19 * i) + 32, j + (19 * i) + 32);
		}
	}

	return 0;
}

int Chapter_5_4::BaseBall()
{
	int nRandom;
	
	int nHundredsDigitR;
	int nTensDigitR;
	int nUnitsDigitR;

	while (1)
	{
		printf("##########################\n");
		printf("######## New Game ########\n");
		printf("##########################\n");

GetRandom:
		srand(time(NULL));
		nRandom = rand() % 900 + 100;

		nHundredsDigitR = nRandom / 100;
		nTensDigitR = (nRandom - (nHundredsDigitR * 100)) / 10;
		nUnitsDigitR = nRandom - (nHundredsDigitR * 100) - (nTensDigitR * 10);

		if (nHundredsDigitR == nTensDigitR || nHundredsDigitR == nUnitsDigitR
			|| nTensDigitR == nUnitsDigitR)
		{
			goto GetRandom;
		}

		printf("%d \n", nRandom);

		int nInput;

		while (1)
		{
			printf("Enter 3digit number (exit 0) : ");
			scanf_s("%d", &nInput);
		
			int nHundredsDigit;
			int nTensDigit;
			int nUnitsDigit;

			nHundredsDigit = nInput / 100;
			nTensDigit = (nInput - (nHundredsDigit * 100)) / 10;
			nUnitsDigit = nInput - (nHundredsDigit * 100) - (nTensDigit * 10);
		
			if (nInput == 0)
			{
				exit(0);
			}
			else if (nHundredsDigit == nTensDigit || nHundredsDigit == nUnitsDigit
				|| nTensDigit == nUnitsDigit)
			{
				printf("Enter three digit different number.\n");
				continue;
			}
			else if (nInput >= 100 && nInput < 1000)
			{
				printf("Calculator...\n");
			}
			else
			{
				printf("Number must be greater than 100 and less than 1000 \n ");
				continue;
			}

			int arrRandom[3] = { nHundredsDigitR, nTensDigitR, nUnitsDigitR };
			int arrInput[3] = { nHundredsDigit, nTensDigit, nUnitsDigit };

			int nBall = 0;
			int nStrike = 0;

			for (int i = 0; i < sizeof(arrRandom) / sizeof(int); ++i)
			{
				for (int j = 0; j < sizeof(arrInput) / sizeof(int); ++j)
				{
					if (arrRandom[i] == arrInput[j])
					{
						if (i == j)
						{
							++nStrike;
						}
						else
						{
							++nBall;
						}
					}
				}
			}		

			if (nStrike == 3)
			{
				printf("3 Strike. You win. \n");
				break;
			}
			else if (nStrike == 0 && nBall == 0)
			{
				printf("Out \n");
			}
			else
			{
				printf("%d Strike and %d ball.\n", nStrike, nBall);
			}
		}
	}
	return 0;
}
