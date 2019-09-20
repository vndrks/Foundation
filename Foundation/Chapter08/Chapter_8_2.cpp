#include "Chapter_8_2.h"

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define randomize() srand((unsigned)time(NULL));
#define random(n) (rand()) % (n)
int Chapter_8_2::Random()
{
	int i;
	srand((unsigned)time(NULL));
	//srand(1);
	for (i = 0; i < 10; ++i)
	{
		printf("%d  ", rand() % 48);
	}
	printf("\n");
	return 0;
}
