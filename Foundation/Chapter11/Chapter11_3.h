#pragma once
class Chapter11_3
{
public:
	int ArrayOfPointer();		// Example : ArrayPointer
	int TestArrayOfPointer();	// Test 11-3-na
	int ArrayArg();				// Example : ArrayArg
	int TestArrayOfPointer2();	// Test 11-3-na
	int ArrayPara1();			// Example ArrayPara1
	int ArrayPara2();			// Example ArrayPara2
	int TwoArrayPara();			// Example : TwoArrayPara
	int Malloc2Array();			// Example : malloc2array
	int Test01();				// Test : dynamic 

	int Malloc2Array2();		// Example : malloc2array2
	int Test02();
	int AmpersaneArray();


private:
	int _GetTotalForWeek(int(*pa)[7]);
	void _OutArray(int ar[5]);
	//void _OutArray(int *ar);
	//void _OutArray(int ar[]);

	int _GetArSum1(int ar[], int nSize);
	int _GetArSum2(int ar[][7]);
	int _GetArSum3(int (*pa)[7]);

	void _func(int(*ar)[3], int size);
};

