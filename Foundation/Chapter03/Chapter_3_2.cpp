#include "Chapter_3_2.h"

Chapter_3_2::Chapter_3_2()
{
}

Chapter_3_2::~Chapter_3_2()
{
}

/* Example 3-2 printf1 */
int Chapter_3_2::printf1()
{
	int value = 12;
	char ch = 'S';

	printf("value : %i, ch : %c \n", value, ch);
	return 0;
}

/* Example 3-2 printf2 */
int Chapter_3_2::printf2()
{
	int nNum = 123;

	printf("-->%d<--\n", nNum);
	printf("-->%5d<--\n", nNum);
	printf("-->%05d<--\n", nNum);
	printf("-->%-05d<--\n", nNum);

	return 0;
}

/* Example 3-2 printf3 */
int Chapter_3_2::printf3()
{
	double fPie = 3.14;
	printf("-->%f<--\n", fPie);
	printf("-->%10f<--\n", fPie);
	printf("-->%.2f<--\n", fPie);
	printf("-->%10.2f<--\n", fPie);
	printf("-->%010.2f<--\n", fPie);
	printf("-->%-10.2f<--\n", fPie);

	return 0;
}

/* Example 3-2 scanf */
int Chapter_3_2::ExamScanf()
{
	int a, b;
	int sum;

	printf("Enter input first number :");
	scanf_s("%d", &a);
	printf("Enter input second number : ");
	scanf_s("%d", &b);
	sum = a + b;
	printf("a + b : %d\n", sum);

	return 0;
}

/* Example 3-2 gotoxy */
int Chapter_3_2::clrscr()
{
	system("cls");
	return 0;
}

int Chapter_3_2::gotoxy(int x, int y)
{
	clrscr();
	COORD pos = { x, y };
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
	printf("center\n");
	return 0;
}

int Chapter_3_2::ExamGets()
{
	char addr[128];

	printf("Input address : ");
	scanf_s("%s", addr);
	printf("Address : %s\n", addr);

	return 0;
}

int Chapter_3_2::ExamGetChWait()
{
	puts("======================================\n");
	puts("complex ......\n");
	puts("======================================\n");

	puts("Press any key");
	getchar();
	clrscr();
	puts("OK?");

	return 0;
}

