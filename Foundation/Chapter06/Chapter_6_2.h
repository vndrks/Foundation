#pragma once
class Chapter_6_2
{
public:
	int MaxFunc2();			// Example : MaxFunc2
	int BoxMessage();		// Example : BoxMessage
	int BoxMessage2();		// Example : BoxMessage2

	int Power();			// Problem : Power

private:
	int _Max(int a, int b);
	void BoxMessage(const char* str);
	
	void _BoxMessage2(const char* str);
	void _Putchs(int ch, int n);
	unsigned int _power(unsigned int nInteger, unsigned int nPow);
};

