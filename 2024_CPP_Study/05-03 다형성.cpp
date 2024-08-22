#include <iostream>
#include <string>

using namespace std;

class Animal {
public:
	Animal(string name, unsigned int age, int leg_num) 
		: name_(name), age_(age), leg_num_(leg_num)
	{
		cout << "이름 : " << name_ << endl;
		cout << "나이 : " << age_ << endl;
		cout << "다리갯수 : " << leg_num_ << endl;
	}
	void walk(void)
	{
		cout << "걷다" << endl;
	}
	void bark(void)
	{
		cout << "짖다" << endl;
	}
	void eat(void)
	{
		cout << "먹다" << endl;
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
		cout << "충성도 " << loyalty << endl;
	}

	// C++은 default가 정적 바인딩이기 때문에 가상함수로 오버라이딩해야한다.
	void walk(void)
	{
		cout << "촵촵촵촵" << endl;
	}
	void bark(void)
	{
		cout << "woof woof" << endl;
	}
	void eat(void)
	{
		cout << "왕~" << endl;
	}

private:
	int loyalty_;
};

void main(void) {
	Animal* animal = new Animal("농담곰", 4, 2);
	animal -> bark();
	animal -> eat();
	animal -> walk();
	delete animal;

	animal = new Dog("마루", 5, 2, 100);
	animal -> bark();
	animal -> eat();
	animal -> walk();
	delete animal;
}