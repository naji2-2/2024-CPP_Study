#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person(string name, int hakbun)
		: name_(name), hakbun_(hakbun)
	{
		cout << "Person ������ ȣ��" << endl;
	}

	~Person()
	{
		cout << "Person �Ҹ��� ȣ��" << endl;
	}

	void PrintShow() {
		cout << name_ << hakbun_ << " " << endl;
	}

private:
	string name_;
	int hakbun_;
};

class Student : public Person {
public :
	Student(string name, int hakbun, string university)
		: Person(name, hakbun), university_(university) {
		cout << "Student ������ ȣ��" << endl;
	}

	~Student() {
		cout << "Student �Ҹ��� ȣ��" << endl;
	}

	void PrintShow() {
		cout << university_ << endl;

	}
private:
	string university_;
};

int main() {
	Student* me = new Student("������", 2202, "�̸�");
	me->PrintShow();
	delete me;
	return 0;
}