#include <iostream>
#include <map>

using namespace std;

void main(void)
{
	map<string, long long> money;

	// ¸Ê Ãß°¡
	money["Áö¼ö"] = 60000;
	money["¼öºó"] = 300;
	money["¹Î¼±"] = 1000;

	int a;
	int* b = &a;
	auto c = b;

	// ¹Ýº¹ÀÚ
	// map<string, long long>::iterator iter;
	for (auto iter = money.begin(); iter != money.end(); iter++)
		cout << iter->first << "´Â " << iter->second << endl;

	// °ª ¼öÁ¤
	money["¹Î¼±"] = 100000;
	cout << money["¹Î¼±"] << endl;

	// Å©±â
	cout << money.size() << endl;

}