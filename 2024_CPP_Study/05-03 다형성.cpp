#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
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
	int leg_num;

};

void main(void) {
	Animal* animal = new Animal();
	animal -> bark();
	animal -> eat();
	animal -> walk();
	
	delete animal;
}