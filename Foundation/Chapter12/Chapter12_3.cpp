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
	const char* p;

	for(p = str; *p; ++p)
	{
	}

	return p - str;
}

char* Chapter12_3::my_strcat(char* dest, const char* src)
{
	char* d = dest;

	dest += my_strlen(dest);
	my_strcpy(dest, src);

	return d;
}

char* Chapter12_3::my_strcat1(char* dest, const char* src)
{
	char* d = dest;

	while (*dest)
	{
		// *dest++;  // Warning : C6269 dereference ignored - https://docs.microsoft.com/ko-kr/visualstudio/code-quality/c6269?view=vs-2019
		dest += 1;
	}

 	while (*dest++ = *src++)
	{
	};

	return d;
}

char* Chapter12_3::my_strchr(const char* str, int c)
{
	do
	{
		if (*str == c)
		{
			return (char*)str;
		}
	} while (*str++);
	
	return nullptr;
}

char* Chapter12_3::my_strstr(const char* str, const char* strSearch)
{
	const char* s;
	const char* sub;

	for (; *str; ++str)
	{
		for (sub = strSearch, s = str; *sub && *s && (*s == *sub); ++sub, ++s)
		{
		}
		if (*sub == 0)
		{
			return (char*)str;
		}
	}

	return nullptr;
}

int Chapter12_3::my_strcmp(const char* str1, const char* str2)
{
	int n = strcmp(str1, str2);

	while (1)
	{
		if (*str1 > *str2)
		{
			return 1;
		}
		if (*str1 < *str2)
		{
			return -1;
		}
		if ((*str1 == 0) && (*str2 == 0))
		{
			return 0;
		}

		str1++;
		str2++;
	}

	return 0;
}

int Chapter12_3::my_strcmp2(const char* str1, const char* str2)
{
	int n = strcmp(str1, str2);
	for (; *str1 == *str2; str1++, str2++)
	{
		if (*str1 == 0)
		{
			return 0;
		}
	}
	return (*str1 > *str2) ? 1 : -1;
}

int Chapter12_3::my_stricmp1(const char* str1, const char* str2)
{
	int m = _stricmp(str1, str2);

	char a1 = 0;
	char a2 = 0;

	do
	{
		if (*str1 != *str2)
		{
			a1 = *str1 + (*str1 >= 'A' && *str1 <= 'Z') * 32;
			a2 = *str2 + (*str2 >= 'A' && *str2 <= 'Z') * 32;

			if (a1 != a2)
			{
				break;
			}
		}

		if (*str1 == 0)
		{
			break;
		}

		str1++;
		str2++;

	} while (1);

	if (*str1 == *str2)
	{
		return 0;
	}
	else
	{
		return a1 - a2;
	}
}

int Chapter12_3::my_stricmp2(const char* str1, const char* str2)
{
	return 0;
}

int Chapter12_3::my_strncpy(char* str1, int nSize, const char* src, int nCnt)
{
	if (nSize - 1 < nCnt)
	{
		return -1; // error
	}

	*str1 = 0;
	for (int i = 0; i < nCnt; ++i)
	{
		str1[i] = src[i];
	}
	
	str1[nCnt] = 0;

	return 0;
}

int Chapter12_3::my_strncat(char* dest, int nSize, const char* str2, int nLen)
{
	char* d;

	for (d = dest; *d; ++d)
	{
		;
	}
	int length = d - dest;

	dest += length;

	while (nLen)
	{
		*dest++ = *str2++;
		--nLen;
		
	}
	return 0;
}
