#include <iostream>
#include <string>

using namespace std;

class Person {
public:
	Person(string name, int hakbun)
		: name_(name), hakbun_(hakbun)
	{
		cout << "Person 생성자 호출" << endl;
	}

	~Person()
	{
		cout << "Person 소멸자 호출" << endl;
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
		cout << "Student 생성자 호출" << endl;
	}

	~Student() {
		cout << "Student 소멸자 호출" << endl;
	}

	void PrintShow() {
		cout << university_ << endl;

	}
private:
	string university_;
};

int main() {
	Student* me = new Student("나지수", 2202, "미림");
	me->PrintShow();
	delete me;
	return 0;
}