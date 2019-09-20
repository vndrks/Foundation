#include "Chapter11_1.h"

#include <stdio.h>

int Chapter11_1::SubArray()
{
	unsigned char ari[2][3] =
	{
		{1, 2, 3}
		,{4, 5, 6}
		,
	};

	_arDump(ari, sizeof(ari));
	_arDump(ari[0], sizeof(ari[0]));
	_arDump(ari[1], sizeof(ari[1]));
	return 0;
}

int Chapter11_1::SubArray2()
{
	char ar[] = "Korea's hero.";
	char ars[2][3][9] = {
		{"이순신", "강감찬", "김유신" }
		,{"유관순", "을지문덕", "신사임당" }
	};

	printf("Array ar = %s\n", ar);
	printf("ar[1][1] = %s\n", ars[1][1]);
	puts(ars[0][1]);
	return 0;
}

int Chapter11_1::ArrayIndex()
{
	int ar[5] = { 1, 2, 3, 4, 5 };
	
	printf("ar[2] = %d\n", ar[2]);
	printf("ar[2] = %d\n", *(ar + 2));
	printf("ar[2] = %d\n", 2[ar]);

	return 0;
}

int Chapter11_1::ArrayIndex2()
{
	int ar[3][4] = {
		{ 1, 2, 3, 4 }
		,{ 5, 6, 7, 8 }
		,{ 9, 10, 11, 12 }
		,
	};

	printf("ar[2][1] = %d\n", ar[2][1]);			// 10
	printf("ar[2][1] = %d\n", *(*(ar + 2) + 1));	// 10

	printf("sizeof(ar + 2) = %d\n", sizeof(ar + 2));				// 4
	printf("sizeof(*(ar + 2)) = %d\n", sizeof(*(ar + 2)));			// 16
	printf("sizeof(*(ar + 2) + 1) = %d\n", sizeof(*(ar + 2) + 1));	// 4
	
	printf("sizeof(*(ar + 0)) = %d, Value : %d\n", sizeof(*(ar + 2) + 0), *(*(ar + 2) + 0));
	printf("sizeof(*(ar + 1)) = %d, Value : %d\n", sizeof(*(ar + 2) + 1), *(*(ar + 2) + 1));
	printf("sizeof(*(ar + 2)) = %d, Value : %d\n", sizeof(*(ar + 2) + 2), *(*(ar + 2) + 2));
	printf("sizeof(*(ar + 3)) = %d, Value : %d\n", sizeof(*(ar + 2) + 3), *(*(ar + 2) + 3));

	printf("*(ar + 2)[1] = %d\n", *(ar + 2)[0]);					// 9
	printf("*(ar + 2)[1] = %d\n", *(ar + 2)[0] + 1);				// 10
	printf("*(ar + 2)[1] = %d\n", *(ar + 2)[0] + 2);				// 11
	printf("*(ar + 2)[1] = %d\n", *(ar + 2)[0] + 3);				// 12
	return 0;
}

void Chapter11_1::_arDump(void* array, int length)
{
	int i;
	for (i = 0; i < length; ++i)
	{
		printf("%02X ", *((unsigned char*)array + i));
	}
	printf("\n");
}
