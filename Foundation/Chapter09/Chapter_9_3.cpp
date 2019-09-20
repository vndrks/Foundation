#include "Chapter_9_3.h"

#include <Windows.h>
#include <conio.h>
#include <time.h>
#include <stdio.h>
#include <math.h>

int Chapter_9_3::ArrayC()
{
	int i;
	int arPos[40][2] = {
		{48,6},{47,5},{46,4},{45,4},{44,3},{43,3},{42,3},
		{41,3},{40,3},{40,3},{39,4},{38,4},{37,5},{36,6},
		{36,7},{35,8},{35,9},{35,10},{34,11},{34,12},
		{34,13},{34,14},{35,15},{35,16},{35,17},{36,18},
		{37,19},{38,20},{39,20},{40,21},{41,21},{42,21},
		{42,21},{43,21},{44,20},{45,20},{46,20},{47,19},
		{48,18},{49,17}
	};

	_clrscr();
	COORD pos;
	for (i = 0; i < sizeof(arPos) / sizeof(arPos[0]); ++i)
	{
		pos = {(short)arPos[i][0], (short)arPos[i][1]};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		_putch('C');
	}
	return 0;
}

int Chapter_9_3::RandArray()
{
	short arPt[100][2];
	int i;

	_clrscr();
	
	srand((unsigned)time(NULL));

	for (i = 0; i < 100; i++)
	{
		arPt[i][0] = _Random(80);
		arPt[i][1] = _Random(25);

		COORD pos = { arPt[i][0], arPt[i][1] };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		_putch('*');
		Sleep(20);
	}

	for (i = 0; i < 100; i++)
	{
		COORD pos = { arPt[i][0],arPt[i][1] };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		_putch(' ');
		Sleep(20);
	}
	return 0;
}

#define JD_MAX_RANGE 100

int Chapter_9_3::EratosThenes()
{
	BOOL bPrime[JD_MAX_RANGE + 1];
	int i, j;

	for (i = 0; i <= JD_MAX_RANGE; ++i)
	{
		bPrime[i] = TRUE;
	}

	for (i = 2; i <= JD_MAX_RANGE; ++i)
	{
 		if (bPrime[i] == TRUE)
		{
			for (j = i * 2; j <= JD_MAX_RANGE; j = j + i)
			{
				bPrime[j] = FALSE;
			}
		}
	}

	puts("1 ~ 100 Prime number : ");
	for (i = 2; i <= JD_MAX_RANGE; ++i)
	{
		if (bPrime[i] == TRUE)
		{
			printf("%d  ", i);
		}
	}

	return 0;
}

int Chapter_9_3::AlphaNum()
{
	printf("Enter Alphabet(lower case) : ");

	char chTmp[1024];
	scanf_s("%[^\n]s", chTmp, sizeof(chTmp) / sizeof(chTmp[0]));	// [^\n] : 공백 입력이 가능하게 입력값을 해당 구분자로 구분한다.

	int arrAlphabet[26] = {};			// a ~ z count.

	for (int i = 0; i < sizeof(chTmp); ++i)
	{
		int nChar = chTmp[i];
		if (nChar >= 97 && nChar <= 122)
		{
			arrAlphabet[nChar - 97] += 1;
		}
	}
	for (int i = 0; i < sizeof(arrAlphabet) / sizeof(arrAlphabet[0]); ++i)
	{
		printf("%c count : %d\n", i + 97, arrAlphabet[i]);
	}
	return 0;
}

int Chapter_9_3::PrintTomorrow()
{
	int nMonth, nDay;
	printf("Enter month day separated by space(ex 3/5 - 3 5) : ");
	scanf_s("%d %d", &nMonth, &nDay);
	_PrintTomorrow(nMonth, nDay);

	return 0;
}

int Chapter_9_3::RandTable()
{
	int arRand[] = {2, 9, 14, 19, 27};
	int nNum;

	srand(time(NULL));

	nNum = arRand[rand() % (sizeof(arRand) / sizeof(arRand[0]))];
	printf("Generate random number : %d\n", nNum);

	return 0;
}

int Chapter_9_3::GameMessage1()
{
	_Congratulation(3);
	return 0;
}

int Chapter_9_3::GameMessage2()
{
	_Congratulation2(10);
	return 0;
}

int Chapter_9_3::GameMessage3()
{
	_Congratulation3(8);
	return 0;
}

int Chapter_9_3::PrintTomorrow2()
{
	int nYear;
	int nMonth;
	int nDay;

	printf("Enter year, month, day separated by space(ex 2019/9/17 : 2019 9 17) : ");
	scanf_s("%d %d %d", &nYear, &nMonth, &nDay);

	_PrintTomorrow2(nYear, nMonth, nDay);

	return 0;
}

int Chapter_9_3::Revolution1()
{
	double fAngle;
	int x = -1;
	int y = -1;

	system("cls");

	COORD pos;
	pos = { 40, 12 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	_putch('S');

	for (fAngle = 0; ; fAngle += 10)
	{
		if (fAngle == 360)
		{
			fAngle = 10;
		}
		if (_kbhit())
		{
			break;
		}
		pos = {40 + (short)x, 12 + (short)y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		_putch(' ');

		x = int(cos(fAngle * 3.1416 / 180) * 20);
		y = int(sin(fAngle * 3.1416 / 180) * 10);

		pos = { 40 + (short)x, 12 + (short)y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

		Sleep(100);
	}


	return 0;
}

int Chapter_9_3::Revolution2()
{
	double fAngle;
	int x = -1;
	int y = -1;

	static int arx[] = { 20, 19, 18, 17, 15, 12, 9, 6, 3, 0
		, -3, -6, -10,-12,-15,-17,-18,-19,-19,-19
		, -18,-17,-15,-12, -9, -6, -3, 0, 3, 6
		, 10, 12, 15, 17, 18, 19, };
	static int ary[] = { 0, 1, 3, 5, 6, 7, 8, 9, 9, 9
		,9 ,9 ,8, 7, 6, 4, 3, 1, 0, -1
		, -3, -5, -6, -7, -8, -9, -9, -9, -9, -9
		, -8, -7, -6, -4, -3, -1 };

	system("cls");

	COORD pos = {40, 12};
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	_putch('S');

	for (fAngle = 0; ; fAngle += 10)
	{	
		if (fAngle == 360)
		{
			fAngle = 10;
		}
		if (_kbhit() == true)
		{
			break;
		}

		pos = {40 + (short)x, 12 + (short)y};
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		_putch(' ');

		x = arx[(int)fAngle / 10];
		y = ary[(int)fAngle / 10];

		pos = { 40 + (short)x, 12 + (short)y };
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
		_putch('E');

		Sleep(100);
	}

	

	return 0;
}

void Chapter_9_3::_clrscr()
{
	system("cls");
}

int Chapter_9_3::_Random(int nMax)
{
	int nRandom = rand() % nMax;
	return nRandom;
}

int Chapter_9_3::_PrintTomorrow(int nMonth, int nDay)
{
	static int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (nDay > days[nMonth] || nMonth > 12 || nDay < 1)
	{
		printf("Wrong days.");
	}
	else
	{
		++nDay;

		if (nDay > days[nMonth])
		{
			nDay = 1;
			nMonth += 1;
		}
		if (nMonth > 12)
		{
			nMonth = 1;
		}

	}

	printf("Tomorrow is %d / %dst\n", nMonth, nDay);

	return nDay;
}

void Chapter_9_3::_Congratulation(int nCount)
{
	if (nCount >= 9)
	{
		nCount = 9;
	}
	switch (nCount)
	{
	case 1:
		puts("1111");
		break;
	case 2:
		puts("2222");
		break;
	case 3:
		puts("3333");
		break;
	case 4:
		puts("4444");
		break;
	case 5:
		puts("5555");
		break;
	case 6:
		puts("6666");
		break;
	case 7:
		puts("7777");
		break;
	case 8:
		puts("8888");
		break;
	case 9:
		puts("9999");
		break;
	default:
		puts("default");
		break;
	}
}

void Chapter_9_3::_Congratulation2(int nCount)
{
	const static char* pMessage[] = {
		""
		,"1111"
		,"2222"
		,"3333"
		,"4444"
		,"5555"
		,"6666"
		,"7777"
		,"8888"
	};

	printf("%s\n", pMessage[nCount]);
}

void Chapter_9_3::_Congratulation3(int nCount)
{
	const static char* pMessage[] = {
		"1111"
		,"2222"
		,"3333"
		,"4444"
	};

	static int arMes[] = {0, 0, 0, 0, 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 3};

	if (nCount >= 16)
	{
		nCount = 16;
	}
	printf("pMessage : %s\n", pMessage[arMes[nCount]]);
}

int Chapter_9_3::_PrintTomorrow2(int nYear, int nMonth, int nDay)
{
	static int arDay[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	if (nMonth > 12 || nMonth < 1 || nDay > arDay[nMonth] || nDay < 1)
	{
		printf("Wrong day \n");
		return -1;
	}

	if (nMonth == 12 && nDay == 31)					// last day of the year.
	{
		nYear++;
		nMonth = 1;
		nDay = 1;
	}
	else if (nDay == arDay[nMonth] && nMonth != 2)	// next month
	{
		nMonth++;
		nDay = 1;
	}
	else if (nDay >= arDay[nMonth])
	{
		if (nMonth == 2)
		{
			if (((nYear % 4 == 0) && (nYear % 100 != 0)) || ((nYear % 100 == 0) && (nYear % 400 == 0)))
			{
				nDay++;
			}
			else
			{
				nDay = 1;
				nMonth++;
			}
		}
		else
		{
			nDay = 1;
			nMonth++;
		}
	}
	else
	{
		nDay++;
	}


	printf("%d / %d  %d \n", nMonth, nDay, nYear);

	return 0;
}

