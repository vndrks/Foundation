#pragma once

struct
{
	int a;
	short b[2];
} st;

union
{
	int a;
	short b[2];
} un;

union tag_kong
{
	int a;
	short b[4];
};

enum PartType
{
	HDD = 0
	,MONITOR
	,KEYBOARD
};

struct tag_Part
{
	PartType Type;
	char Maker[32];
	int Price;
	int Capacity;
	int Size;
	int KeyNum;
};

struct tag_Part2
{
	PartType Type;
	char Maker[32];
	int Price;
	union
	{
		int Capacity;
		int Size;
		int KeyNum;
	};
};

class Chapter13_5
{
public:
	int Union();
	int Union2();


private:


};

