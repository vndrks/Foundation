#include "Chapter10_1.h"
#include "Chapter10_2.h"
#include "Chapter10_3.h"
#include "Chapter10_4.h"

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	Chapter10_1 chapter10_1;
	Chapter10_2 chapter10_2;
	Chapter10_3 chapter10_3;
	Chapter10_4 chapter10_4;

	//chapter10_1.Test01();
	//chapter10_1.PointerType();
	//chapter10_1.PointerType2();
	//chapter10_1.PointerMinus();
	//chapter10_1.Test02();
	//chapter10_1.Test03();
	//chapter10_1.MidPointer();
	//chapter10_1.PtrPlusPlus();
	//chapter10_1.PtrPpSum();

	//chapter10_2.VoidPointer();
	//chapter10_2.VoidPointer2();
	//chapter10_2.VoidDump();
	//chapter10_2.NullTest();

	//chapter10_3.Malloc();
	//chapter10_3.TestCalloc();
	//chapter10_3.Realloc();

	//chapter10_4.DoublePointer();
	//chapter10_4.FuncAlloc();
	//chapter10_4.FuncAlloc2();
	chapter10_4.DynStrArray();
	//chapter10_4.VoidAlloc();
	return 0;
}

//int main(int argc, char* argv[])
//{
//	int i;
//
//	printf("argment count : %d\n", argc);
//
//	for (i = 0; i < argc; ++i)
//	{
//		printf("%dth argment : %s\n", i, argv[i]);
//	}
//}

//int main(int argc, char* argv[])
//{
//	int a, b, c;
//	char op;
//
//	if (argc != 4)
//	{
//		printf("Enter valid fomula.\n");
//		return -1;
//	}
//
//	a = atoi(argv[1]);
//	b = atoi(argv[3]);
//	op = argv[2][0];
//
//	switch (op)
//	{
//	case '+':
//		c = a + b;
//		break;
//	case '-':
//		c = a - b;
//		break;
//	case '*':
//		c = a * b;
//		break;
//	case '/':
//		c = a / b;
//		break;
//	default:
//		printf("Error\n");
//		break;
//	}
//
//	printf("Result : %d\n", c);
//	return 0;
//}