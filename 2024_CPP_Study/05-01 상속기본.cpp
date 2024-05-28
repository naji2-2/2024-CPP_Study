#include <string>
#include <iostream>

using namespace std;

class Person {
public:
	Person(string name, int age)
		: name_(name), age_(age){}

	void show_person() {
		cout << name_ << "�� ���̴� " << age_ << "�Դϴ�." << endl;
	}

private:
	string name_;
	int age_;

};

class Student : public Person {
public:
	// �θ� �����ڰ� ���� ȣ��
	Student(string name, int age, int id) : Person(name, age), id_(id)
	{

	}
	void show_person()
	{
		cout << id_ << " ";
		Person::show_person();	// �θ� Ŭ������ ��� �Լ� ȣ��
	}

private:
	int id_;
};

int main(void)
{
	Student* stu = new Student("������", 17, 2202);
	return 0;
}