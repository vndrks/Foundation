#include "Chapter_7_1.h"

#include <stdio.h>

#include "global.h"

int m_nGlobal;
//extern int m_nValue; // Example Extern2

int Chapter_7_1::Storage()
{
	int nLocal;

	m_nGlobal = 1;
	nLocal = 2;
	//i = 3;
	return 0;
}

int Chapter_7_1::LocalGlobal()
{
	// int nLocal; // X
	int nLocal = 0;
	printf("Global is %d, local is %d\n", m_nGlobal, nLocal);

	return 0;
}

int nBefore = 11;
int Chapter_7_1::Extern1()
{
	// extern int nBefore;	// can skip
	extern int nAfter;		// cannot skip

	printf("nBefore = %d, nAfter = %d\n", nBefore, nAfter);
	return 0;
}
int nAfter = 22;


int Chapter_7_1::Extern2()
{
	//printf("Value is %d\n", m_nValue);
	return 0;
}

extern int m_nValue;
void func();
int Chapter_7_1::Extern3()
{
	

	//printf("Value is %d\n", m_nValue);
	func();
	return 0;
}
void func()
{
	printf("Here is func, value = %d\n", m_nValue);
}


void Chapter_7_1::_func()
{
	int i;

	m_nGlobal = 1;
	//nLocal = 2;
	i = 3;
}


