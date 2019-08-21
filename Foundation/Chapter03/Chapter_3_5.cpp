#include "Chapter_3_5.h"
#include <stdio.h>
#include <Windows.h>

Chapter_3_5::Chapter_3_5()
{
}

Chapter_3_5::~Chapter_3_5()
{
}

int Chapter_3_5::ExampleChar()
{
	char ch;
	//ch = 'A';
	//ch = 0x41;
	ch = 65;
	putchar(ch);

	return 0;
}

int Chapter_3_5::ExampleCharContext()
{
	char ch = 'A';
	printf("char : %c, Integer : %d\n", ch, ch);

	COORD pos = { ch, 5 };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	
	putchar(ch);

	return 0;
}
