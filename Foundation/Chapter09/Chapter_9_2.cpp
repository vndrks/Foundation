#include "Chapter_9_2.h"

#include <stdio.h>

int Chapter_9_2::Garbage()
{
	int ar[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		printf("ar[%d] = %d\n", i, ar[i]);
	}
	return 0;
}
int Chapter_9_2::TestArrInit()
{
	int ar[5] = { 1,2,3,4,5 };
	// ar = { 1,2,3,4,5 }; // 'ar' is Punctuator. no operator. Therefore it cannot be initialized.

	int ar1[2][3] = {1, 2, 3, 4, 5, 6};
	int ar2[2][3] = { {1, 2, 3}, {4, 5, 6} };
	int ar3[2][3] = {
		{1, 2, 3}
		,{4, 5, 6}
		,
	};

	int ar4[][3] = { {1, 2}, {4, 5, 6} };
	//int ar5[][] = { {1, 2, 3}, {4, 5, 6} }; error
	return 0;
}
