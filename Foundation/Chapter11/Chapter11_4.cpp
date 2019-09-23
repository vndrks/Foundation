#include "Chapter11_4.h"

#include <stdio.h>

int Chapter11_4::StringConst()
{
	char Name[] = "firstname lastname TTTT11";

	printf("Hello world\n");
	puts(Name);

	return 0;
}

int Chapter11_4::CharArray()
{
	char str[] = "Korea";
	const char* ptr = "Korea";

	puts(str);
	puts(ptr);

	//str = "China";
	ptr = "China";

	str[0] = 'C';
	//ptr[0] = 'C';

	puts("================");
	puts(str);
	puts(ptr);

	return 0;
}

int Chapter11_4::StringArray()
{
	char arCon[][32] = { "Korea", "America", "Iran", "Russia" };

	int i;

	for (i = 0; i < sizeof(arCon) / sizeof(arCon[0]); ++i)
	{
		puts(arCon[i]);
	}
	return 0;
}

int Chapter11_4::StringArray2()
{
	const char* pCon[] = { "Korea", "America", "Iran", "Russia" };

	int i;

	for (i = 0; i < sizeof(pCon) / sizeof(pCon[0]); ++i)
	{
		puts(pCon[i]);
	}
	return 0;
}

int Chapter11_4::String2Array()
{
	char arCon[][4][32] =
	{
		{ "1", "22", "333", "4444" }
		,{ "55555", "666666", "7777777", "88888888" }
		,{ "999999999", "1212", "43412", "ddaabcadf" }
		,{ "33665", "17", "32", "kkjuy" }
		,{ "zzz", "aa", "bbbas", "ddte" }
	};

	int x, y;

	for (y = 0; y < 5; ++y)
	{
		for (x = 0; x < 4; ++x)
		{
			printf("%s ", arCon[y][x]);

			if (x != 3)
			{
				printf(", ");
			}
		}
		printf("\n");
	}

	return 0;
}

int Chapter11_4::String2Array2()
{
	const char* arCon[][4] = {
		{ "1", "22", "333", "4444" }
		,{ "55555", "666666", "7777777", "88888888" }
		,{ "999999999", "1212", "43412", "ddaabcadf" }
		,{ "33665", "17", "32", "kkjuy" }
		,{ "zzz", "aa", "bbbas", "ddte" }
	};

	int x, y;

	for (y = 0; y < 5; ++y)
	{
		for (x = 0; x < 4; ++x)
		{
			printf("%s ", arCon[y][x]);

			if (x != 3)
			{
				printf(", ");
			}
		}
		printf("\n");
	}

	return 0;
}
