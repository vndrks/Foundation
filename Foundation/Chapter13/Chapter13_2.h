#pragma once

struct tag_Friend
{
	char name[10];
	int age;
	double height;
};

struct tag_Friend2
{
	char *pName;
	int age;
	double height;
};

struct tag_Circle
{
	char name[16];
	int memNum;
	tag_Friend member[50];
};

class Chapter13_2
{
public:
	int Struct();				// Example : Struct
	int Chapter13_2_Test();		// Test
	int StructPointer();		// Example : StructPointer
	int StructArrayPointer();	// Example : StructArrayPointer
	int StructAndArray();		// Example : StructAndArray


private:

};

