#pragma once
class Chapter_6_3
{
public:
	int CallValue();	// Example : CallValue
	int CallRef();		// Example : CallRef
	int ValueRef();		// Example : ValueRef
	int CallRef2();		// Example : CallRef2
	void TestString();	// Test : string

	

private:
	int plusone(int a);
	void plusref(int* a);
	void plusref2(int& a);
};

