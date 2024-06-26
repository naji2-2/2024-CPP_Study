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

	// 복사 생성자
	Student(const Student& rhs) : hakbun_(rhs.hakbun_)
	{
		cout << "복사 생성자 호출 완료" << endl;

		int length = strlen(rhs.name_);

		// '/0'이 들어가기 위해 공간 하나 더 추가
		name_ = new char[length + 1];
		strcpy(name_, rhs.name_);
	}
	
	// 소멸자 : 객체가 소멸될 때(메모리에서 지워질 때) 호출되는 함수
	~Student(void)
	{
		// TODO : 얕은 복사로 인하여 이미 제거된 공간을 또 제거하려고해서 에러발생
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
	// 일반적인 생성자
	Student stu = Student(2213, "JSB");
	// 복사 생성자
	Student stu2 = stu;

	// TODO : 얕은 복사로 인하며 같은 주소(stu.name_, stu2.name_)에서 두 번 delete 시도
	return 0;
}