﻿#include <iostream>
#include <string.h>

using namespace std;

class Student {
public:

	Student(int hakbun, const char* name) : hakbun_(hakbun)
	{
		int length = strlen(name);

		// '/0'이 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];
		cout << "생성자 호출 완료" << endl;
		
		strcpy(name_, name);
	}
	
	// 소멸자 : 객체가 소멸될 때(메모리에서 지워질 때) 호출되는 함수
	~Student(void)
	{
		 delete []name_;
		 cout << "소멸자 호출 완료" << endl;
	}

	// 클래스의 멤버를 출력
	void show(void)
	{
		cout << hakbun_ << " " << name_ << endl;
	}

private: 
	int hakbun_;
	char* name_;
};



int main(void)
{
	Student* stu = new Student(2213, "조수빈");
	cout << "나는 아직도 배가 고프다 - 거스 히딩크" << endl;

	delete stu;
	cout << "it ain't over, till it's over - 요기배라" << endl;

	return 0;
}