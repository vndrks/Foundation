#include "Chapter12_1.h"
#include "Chapter12_2.h"
#include "Chapter12_3.h"

#include <stdio.h>
#include <string>

int main(int argc, char* argv[])
{
	Chapter12_1 chapter12_1;
	Chapter12_2 chapter12_2;
	Chapter12_3 chapter12_3;

	//chapter12_1.Test01();
	
	//chapter12_1.Strncpy();
	//chapter12_1.Strncpy2();

	//chapter12_1.Test02();
	//chapter12_1.Strcat();
	//chapter12_1.Strcmp();
	
	//chapter12_1.Test03();
	//chapter12_1.Strchr();
	//chapter12_1.Strstr();
	//chapter12_1.Strtok();
	//chapter12_1.Strrev();
	//chapter12_1.TestMem01();
	//chapter12_1.InsertString();
	//chapter12_1.RotateScroll();
	//chapter12_1.RotateScroll2();

	//chapter12_2.Itoa();
	//chapter12_2.Strtol();
	//chapter12_2.Sprintf();
	//chapter12_2.HangMan();

	//chapter12_3.my_puts("Test1");
	//chapter12_3.my_puts2("Test2");

	//char src[256] = "Test3";
	//char dest[256];
	//chapter12_3.my_strcpy(dest, src);

	//int nLen1 = chapter12_3.my_strlen("Test12");
	//int nLen2 = chapter12_3.my_strlen2("Test123");
	//printf("nLen1 : %d, nLen2 : %d\n", nLen1, nLen2);

	//// strcat
	//char dest[32] = "Hello ";
	//printf("Ret : %s\n", chapter12_3.my_strcat(dest, "world"));

	//// strcat1
	//char dest1[32] = "Hello ";
	//printf("Ret : %s\n", chapter12_3.my_strcat1(dest1, "world1"));

	//// strchr
	//char srch[32] = "strchr";
	//printf("Addr : 0x%lp\n", chapter12_3.my_strchr(srch, 'r'));

	//// strstr
	//char srch[32] = "strstr";
	//printf("Addr : 0x%lp\n", chapter12_3.my_strstr(srch, "rs"));

	// strcmp
	//char chStr1[32] = "BDSA";
	//char chStr2[32] = "BdSa1";
	//printf("ret : %d\n", strcmp(chStr1, chStr2));
	//
	//printf("ret : %d\n", chapter12_3.my_strcmp(chStr1, chStr2));
	//printf("ret : %d\n", chapter12_3.my_strcmp2(chStr1, chStr2));

	//char chStr1[32] = "a123";
	//char chStr2[32] = "A321";
	//printf("stricmp %d \n", _stricmp(chStr1, chStr2));
	//printf("stricmp %d \n", chapter12_3.my_stricmp1(chStr1, chStr2));


	//char str1[32] = "";
	//char str2[32] = "World!!";
	//strncpy_s(str1, 6, str2, 2);
	//printf("strncpy chStr1 : %s\n", str1);

	//char chStr1[32];
	//char chStr2[32] = "World!!";
	//chapter12_3.my_strncpy(chStr1, 6, chStr2, 2);
	//printf("chStr1 : %s\n", chStr1);

	char str1[32] = "Hel ";
	char str2[32] = "World!!";

	//strncat_s(str1, sizeof(str1), str2, 2);
	chapter12_3.my_strncat(str1, sizeof(str1), str2, 8);
	printf("str1 : %s\n", str1);

	return 0;
}