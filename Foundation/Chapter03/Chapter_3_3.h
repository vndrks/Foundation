#pragma once

#include <stdio.h>
class Chapter_3_3
{
public:
	Chapter_3_3();
	virtual ~Chapter_3_3();

public:
	/* Example 3-3 - Overflow */
	int Overflow();

	int Overflow_Extra(int nVal1, int nVal2);

	/* Example 3-3 - int64 */
	int GetInt64();
};

