#include "Chapter12_1.h"

#include <string>
#include <conio.h>
#include <Windows.h>

int Chapter12_1::Test01()
{
	char str1[6] = "korea";
	//str1 = "Test01";	// err
	char str2[6];

	strcpy_s(str1, sizeof(str1), "Corea");
	strcpy_s(str2, sizeof(str2), str1);

	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);


	//char str3[3];
	//strcpy_s(str3, sizeof(4), "1234");	// err
	return 0;
}

int Chapter12_1::Strncpy()
{
	char str1[10] = "abcdefghi";
	char str2[10] = "123456789";

	strncpy_s(str2, sizeof(str2), str1, 3);	// str2 : abc  
	// unknown.

	puts(str1);
	puts(str2);
	printf("str1 : %s\n", str1);
	printf("str2 : %s\n", str2);
	return 0;
}

int Chapter12_1::Strncpy2()
{
	char str[] = "Hello world !!!!";

	strncpy_s(str, "korea", 5);

	printf("str : %s\n", str);
	return 0;
}

int Chapter12_1::Test02()
{
	char str[11] = "abcd 안녕~";

	printf("strlen : %d\n", strlen(str));
	printf("sizeof : %d\n", sizeof(str));
	return 0;
}

int Chapter12_1::Strcat()
{
	char si[] = "Seoul";
	char ku[] = "dongdaemoon";
	char dong[] = "hoegi";
	char juso[64];

	strcpy_s(juso, sizeof(juso), si);
	strcat_s(juso, "si ");
	strcat_s(juso, ku);
	strcat_s(juso, "ku ");
	strcat_s(juso, dong);
	strcat_s(juso, "dong");

	puts(juso);
	return 0;
}

int Chapter12_1::Strcmp()
{
	char capital[16];

	printf("Where is a capital of our country? ");
	scanf_s("%s", capital, sizeof(capital));
	
	if (strcmp(capital, "seoul") == 0)
	{
		printf("Correct.\n");
	}
	else
	{
		printf("Wrong.\n");
	}
	return 0;
}

int Chapter12_1::Test03()
{
	char chDayOfWeek[32];

	printf("What is today of the week ?");
	scanf_s("%s", chDayOfWeek, sizeof(chDayOfWeek));

	if (strncmp(chDayOfWeek, "mon", 3) == 0)
	{
		printf("Correct \n");
	}
	else
	{
		printf("Wrong \n");
	}
	return 0;
}

int Chapter12_1::Strchr()
{
	char str[256];
	char* ptr;
	int nCount = 0;

	printf("Enter any character (max 255) : ");
	scanf_s("%s", str, sizeof(str));

	for (ptr = str;;)
	{
		ptr = strchr(ptr, 'a');
		if (ptr == NULL)
		{
			break;
		}

		nCount++;
		ptr++;
	}

	printf("a count : %d\n", nCount);

	return 0;
}

int Chapter12_1::Strstr()
{
	char chString[128];
	char chTmp[128];

	strcpy_s(chString, sizeof(chString), "AB CD EF GH IJ KL MN");

	printf("Enter included string? : ");
	scanf_s("%s", chTmp, sizeof(chTmp));

	if (strstr(chString, chTmp) != NULL)
	{
		printf("Included \"AB\" \n");
	}
	else
	{
		printf("Not included \"AB\" \n");
	}
	return 0;
}

int Chapter12_1::Strtok()
{
	char str[] = "I am a boy,you are a girl";
	char* p;
	char* pContext;

	p = strtok_s(str, " ,", &pContext);

	while (p != NULL)
	{
		puts(p); 
		p = strtok_s(NULL, " ,", &pContext);
	}
	return 0;
}

int Chapter12_1::Strrev()
{
	char str[] = "Made in Korea";
	//char str[] = "가나다라";
	char str2[16];

	strcpy_s(str2, str);
	_strupr_s(str2);
	printf("strupr : %s\n", str2);

	strcpy_s(str2, str);
	_strlwr_s(str2);
	printf("strlwr : %s\n", str2);

	strcpy_s(str2, str);
	_strrev(str2);
	printf("strlwr : %s\n", str2);

	strcpy_s(str2, str);
	_strset_s(str2, '*');
	printf("strlwr : %s\n", str2);

	return 0;
}

int Chapter12_1::TestMem01()
{
	int ar[10];
	memset(ar, 0, sizeof(ar));

	int ar1[5] = { 10, 8, 0, 75, 28 };
	int ar2[12];
	memset(ar2, 0, sizeof(ar2));
	memcpy(ar2, ar1, sizeof(ar));
	
	char str1[5] = { "abcd" };
	char ar3[5];
	//memset(ar3, 0, sizeof(ar3));
	memcpy(ar3, str1, strlen(str1) + 1);	// _1 : copy to \n. 

	return 0;
}

int Chapter12_1::InsertString()
{
	char str[32] = "You are beautiful";
	char str2[] = "very ";

	memmove(str + 13, str + 8, 10);	// 10 : beautiful\n
	memcpy(str + 8, str2, strlen(str2));

	puts(str);
	return 0;
}

#define MAX_BUF	16
#define INPUT_BUF 1024

int Chapter12_1::RotateScroll()
{
	char chInput[INPUT_BUF];
	printf("Enter Text (Enter within %d characters) : ", MAX_BUF);
	scanf_s("%s", chInput, sizeof(chInput));

	if (strlen(chInput) > 15)
	{
		printf("[ERROR] Enter within %d characters", MAX_BUF);
		exit(0);
	}

	//char str[MAX_BUF] = "123456789abcdef";
	//char str[MAX_BUF] = "12345";
	char str[MAX_BUF];
	memcpy(str, chInput, sizeof(chInput));
	int nCurPos = 0;

	_MoveCursor(20, 12);
	puts(str);

	while(1)
	{
		if (_kbhit())
		{
			exit(0);
		}

		memmove(str + 1, str, sizeof(str) - 1);

		if (strlen(str) >= MAX_BUF)
		{
			memcpy(str + 0, str + MAX_BUF - 1, sizeof(char));	// Move rear to front.
			memset(str + MAX_BUF - 1, 0, sizeof(char));
		}
		else
		{
			memset(str + nCurPos, ' ', sizeof(char));
		}

		++nCurPos;

		Sleep(200);
		_MoveCursor(20, 12);
		puts(str);
	}

	return 0;
}

#define MAX_BUF	16
#define INPUT_BUF 16

int Chapter12_1::RotateScroll2()
{
	char chInput[INPUT_BUF];
	
	printf("Enter Text (Enter within %d characters) : ", MAX_BUF);
	scanf_s("%s", chInput, sizeof(chInput));

	if (strlen(chInput) > 15)
	{
		printf("[ERROR] Enter within %d characters", MAX_BUF);
		exit(0);
	}

	char chStr[MAX_BUF];
	memcpy(chStr, chInput, sizeof(chInput));

	_MoveCursor(20, 12);
	puts(chStr);

	int nLength = strlen(chStr);
	
	for (int i = nLength; i < MAX_BUF; ++i)
	{
		memset(chStr + i, ' ', sizeof(char));
	}

	while (1)
	{
		if (_kbhit())
		{
			exit(0);
		}

		memcpy(chStr + MAX_BUF - 1, chStr + 0, sizeof(char));	// chStr[0] to rear.
		memmove(chStr - 1, chStr, sizeof(chStr));				// Forward one space.
		memset(chStr + 15, 0, sizeof(char));

		Sleep(200);
		_MoveCursor(20, 12);
		puts(chStr);
	}

	return 0;
}

int Chapter12_1::_MoveCursor(int nX, int nY)
{
	COORD pos = { (short)nX, (short)nY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);

	return 0;
}
