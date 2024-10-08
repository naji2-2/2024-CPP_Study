#include <iostream>
#include <string>

using namespace std;

class FoodKingdom {
public:
	FoodKingdom(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory)
	{}

	virtual void show() {
		cout << "이름 : " << name_ << endl;
		cout << "국민 수 : " << civil_ << endl;
		cout << "군력 : " << force_ << endl;
		cout << "땅 면적 : " << territory_ << endl;
	}

	virtual void attack(FoodKingdom* target) = 0;

	int civil_; // 국민 수
	int force_; // 군력
	string name_; // 이름
	int territory_; // 땅(면적)
};

class Kimchi : public FoodKingdom{
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper) 
		: FoodKingdom(civil, force, name, territory), garlic_(garlic), pepper_(pepper)
	{
		ca_ = 0;
	}
	void show() {
		FoodKingdom::show();
		cout << "마늘 : " << garlic_ << endl;
		cout << "고추 : " << pepper_ << endl;
	}

	// 3번 공격할때마다 크리티컬 데미지를 주기
	void attack(FoodKingdom* target) override
	{
		ca_++;
		if (ca_ % 3 == 0)
			target->force_ -= this->force_ * 20;
		else
			target->force_ -= this->force_ * 2;
	}
	int ca_ = 0;
	int garlic_; // 마늘
	int pepper_; // 고추
};

class Jelly : public FoodKingdom {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: FoodKingdom(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar)
	{}
	void show() {
		FoodKingdom::show();
		cout << "젤라틴 : " << gelatin_ << endl;
		cout << "설탕 : " << sugar_ << endl;
	}
	void attack(FoodKingdom* target) override
	{
		target->force_ += this->force_;
	}

	int gelatin_; // 젤라틴
	int sugar_; // 설탕의 힘
};

class Cheese : public FoodKingdom {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: FoodKingdom(civil, force, name, territory), milk_(milk), rennet_(rennet)
	{}
	void show() {
		FoodKingdom::show();
		cout << "우유 : " << milk_ << endl;
		cout << "응고제 : " << rennet_ << endl;
	}
	void attack(FoodKingdom* target) override
	{
		target->force_ -= this->force_ / 2;
	}

	int milk_; // 우유
	int rennet_; // 응고제의 힘
};

int main(void) 
{
	FoodKingdom* player = new Kimchi(15, 95, "갓김치", 86, 100, 100);
	FoodKingdom* friends = new Cheese(100, 20, "짜계치", 100, 20, 100);

	while (true) {
		system("cls");
		cout << "★나★" << endl;
		player->show();

		cout << endl << endl;

		cout << "★상대방★" << endl;
		friends->show();

		cout << endl << endl;
		cout << "------------------------------------" << endl;

		int select;
		cout << "1. 공격" << endl;
		cout << "2. 특수1" << endl;
		cout << "3. 특수2" << endl;
		cout << "4. 방어" << endl;

		cin >> select;
		switch (select)
		{

			case 1:
				//TODO : 공격
				cout << "공격" << endl;
				break;
			case 2:
				//TODO : 특수 1
				cout << "특수 1" << endl;
				break;
			case 3:
				//TODO : 특수 2
				cout << "특수 2" << endl;
				break;
			case 4:
				//TODO : 방어
				cout << "방어" << endl;
				break;
			default:
				cout << "디폴트" << endl;
		}
		system("pause");
	}
	
	delete friends;
	delete player;
	return 0;
}