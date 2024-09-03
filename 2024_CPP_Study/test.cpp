#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(string name, unsigned int Price)
		: name_(name), Price_(Price)
	{
		cout << "�̸� : " << name_ << endl;
		cout << "���� : " << Price_ << endl;
	}

	virtual~Food() {
		cout << "Food �Ҹ���" << endl;
	}

	virtual void cook(void)
	{
		cout << "��������" << endl;
	}
	virtual void taste(void)
	{
		cout << "���ִ�~" << endl;
	}

private:
	string name_;
	unsigned int Price_;

};

class Ramyun : public Food {
public:
	Ramyun(string name, unsigned int Price, int spicy)
		: Food(name, Price), spicy_(spicy)
	{
		cout << "�ſ�� :  " << spicy_ << endl;
	}

	virtual~Ramyun() {
		cout << "Ramyun �Ҹ���" << endl;
	}

	void cook() { cout << "���ۺ���" << endl; }
	void taste() { cout << "�ʴ�~" << endl; }

private:
	unsigned int spicy_;
};

void main(void) {

	Food* food = new Ramyun("�Ŷ��", 1200, 50);

	delete food;

}