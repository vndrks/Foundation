#include "Chapter_3_6.h"
#include <stdio.h>

Chapter_3_6::Chapter_3_6()
{
}

Chapter_3_6::~Chapter_3_6()
{
}

int Chapter_3_6::ExampleEnum()
{
	enum fruit {APPLE, ORANGE, BANANA};
	//enum fruit a;	// c grammar
	fruit a;
	a = ORANGE;
	printf("a = %d\n", a);
	return 0;
}
