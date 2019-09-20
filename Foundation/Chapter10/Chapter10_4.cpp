#include "Chapter10_4.h"

#include <stdio.h>
#include <string>

int Chapter10_4::DoublePointer()
{
	int i;
	int* pi;
	int** ppi;

	i = 1234;

	pi = &i;
	ppi = &pi;

	printf("ppi : %d\n", **ppi);

	return 0;
}

int Chapter10_4::FuncAlloc()
{
	char* pName;
	_InputName(&pName, 12);

	printf("Name : %s\n", pName);

	return 0;
}

int Chapter10_4::FuncAlloc2()
{
	char* pName = 0;
	_InputName2(pName);

	printf("Name1 : %s\n", pName);

	free(pName);
	return 0;
}

int Chapter10_4::TestRet()
{
	return 0;
}

int Chapter10_4::DynStrArray()
{
	int len = 10;
	int num = 5;
	int i;

	char** name;

	//name = (char**)malloc(num * sizeof(char*));
	name = (char**)calloc(num, sizeof(char*));

	for (i = 0; i < num; ++i)
	{
		name[i] = (char*)malloc(len * sizeof(char));
	}

	for (i = 0; i < num; ++i)
	{
		sprintf_s(name[i], len, "String %d", i);
		puts(name[i]);
	}

	for (i = 0; i < num; ++i)
	{
		free(name[i]);
	}

	free(name);

	return 0;
}

int Chapter10_4::VoidPp()
{
	void* vp;
	int av1[5];
	void* av[5];
	void** vpp;
	int i;
	int* pi = &i;

	vpp = &vp;
	vpp = av;
	vpp++;
	*vpp;
	//vpp = &pi;
	//**vpp;

	return 0;
}

int Chapter10_4::VoidAlloc()
{
	void* vp;

	_Alloc(&vp, sizeof(int));
	*(int*)vp = 12341111;

	printf("%d\n", *(int*)vp);

	free(vp);

	return 0;
}

void Chapter10_4::_InputName(char** pName, int nLength)
{
	*pName = (char*)calloc(nLength, sizeof(char));
	strcpy_s(*pName, nLength, "Carbin12345");
}

void Chapter10_4::_InputName2(char* pName)
{

	pName = (char*)malloc(12);
	strcpy_s(pName, 12, "Carbin");

	//printf("Name2 : %s\n", *pName);	
}

void Chapter10_4::_Alloc(void** mem, size_t size)
{
	*mem = malloc(size);
}
