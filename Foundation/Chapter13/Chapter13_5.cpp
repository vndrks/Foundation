#include "Chapter13_5.h"

#include <string>

int Chapter13_5::Union()
{
	tag_kong un;

	un.a = 0x12345678;
	printf("un.a = %x\n", un.a);
	printf("un.b[0] = %x\n", un.b[0]);
	printf("un.b[1] = %x\n", un.b[1]);
	printf("un.b[2] = %x\n", un.b[2]);
	printf("un.b[3] = %x\n", un.b[3]);

	un.b[0] = (short)0x9999;

	printf("대입 후의 un.a = %x\n", un.a);

	return 0;
}

int Chapter13_5::Union2()
{
	tag_Part A;
	A.Type = HDD;
	strcpy_s(A.Maker, sizeof(char) * 10, "SamSoong");
	A.Price = 100000;
	A.Capacity = 80;
	return 0;
}
