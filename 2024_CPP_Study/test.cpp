#include <iostream>
#include <string>

using namespace std;

class Food {
public:
	Food(string name, unsigned int Price)
		: name_(name), Price_(Price)
	{
		cout << "이름 : " << name_ << endl;
		cout << "가격 : " << Price_ << endl;
	}

	virtual~Food() {
		cout << "Food 소멸자" << endl;
	}

	virtual void cook(void)
	{
		cout << "지글지글" << endl;
	}
	virtual void taste(void)
	{
		cout << "맛있다~" << endl;
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
		cout << "매운맛 :  " << spicy_ << endl;
	}

	virtual~Ramyun() {
		cout << "Ramyun 소멸자" << endl;
	}

	void cook() { cout << "보글보글" << endl; }
	void taste() { cout << "맵다~" << endl; }

private:
	unsigned int spicy_;
};

void main(void) {

	Food* food = new Ramyun("신라면", 1200, 50);

	delete food;

}