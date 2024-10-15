#include <iostream>
#include <map>

using namespace std;

void main(void)
{
	map<string, long long> money;

	// �� �߰�
	money["����"] = 60000;
	money["����"] = 300;
	money["�μ�"] = 1000;

	int a;
	int* b = &a;
	auto c = b;

	// �ݺ���
	// map<string, long long>::iterator iter;
	for (auto iter = money.begin(); iter != money.end(); iter++)
		cout << iter->first << "�� " << iter->second << endl;

	// �� ����
	money["�μ�"] = 100000;
	cout << money["�μ�"] << endl;

	// ũ��
	cout << money.size() << endl;

}