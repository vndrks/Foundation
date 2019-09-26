#include "Chapter12_2.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

int Chapter12_2::Itoa()
{
	int num = 12345;
	int nRadix;

	char str[32];

	for (nRadix = 2; nRadix <= 20; nRadix++)
	{
		_itoa_s(num, str, nRadix);
		printf("%d radix : %s\n", nRadix, str);
	}
	return 0;
}

int Chapter12_2::Strtol()
{
	char* pEnd;
	char str[] = "abcd";

	long l = strtol(str, &pEnd, 16);
	
	printf("%ld\n", l);
	printf("%d\n", l);
	printf("%x\n", l);

	return 0;
}

int Chapter12_2::Sprintf()
{
	char str[128];
	int i = 123;
	double d = 3.1415;

	sprintf_s(str, "%d", i);
	printf("Integer to String : %s\n", str);

	sprintf_s(str, "%.2f", d);
	printf("Real number to String : %s\n", str);

	sprintf_s(str, "%e", d);
	printf("Floating point : %s\n", str);
	return 0;
}

#define JD_PROBLEM_POS_Y	4
#define JD_WRONG_POS_Y		12
#define JD_BEGIN_POS_X		30
#define JD_MAX_BUF			128
#define JD_MAX_TRY			7
int Chapter12_2::HangMan()
{
	int nInput;
	const char* chWordList[] = {
		"apple"
		,"bear"
		,"cat"
		,"dog"
		,"elephant"
		,"zoo"
	};

	srand(time(NULL));

	while (1)
	{
		// initialize 
		int nRand;
		nRand = rand() % (sizeof(chWordList) / sizeof(chWordList[0])) + 0;
	
		char chWord[32];
		strcpy_s(chWord, sizeof(chWord), chWordList[nRand]);

		_MoveCursor(4, 4);
		printf("Problem : ");

 		for (int i = 0; i < strlen(chWord); ++i)
		{
			_MoveCursor(JD_BEGIN_POS_X + (i * 4), JD_PROBLEM_POS_Y);
			printf("_");
		}
	
		_MoveCursor(4, 12);
		printf("Wrong characters : ");
		for (int i = 0; i < JD_MAX_TRY; ++i)
		{
			_MoveCursor(JD_BEGIN_POS_X + (i * 4), JD_WRONG_POS_Y);
			printf("_");
		}
		printf("\n");
	
		char chUsedChar[32];
		char chCorrect[32];
		char chIncorrect[JD_MAX_TRY + 1];
		
		int nTryCnt = 0;
		int nIncorrectCnt = 0;

		memset(chUsedChar, 0, sizeof(chUsedChar));
		memset(chCorrect, 0, sizeof(chCorrect));
		memset(chIncorrect, 0, sizeof(JD_MAX_TRY + 1));

		bool isWin = false;

		while (1)
		{
			int chInput;
			for (;;)
			{
				chInput = _getch();
				if (((chInput >= 'a' && chInput <= 'z') || (chInput >= 'A' && chInput <= 'Z'))
					&& strchr(chUsedChar, chInput) == NULL)
				{
					break;
				}
			}
			
			nTryCnt++;
			chUsedChar[nTryCnt - 1] = chInput;
			
			if (strchr(chWord, chInput) != NULL)		// Correct
			{
				for (int i = 0; i < strlen(chWord); ++i)
				{
					if (chWord[i] == chInput)
					{
						chCorrect[i] = chInput;
						_MoveCursor(JD_BEGIN_POS_X + (i * 4), JD_PROBLEM_POS_Y - 1);
						printf("%c", chInput);

						if (strcmp(chWord, chCorrect) == 0)
						{
							isWin = true;
							break;
						}
					}
				}
			}
			else	// Incorrect
			{
				++nIncorrectCnt;
				chCorrect[strlen(chCorrect)] = chInput;

				_MoveCursor(JD_BEGIN_POS_X + ((nIncorrectCnt - 1) * 4), JD_WRONG_POS_Y - 1);
				printf("%c", chInput);
			}

			// Finish this stage and Preparing next game.

			if (nIncorrectCnt >= 7 || isWin == true)
			{
				for (int i = 3; i >= 0; --i)
				{
					_MoveCursor(4, 24);

					if (isWin == true)
					{
						printf("You Win. Preparing new game %d sec\n", i);
					}
					else
					{
						printf("Geme Over. Preparing new game %d sec\n", i);
					}
					
					_MoveCursor(4, 25);
					printf("Enter any key Exit.\n");
					if (_kbhit())
					{
						exit(0);
					}
					Sleep(1000);
				}

				_MoveCursor(4, 24);
				printf("                                          ");
				_MoveCursor(4, 25);
				printf("                                          ");

				break;
			}
		}

		// clear screen
		for (int i = 0; i < strlen(chWord); ++i)
		{
			_MoveCursor(JD_BEGIN_POS_X + (i * 4), JD_PROBLEM_POS_Y);
			printf(" ");
			_MoveCursor(JD_BEGIN_POS_X + (i * 4), JD_PROBLEM_POS_Y - 1);
			printf(" ");
		}

		for (int i = 0; i < JD_MAX_TRY; ++i)
		{
			_MoveCursor(JD_BEGIN_POS_X + (i * 4), JD_WRONG_POS_Y);
			printf(" ");
			_MoveCursor(JD_BEGIN_POS_X + (i * 4), JD_WRONG_POS_Y - 1);
			printf(" ");
		}
	}

	return 0;
}

void Chapter12_2::_MoveCursor(int nX, int nY)
{
	COORD pos = { (short)nX, (short)nY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}
