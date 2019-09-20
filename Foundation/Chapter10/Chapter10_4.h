#pragma once
class Chapter10_4
{
public:
	int DoublePointer();	// Example : dblPointer
	int FuncAlloc();		// Example : FuncAlloc
	int FuncAlloc2();		// Example : FuncAlloc2
	int TestRet();
	int DynStrArray();		// Example : DynStrArray
	int VoidPp();			// Example : voidpp
	int VoidAlloc();		// Example : voidalloc

private:
	void _InputName(char** pName, int nLength);
	void _InputName2(char* pName);
	void _Alloc(void** mem, size_t size);
};

