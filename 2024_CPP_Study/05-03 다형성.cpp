#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num) 
		: name_(name), age_(age), leg_num_(leg_num)
	{
		cout << "Animal ������ ȣ��" << endl;
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

void main(void) {
	Animal* animal = new Animal("����", 4, 2);
	animal -> bark();
	animal -> eat();
	animal -> walk();
	
	delete animal;
}