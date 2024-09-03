#include <iostream>
#include <string>

using namespace std;

class FoodKingdom {
public:
	FoodKingdom(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory)
	{}

	virtual void show() {
		cout << "�̸� : " << name_ << endl;
		cout << "���� �� : " << civil_ << endl;
		cout << "���� : " << force_ << endl;
		cout << "�� ���� : " << territory_ << endl;
	}

	virtual void attack(FoodKingdom* target) = 0;

	int civil_; // ���� ��
	int force_; // ����
	string name_; // �̸�
	int territory_; // ��(����)
};

class Kimchi : public FoodKingdom{
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper) 
		: FoodKingdom(civil, force, name, territory), garlic_(garlic), pepper_(pepper)
	{}
	void show() {
		FoodKingdom::show();
		cout << "���� : " << garlic_ << endl;
		cout << "���� : " << pepper_ << endl;
	}
	void attack(FoodKingdom* target) override
	{
		target->force_ -= this->force_ * 2;
	}

	int garlic_; // ����
	int pepper_; // ����
};

class Jelly : public FoodKingdom {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: FoodKingdom(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar)
	{}
	void show() {
		FoodKingdom::show();
		cout << "����ƾ : " << gelatin_ << endl;
		cout << "���� : " << sugar_ << endl;
	}
	void attack(FoodKingdom* target) override
	{
		target->force_ += this->force_;
	}

	int gelatin_; // ����ƾ
	int sugar_; // ������ ��
};

class Cheese : public FoodKingdom {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: FoodKingdom(civil, force, name, territory), milk_(milk), rennet_(rennet)
	{}
	void show() {
		FoodKingdom::show();
		cout << "���� : " << milk_ << endl;
		cout << "������ : " << rennet_ << endl;
	}
	void attack(FoodKingdom* target) override
	{
		target->force_ -= this->force_ / 2;
	}

	int milk_; // ����
	int rennet_; // �������� ��
};

int main(void) 
{
	FoodKingdom* player = new Kimchi(15, 95, "����ġ", 86, 100, 100);
	FoodKingdom* friends = new Cheese(100, 20, "¥��ġ", 100, 20, 100);

	while (true) {
		system("cls");
		cout << "�ڳ���" << endl;
		player->show();

		cout << endl << endl;

		cout << "�ڻ����" << endl;
		friends->show();

		cout << endl << endl;
		cout << "------------------------------------" << endl;

		int select;
		cout << "1. ����" << endl;
		cout << "2. Ư��1" << endl;
		cout << "3. Ư��2" << endl;
		cout << "4. ���" << endl;

		cin >> select;
		switch (select)
		{

			case 1:
				//TODO : ����
				cout << "����" << endl;
				break;
			case 2:
				//TODO : Ư�� 1
				cout << "Ư�� 1" << endl;
				break;
			case 3:
				//TODO : Ư�� 2
				cout << "Ư�� 2" << endl;
				break;
			case 4:
				//TODO : ���
				cout << "���" << endl;
				break;
			default:
				cout << "����Ʈ" << endl;
		}
		system("pause");
	}
	
	delete friends;
	delete player;
	return 0;
}