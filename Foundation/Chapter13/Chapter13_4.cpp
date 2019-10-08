#include "Chapter13_4.h"

#include <stdio.h>

int Chapter13_4::BitField()
{
	tag_bit bit;

	bit.a = 0xf;
	bit.b = 0;
	bit.c = 1;
	bit.d = 0xff;

	printf("Size : %d, Value : %x\n", sizeof(bit), bit);
	return 0;
}
