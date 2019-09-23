#include "Chapter11_3.h"

#include <stdio.h>
#include <string>

int Chapter11_3::ArrayOfPointer()
{
	char arps[5][10] = {
		"Cat"
		,"Dog"
		,"Orangutan"
		,"Pig"
		,"Tiger"
	};

	char (*ps)[10];

	//ps = arps;
	ps = &arps[0];

	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("%s\n", *ps++);
	}
	return 0;
}

int Chapter11_3::TestArrayOfPointer()
{
	int ari[][7] = {
		{1, 2, 3, 4, 5, 6, 7}
		,{8, 9, 10, 11, 12, 13, 14}
		,{15, 16, 17, 18, 19, 20, 21}
	};

	int (*pa)[7];
	int (*pb)[8];

	pa = ari;
	//pb = ari;	ERROR

	return 0;
}

int Chapter11_3::ArrayArg()
{
	int ari[][7] = {
	{1, 2, 3, 4, 5, 6, 7}
	,{8, 9, 10, 11, 12, 13, 14}
	,{15, 16, 17, 18, 19, 20, 21}
	};

	int i;
	for (i = 0; i < 3; ++i)
	{
		printf("%d's week sales : %d\n", i + 1, _GetTotalForWeek(&ari[i]));
	}
	return 0;
}

int Chapter11_3::TestArrayOfPointer2()
{
	int ar[] = { 1, 2, 3, 4, 5, 6, 7 };
	int ar2[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };

	int(*pa)[7];

	pa = &ar;
	//pa = &ar2;	// Error. need type casting
	pa = (int(*)[7])&ar2;
	return 0;
}

int Chapter11_3::ArrayPara1()
{
	int ar[] = { 1, 2, 3, 4, 5 };

	_OutArray(ar);
	return 0;
}

int Chapter11_3::ArrayPara2()
{
	int ar[] = { 1, 2, 3, 4, 5, 6, 7 };
	int ar2[] = { 11, 22, 33, 44, 55, 66, 77 };

	printf("1st ar sum : %d\n", _GetArSum1(ar, sizeof(ar) / sizeof(ar[0])));
	printf("1st ar2 sum : %d\n", _GetArSum1(ar2, sizeof(ar2) / sizeof(ar2[0])));

	printf("2st ar sum : %d\n", _GetArSum2(&ar));
	printf("2st ar2 sum : %d\n", _GetArSum2(&ar2));

	printf("3st ar sum : %d\n", _GetArSum3(&ar));
	printf("3st ar2 sum : %d\n", _GetArSum3(&ar2));
	return 0;
}

int Chapter11_3::TwoArrayPara()
{
	int ar1[2][3] = {
		{ 1, 2, 3 }
		,{ 4, 5, 6 }
	};
	int ar2[3][3] = {
		{ 7, 8, 9 }
		,{ 10, 11, 12 }
		,{ 13, 14, 15 }
	};

	_func(ar1, 2);
	_func(ar2, 3);
	 
	return 0;
}

int Chapter11_3::Malloc2Array()
{
	int i;

	char(*p)[4] = (char(*)[4])malloc(3 * 4 * sizeof(char));

	strcpy_s(p[0], "000");
	strcpy_s(p[1], "111");
	strcpy_s(p[2], "222");

	for (i = 0; i < 3; ++i)
	{
		puts(p[i]);
	}
	free(p);
	return 0;
}

int Chapter11_3::Test01()
{
	int n = 5;
	int* pi = (int*)malloc(sizeof(n) * sizeof(int));
	
	for (int i = 0; i < n; ++i)
	{
		*pi = i + 20;
	}

	free(pi);
	return 0;
}

int Chapter11_3::Malloc2Array2()
{
	int n = 3;
	int m = 4;

	int i;

	char** p;
	p = (char**)malloc(n * sizeof(char*));
	for (i = 0; i < n; ++i)
	{
		p[i] = (char*)malloc(m * sizeof(char));
	}
	strcpy_s(p[0], m * sizeof(char), "000");
	strcpy_s(p[1], m * sizeof(char), "111");
	strcpy_s(p[2], m * sizeof(char), "222");

	for (i = 0; i < n; ++i)
	{
		puts(p[i]);
	}
	for (i = 0; i < n; ++i)
	{
		free(p[i]);
	}

	free(p);

	return 0;
}

int Chapter11_3::Test02()
{
	int ar[5] = { 1, 2, 3, 4, 5 };

	printf("%p\n", ar);
	printf("%p\n", &ar);

	int* pi;
	pi = ar;
	//pi = &ar;

	return 0;
}

int Chapter11_3::AmpersaneArray()
{
	int ar[5] = { 1, 2, 3, 4, 5 };
	int* p1;
	int(*p2)[5];

	p1 = ar;
	p2 = &ar;

	printf("before(p1) = %p\n", p1);
	printf("before(p2) = %p\n", p2);
	p1++;
	p2++;

	printf("after(p1) = %p\n", p1);
	printf("after(p2) = %p\n", p2);

	char name[20];
	scanf_s("%s", name, sizeof(char) * 20);

	printf("ret : %s\n", name);
	return 0;
}

int Chapter11_3::_GetTotalForWeek(int(*pa)[7])
{
	int i, sum = 0;

	for (i = 0; i < 7; ++i)
	{
		//sum += pa[0][i];
		sum += (*pa)[i];
	}

	return sum;
}

void Chapter11_3::_OutArray(int ar[5])
{
	int i;
	for (i = 0; i < 5; ++i)
	{
		printf("int ar[5] : %dth = %d\n", i, ar[i]);
	}
}

int Chapter11_3::_GetArSum1(int ar[], int nSize)	// int *ar, int ar[], int ar[7] 
{
	int i;
	int nSum = 0;

	for (i = 0; i < nSize; ++i)
	{
		nSum += ar[i];
	}

	return nSum;
}

int Chapter11_3::_GetArSum2(int ar[][7])
{
	int i;
	int nSum = 0;

	for (i = 0; i < 7; ++i)
	{
		nSum += ar[0][i];
	}

	return nSum;
}

int Chapter11_3::_GetArSum3(int(*pa)[7])
{
	int i;
	int nSum = 0;

	for (i = 0; i < 7; ++i)
	{
		nSum += pa[0][i];
	}

	return nSum;
}

void Chapter11_3::_func(int(*ar)[3], int size)
{
	int i, j;

	for (i = 0; i < size; ++i)
	{
		for (j = 0; j < 3; ++j)
		{
			printf("ar[%d][%d] = %d\n", i, j, ar[i][j]);
		}
	}
}

//void Chapter11_3::_OutArray(int* ar)
//{
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		printf("int *ar : %dth = %d\n", i, ar[i]);
//	}
//}
//
//void Chapter11_3::_OutArray(int ar[])
//{
//	int i;
//	for (i = 0; i < 5; ++i)
//	{
//		printf("int ar[] : %dth = %d\n", i, ar[i]);
//	}
//}
