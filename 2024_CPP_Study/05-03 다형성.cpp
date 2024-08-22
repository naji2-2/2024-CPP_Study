#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num) 
		: name_(name), age_(age), leg_num_(leg_num)
	{
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << age_ << endl;
		cout << "�ٸ����� : " << leg_num_ << endl;
	}
	void walk(void)
	{
		cout << "�ȴ�" << endl;
	}
	void bark(void)
	{
		cout << "¢��" << endl;
	}
	void eat(void)
	{
		cout << "�Դ�" << endl;
	}

private:
	string name_;
	unsigned int age_;
	int leg_num_;

};

class Dog : public Animal {
public:
	Dog(string name, unsigned int age, int leg_num, int loyalty)
		: Animal(name, age, leg_num), loyalty_(loyalty)
	{
		cout << "�漺�� " << loyalty << endl;
	}

	// C++�� default�� ���� ���ε��̱� ������ �����Լ��� �������̵��ؾ��Ѵ�.
	void walk(void)
	{
		cout << "�r�r�r�r" << endl;
	}
	void bark(void)
	{
		cout << "woof woof" << endl;
	}
	void eat(void)
	{
		cout << "��~" << endl;
	}

private:
	int loyalty_;
};

void main(void) {
	Animal* animal = new Animal("����", 4, 2);
	animal -> bark();
	animal -> eat();
	animal -> walk();
	delete animal;

	animal = new Dog("����", 5, 2, 100);
	animal -> bark();
	animal -> eat();
	animal -> walk();
	delete animal;
}