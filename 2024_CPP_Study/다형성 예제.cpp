#include <iostream>
#include <string>

using namespace std;

class FoodKingdom {
public:
	FoodKingdom(int civil, int force, string name, int territory)
		: civil_(civil), force_(force), name_(name), territory_(territory)
	{

	}
private:
	int civil_; // ���� ��
	int force_; // ����
	string name_; // �̸�
	int territory_; // ��(����)
};

class Kimchi : public FoodKingdom{
public:
	Kimchi(int civil, int force, string name, int territory, int garlic, int pepper) 
		: FoodKingdom(civil, force, name, territory), garlic_(garlic), pepper_(pepper)
	{

	}
private:
	int garlic_; // ����
	int pepper_; // ����
};

class Jelly : public FoodKingdom {
public:
	Jelly(int civil, int force, string name, int territory, int gelatin, int sugar)
		: FoodKingdom(civil, force, name, territory), gelatin_(gelatin), sugar_(sugar)
	{

	}
private:
	int gelatin_; // ����ƾ
	int sugar_; // ������ ��
};

class Cheese : public FoodKingdom {
public:
	Cheese(int civil, int force, string name, int territory, int milk, int rennet)
		: FoodKingdom(civil, force, name, territory), milk_(milk), rennet_(rennet)
	{

	}
private:
	int milk_; // ����ƾ
	int rennet_; // �������� ��
};

