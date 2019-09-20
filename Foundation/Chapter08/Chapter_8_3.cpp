#include "Chapter_8_3.h"

#include <stdio.h>
#include <time.h>
#include <math.h>

int Chapter_8_3::Test01()
{
	time_t now1;
	now1 = time(NULL);

	time_t now2;
	time(&now2);


	char chTmp[128];
	ctime_s(chTmp, sizeof(chTmp), &now1);

	printf("now : %s\n", chTmp);
	return 0;
}

int Chapter_8_3::Time()
{
	time_t t;
	time(&t);

	char chTmp[32];
	ctime_s(chTmp, sizeof(chTmp), &t);

	printf("Now is %s ^^\n", chTmp);
	return 0;
}

int Chapter_8_3::StrDate()
{
	char chDate[128];
	char chTime[128];

	_strdate_s(chDate, sizeof(chDate));
	_strtime_s(chTime, sizeof(chTime));

	printf("Date : %s, Time : %s\n", chDate, chTime);
	return 0;
}

int Chapter_8_3::Tm()
{
	time_t t;
	tm* pTime = new tm;

	time(&t);
	localtime_s(pTime, &t);

	printf(" Now \n Year : %d\n Month : %d\n day : %d\n"
		, pTime->tm_year + 1900
		, pTime->tm_mon + 1
		, pTime->tm_mday);
	printf(" Hour : %d\n Min : %d\n Sec : %d\n", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
	return 0;
}

int Chapter_8_3::Strftime()
{
	time_t t;
	char chFormat[128];
	tm* pTime = new tm;

	time(&t);
	localtime_s(pTime, &t);

	strftime(chFormat, sizeof(chFormat), "%Y %B %d %A %I:%M:%S %p", pTime);
	puts(chFormat);

	return 0;
}

int Chapter_8_3::Clock()
{
	clock_t clock_t1, clock_t2;
	int nCount = 0;

	clock_t1 = clock();

	for (;;)
	{
		printf("Waiting... %d\n", nCount++);
		clock_t2 = clock();

		if (clock_t2 - clock_t1 > 3 * CLOCKS_PER_SEC)
		{
			break;
		}
	}
	printf("Finish \n");

	return 0;
}

int Chapter_8_3::Difftime()
{
	int i;
	time_t t1, t2;

	time(&t1);

	for (i = 0; i < 100000; ++i)
	{
		printf("Result = %f\n", sin(i * 3 / 3.1416 / 180) * cos(i * 3.1416 / 180));
	}
	time(&t2);
	printf("Operation time : %.2f\n", difftime(t2, t1));
	return 0;
}
 