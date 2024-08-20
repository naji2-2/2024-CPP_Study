#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	void walk(void)
	{
		cout << "°È´Ù" << endl;
	}
	void bark(void)
	{
		cout << "Â¢´Ù" << endl;
	}
	void eat(void)
	{
		cout << "¸Ô´Ù" << endl;
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