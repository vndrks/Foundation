#pragma once
class Chapter12_3
{
public:
	void my_puts(const char* str);	
	void my_puts2(const char* str);

	char*	my_strcpy(char* dest, const char* src);
	size_t	my_strlen(const char* str);
	size_t	my_strlen2(const char* str);
	char*	my_strcat(char* dest, const char* src);
	char*	my_strcat1(char* dest, const char* src);
	char*	my_strchr(const char* str, int c);
	char*	my_strstr(const char* str, const char* strSearch);
	
	int		my_strcmp(const char* str1, const char* str2);		// Problem my_strcmp
	int		my_strcmp2(const char* str1, const char* str2);

	int		my_stricmp1(const char* str1, const char* str2);		// Problem my_stricmp1
	int		my_stricmp2(const char* str1, const char* str2);		// Problem my_stricmp2

	int		my_strncpy(char* str1, int nSize, const char* src, int nCnt);
	int		my_strncat(char* dest, int nSize, const char* str2, int nLen);

	void	stradd(char* dest, char ch);
	char*	strstr_1(const char* string, const char* strSrch);

	char*	strdup1(const char* src);
private:



};

