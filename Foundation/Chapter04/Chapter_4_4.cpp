#include "Chapter_4_4.h"


#include <Windows.h>
#include <conio.h>

Chapter_4_4::Chapter_4_4()
{
}

Chapter_4_4::~Chapter_4_4()
{
}

int Chapter_4_4::ExamSwitch()
{
	int nInput;
	printf("Enter number : ");
	scanf_s("%d", &nInput);

	switch (nInput)
	{
	case 0:
		printf("Number is 0 \n");
		break;
	case 1:
		printf("Number is 1 \n");
		break;
	case 2:
		printf("Number is 2 \n");
		break;
	default:
		printf("Is a number other than 0, 1, 2. \n");
		break;
	}
	
	return 0;
}

int Chapter_4_4::ExamSwitch2()
{
	int nInput;
	printf("Enter number : ");
	scanf_s("%d", &nInput);

	if (nInput == 0)
	{
		printf("Number is 0 \n");
	}
	else if (nInput == 1)
	{
		printf("Number is 1 \n");
	}
	else if (nInput == 2)
	{
		printf("Number is 2 \n");
	}
	else
	{
		printf("Is a number other than 0, 1, 2. \n");
	}
	return 0;
}

int Chapter_4_4::ExamMoveSharp()
{
	int x, y;
	int ch;

	x = 40;
	y = 10;

	system("cls");

	for (;;)
	{
		SetPos(x, y);
		putchar('#');
		ch = _getch();

		// 120 x 30
		if (ch == 0xE0 || ch == 0)
		{
			ch = _getch();
			switch (ch)
			{
			case 75:		// left
				if (x > 0)
				{
					x = x - 1;
				}
				else
				{
					x = 120;
				}
				break;
			case 77:		// right
				if (x < 120)
				{
					x = x + 1;
				}
				else
				{
					x = 0;
				}
				break;
			case 72:		// up
				if (y == 0)
				{
					y = 30;
				}
				else
				{
					y = y - 1;
				}
				break;
			case 80:		// down
				if (y == 30)
				{
					y = 0;
				}
				else
				{
					y = y + 1;
				}
				
				break;
			default:
				_putch('\a');
				break;
			}
		}
		else
		{
			switch (ch)
			{
			case ' ':
				system("cls");
				break;
			case 'q':
			case 'Q':
				exit(0);
			default:
				_putch('\a');
				break;
			}
		}
	}
}

void Chapter_4_4::SetPos(int nX, int nY)
{
	COORD pos = { nX, nY };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

int Chapter_4_4::ExamScanCode()
{
	int ch;
	for (;;)
	{
		ch = _getch();
		if (ch == 0xE0 || ch == 0)
		{
			ch = _getch();
			printf("Extend key code = %d\n", ch);
		}
		else
		{
			printf("Character = %c, code = %d\n", ch, ch);

			if (ch == 'q') exit(0);
		}
	}
	return 0;
}

int Chapter_4_4::ExamSwitchCalc()
{
	char op;
	int i = 10;
	int j = 5;

	printf("Choice operation of 10 and 5(+-*/) : ");
	scanf_s("%c", &op, sizeof(op));

	switch (op)
	{
	case '+':
		printf("%d %c %d = %d\n", i, op, j, i + j);
		break;
	case '-':
		printf("%d %c %d = %d\n", i, op, j, i - j);
		break;
	case '*':
		printf("%d %c %d = %d\n", i, op, j, i * j);
		break;
	case '/':
		printf("%d %c %d = %d\n", i, op, j, i / j);
		break;
	default:
		printf("Enter one of the +, -, *, / \n");
		break;
	}
	return 0;
}

int Chapter_4_4::ExamSwitchScore()
{
	int nScore;
	printf("Enter your score :");
	scanf_s("%d", &nScore, sizeof(nScore));

	switch (nScore / 10)
	{
	case 10:
	case 9:
		printf("soo\n");
		break;
	case 8:
		printf("woo\n");
		break;
	case 7:
		printf("mi\n");
		break;
	case 6:
		printf("yang\n");
		break;
	default:
		printf("ga\n");
		break;
	}


	return 0;
}
