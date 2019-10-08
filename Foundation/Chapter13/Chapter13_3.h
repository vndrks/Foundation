#pragma once



class Chapter13_3
{
	struct tag_Friend
	{
		char name[10];
		int age;
		double height;
	};

	struct tag_Friend2
	{
		char* pName;
		int age;
		double height;
	};

public:
	int InitStruct();			// Example : InitStruct
	int StructArg();			// Example : StructArg
	int StructRet();			// Example : StructRet
	int StructRet2();			// Example : StructRet2
	int ShallowCopy();			// Example : ShallowCopy
	int DeepCopy();				// Test : DeepCopy


private:
	void		OutFriend(tag_Friend f);
	void		OutFriend(tag_Friend* f);
	tag_Friend	GetFriend();
	tag_Friend* GetFriend2();
};

