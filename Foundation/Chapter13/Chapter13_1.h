#pragma once

struct MyStruct
{
	int aa;
	char name[12];
	double height;
};

typedef struct
{
	char Name[10];
	int Age;
	double Height;
} FriendType;

class Chapter13_1
{
public:
	int Chapter13_1_Test();
	void OutFriend(FriendType type);

private:


};

