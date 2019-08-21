#pragma once

#include <stdio.h>
#include <stdlib.h>	// system("cls")
#include <Windows.h>

class Chapter_3_2
{
public:
	Chapter_3_2();
	virtual ~Chapter_3_2();

public:
	int printf1();

	int printf2();

	int printf3();

	int ExamScanf();

	int clrscr();

	int gotoxy(int x, int y);

	int ExamGets();

	int ExamGetChWait();
};


