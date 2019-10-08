#include "Chapter13_2.h"

#include <string>

int Chapter13_2::Struct()
{
	tag_Friend Friend;
	
	strcpy_s(Friend.name, sizeof(char) * 10, "아무개?");
	Friend.age = 30;
	Friend.height = 170.3;
	printf("name : %s, age : %d, height : %.1f\n", Friend.name, Friend.age, Friend.height);


	return 0;
}

int Chapter13_2::Chapter13_2_Test()
{
	tag_Friend tegFriend;
	tag_Friend* pFriend = &tegFriend;
 	(*pFriend).age = 30;
	return 0;
}

int Chapter13_2::StructPointer()
{
	tag_Friend Friend;
	tag_Friend* pFriend;

	pFriend = &Friend;

	strcpy_s(pFriend->name, "MyName");
	pFriend->age = 100;
	pFriend->height = 170.3;

	printf("name : %s, age : %d, height : %.1f\n", Friend.name, Friend.age, Friend.height);
	printf("name : %s, age : %d, height : %.1f\n", pFriend->name, pFriend->age, pFriend->height);

	return 0;
}

int Chapter13_2::StructArrayPointer()
{
	// 구조체 배열
	tag_Friend arJuso[10];
	arJuso[5].age = 30;

	// 구조체에 속한 배열
	tag_Friend Friend;
	Friend.name[0] = 'C';
	Friend.name[1] = 'A';
	Friend.name[2] = 'L';

	// 배열에 속한 구조체에 속한 배열
	arJuso[0].name[0] = 'A';
	arJuso[0].name[1] = 'B';
	arJuso[0].name[2] = 'C';
	arJuso[0].name[4] = 'D';
	arJuso[0].name[6] = 'E';

	for (int i = 0; i < 10; ++i)
	{
		printf("arJuso[0].name[%d] : %c\n", i, arJuso[0].name[i]);
	}
	
	// 구조체 포인터 배열
	tag_Friend* pJuso[10];
	int i;

	for (i = 0; i < 10; ++i)
	{
		pJuso[i] = (tag_Friend*)malloc(sizeof(tag_Friend));
	}

	pJuso[3]->age = 55;

	for (i = 0; i < 10; ++i)
	{
		free(pJuso[i]);
	}
	
	return 0;
}

int Chapter13_2::StructAndArray()
{
	tag_Circle arCircle[10];
	tag_Circle* pCircle;

	pCircle = &arCircle[2];

	arCircle[4].member[3].age = 14;

	pCircle->member[3].age = 15;

	pCircle->member[3].name[1] = 'H';

	return 0;
}


