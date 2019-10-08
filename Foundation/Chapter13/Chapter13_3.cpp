#include "Chapter13_3.h"

#include <string>

int Chapter13_3::InitStruct()
{
	static tag_Friend Friends[10] = {
		{"AAA", 11, 111.5 }
		,{"Bna", 2, 222.4 }
		,{"CCC", 3, 333.3 }
		,{"DDD", 40, 444.2 }
		,{"EEE", 50, 555.1 }
		,
	};

	printf("3th info : name=%s, age=%d, height=%.2f\n"
		, Friends[2].name, Friends[2].age, Friends[2].height);

	return 0;
}

int Chapter13_3::StructArg()
{
	tag_Friend Friend = { "MyName", 31, 170.3 };

	OutFriend(Friend);
	OutFriend(&Friend);

	return 0;
}

int Chapter13_3::StructRet()
{
	tag_Friend f = GetFriend();

	printf("name : %s, age : %d, height : %.2f \n", f.name, f.age, f.height);
	return 0;
}

int Chapter13_3::StructRet2()
{
	tag_Friend* f = GetFriend2();

	printf("name : %s, age : %d, height : %.2f \n", f->name, f->age, f->height);
	return 0;
}

int Chapter13_3::ShallowCopy()
{
	tag_Friend2 Albert = { NULL, 19, 170.33 };
	tag_Friend2 Kim;

	Albert.pName = (char*)malloc(sizeof(char) * 32);
	strcpy_s(Albert.pName, sizeof(char) * 32, "알버트 아인슈타인");
	Kim = Albert;
	printf("Name : %s, Age : %d, Height : %.2f\n", Kim.pName, Kim.age, Kim.height);

	strcpy_s(Albert.pName, sizeof(char) * 32, "아이작 뉴튼");

	printf("Name : %s, Age : %d, Height : %.2f\n", Kim.pName, Kim.age, Kim.height);

	free(Albert.pName);
	free(Kim.pName);		// err

	return 0;
}

int Chapter13_3::DeepCopy()
{
	tag_Friend2 Albert = { NULL, 20, 170.32 };
	tag_Friend2 Kim;

	Albert.pName = (char*)malloc(sizeof(char) * 32);
	strcpy_s(Albert.pName, sizeof(char) * 32, "알버트 아인슈타인");

	Kim = Albert;
	printf("Name : %s, Age : %d, Height : %.2f\n", Kim.pName, Kim.age, Kim.height);

	Kim.pName = (char*)malloc(sizeof(char) * 32);
	strcpy_s(Kim.pName, sizeof(char) * 32, "아이작 뉴튼");

	printf("Name : %s, Age : %d, Height : %.2f\n", Kim.pName, Kim.age, Kim.height);

	free(Albert.pName);
	free(Kim.pName);

	return 0;
}


void Chapter13_3::OutFriend(tag_Friend f)
{
	printf("name : %s, age : %d, height : %.2f \n", f.name, f.age, f.height);
}

void Chapter13_3::OutFriend(tag_Friend* f)
{
	printf("name : %s, age : %d, height : %.2f \n", f->name, f->age, f->height);
}

Chapter13_3::tag_Friend Chapter13_3::GetFriend()
{
	tag_Friend f;

	strcpy_s(f.name, sizeof(f.name), "Name56");
	f.age = 22;
	f.height = 190.313;

	return f;
}

Chapter13_3::tag_Friend* Chapter13_3::GetFriend2()
{
	tag_Friend f;	// instead malloc or new.

	strcpy_s(f.name, sizeof(f.name), "Name5678");
	f.age = 22;
	f.height = 190.313;

	return &f;	// warning and error (destroy stack)
}
