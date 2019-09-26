#pragma once
class Chapter12_1
{
public:
	int Test01();
	
	int Strncpy();			// Example : strncpy
	int Strncpy2();			// Example : strncpy2

	int Test02();
	int Strcat();			// Example : strcat
	int Strcmp();			// Example : strcmp

	int Test03();			// Test strncmp
	int Strchr();			// Example : strchr
	int Strstr();			// Test strstr

	int Strtok();			// Example : strtok
	int Strrev();			// Example : strrev

	int TestMem01();		// Test memset
	int InsertString();		// Example : InsertString

	int RotateScroll();		// Problem : RotateScroll
	int RotateScroll2();	// Problem : RotateScroll Reverse

private:
	int _MoveCursor(int nX, int nY);


};

