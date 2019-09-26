#include "Chapter12_1.h"
#include "Chapter12_2.h"
#include "Chapter12_3.h"

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

	char dest[256];
	chapter12_3.my_strcpy(dest, "Test3");
	return 0;
}