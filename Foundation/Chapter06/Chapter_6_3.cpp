#include "Chapter_6_3.h"

#include <iostream>

int Chapter_6_3::CallValue()
{
	int i, j;

	i = 5;
	j = plusone(i);

	std::cout << "i = " << i << ", Result : " << j << std::endl;
	return 0;
}

int Chapter_6_3::CallRef()
{
	int i;

	i = 5;
	plusref(&i);

	std::cout << "i : " << i << std::endl;
	return 0;
}

int Chapter_6_3::ValueRef()
{
	int i, iCopy;
	int* pi;
	 
	i = 5;
	iCopy = i;
	iCopy = iCopy + 1;
	printf("i = %d, iCopy = %d\n", i, iCopy);

	i = 5;
	pi = &i;
	*pi = *pi + 1;
	printf("i = %d, *pi = %d\n", i, *pi);

	return 0;
}

int Chapter_6_3::CallRef2()
{
	int i;
	i = 5;
	plusref2(i);

	printf("Result : %d\n", i);

	return 0;
}

void Chapter_6_3::TestString()
{
	char name[32];

	scanf_s("%s", name);


}

int Chapter_6_3::plusone(int a)
{
	a = a + 1;
	return a;
}

void Chapter_6_3::plusref(int* a)
{
	*a = *a + 1;
}

void Chapter_6_3::plusref2(int& a)
{
	a += 1;
}
