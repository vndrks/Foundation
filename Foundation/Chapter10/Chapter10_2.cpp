#include "Chapter10_2.h"

#include <stdio.h>
#include <string.h>	// memset
#include <stdlib.h>	// malloc

int Chapter10_2::VoidPointer()
{
	int i = 1234;
	void* vp;

	vp = &i;

	//printf("vp : %d\n", *vp);
	printf("vp : %d\n", *(int*)vp);
	return 0;
}

int Chapter10_2::VoidPointer2()
{
	int ar[] = { 1, 2, 3, 4, 5 };
	void* vp;

	//vp = &ar[0];
	vp = ar;

	//vp = vp + 1;
	vp = (int*)vp + 1;

	printf("%d\n", *(int*)vp);
	return 0;
}

int Chapter10_2::TestMemset()
{
	int ari[10];
	char arc[20];
	double ard[30];

	memset(ari, 0, sizeof(ari));
	memset(arc, 0, sizeof(arc));
	memset(ard, 0, sizeof(ard));

	return 0;
}

int Chapter10_2::VoidDump()
{
	int ari[] = { 1, 2, 3, 4, 5 };
	char arc[] = "Pointer";

	_arDump(ari, sizeof(ari));
	_arDump(arc, sizeof(arc));

	return 0;
}

int Chapter10_2::NullTest()
{
	char str[] = "Korea";
	char* p;

	/* ERROR
		p = strchr(str, 'z');	// p is NULL
		*p = 's';				// violated write access
	*/
	p = strchr(str, 'r');
	*p = 's';
	if (p != NULL)
	{
		*p = 's';
	}
	puts(str);

	return 0;
}



void Chapter10_2::_arDump(void* array, int length)
{
	int i;
	for (i = 0; i < length; i++)
	//for (i = 0; i < length / 2; i++)
	{
		printf("%02X ", *((unsigned char*)array + i));
		//printf("%04X ", *((unsigned short*)array + i));
	}
	printf("\n");
}
