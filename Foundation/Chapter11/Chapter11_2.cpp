#include "Chapter11_2.h"

#include <stdio.h>
#include <string>

int Chapter11_2::PointerArray()
{
	const char* arps[] = {
		"Cat"
		,"Dog"
		,"Orangutan"
		,"Pig"
		,"Earthwarm"
	};

	int i;

	for (i = 0; i < 5; ++i)
	{
		printf("Addr : %04X ,Val :  %s\n", *arps[i], arps[i]);
	}
	return 0;
}

int Chapter11_2::PASung()
{
	int* ar[3];
	int num[3];
	int i;

	for (i = 0; i < 3; ++i)
	{
		printf("Enter the number of student in class %d : ", i + 1);
		scanf_s("%d", &num[i]);
		ar[i] = (int*)malloc(num[i] * sizeof(int));
	}

	/* score process */

	for (i = 0; i < 3; ++i)
	{
		free(ar[i]);
	}

	return 0;
}
