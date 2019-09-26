#include "Chapter12_3.h"

#include <stdio.h>
#include <conio.h>
#include <string.h>

void Chapter12_3::my_puts(const char* str)
{
	while (*str)
	{
		_putch(*str++);
	}
	_putch('\n');
}

void Chapter12_3::my_puts2(const char* str)
{
	for (int i = 0; str[i]; ++i)
	{
		_putch(str[i]);
	}
	_putch('\n');
}

char* Chapter12_3::my_strcpy(char* dest, const char* src)
{
	char* d = dest;

	while (*dest++ = *src++)
	{
	}

	return d;
}

size_t Chapter12_3::my_strlen(const char* str)
{
	size_t nLen = 0;

	while (*str++)
	{
		++nLen;
	}
	return nLen;
}

size_t Chapter12_3::my_strlen2(const char* str)
{
	return size_t();
}

char* Chapter12_3::my_strcat(char* dest, const char* src)
{
	return nullptr;
}

char* Chapter12_3::my_strchr(const char* string, int c)
{
	return nullptr;
}

char* Chapter12_3::my_strstr(const char* string, const char* strSearch)
{
	return nullptr;
}
