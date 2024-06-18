#include <iostream>
#include <string>

using namespace std;

class Animal {
protected: // private���� protected�� ����
    string name;
    int age;

public:
    Animal(string _name, int _age) : name(_name), age(_age) {}

    virtual void sound() = 0; // ���� ���� �Լ��� ���� -> java������ �߻�޼ҵ� ���� ����
    virtual ~Animal() {} // ���� �Ҹ��� �߰�
};

class Dog : public Animal {
public:
    Dog(string _name, int _age) : Animal(_name, _age) {}

    void bark() {
        cout << "�� ��" << endl;
    }

    void sound() override {
        bark();
    }
};

int main() {
    Dog myDog("Buddy", 3);

    myDog.sound();

    return 0;
}
