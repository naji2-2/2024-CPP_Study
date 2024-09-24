#include <iostream>
#include <vector>

using namespace std;

void main(void)
{
	vector<long long> v;

	// �̸� ������ ���� Ȯ������. ������ ����
	v.reserve(100);

	// ���� �߰�
	v.push_back(4);
	v.push_back(6);
	v.push_back(4567);
	v.push_back(632);
	v.push_back(225);
	v.push_back(4616164515);

	// �� ����
	cout << v[0] << endl;
	cout << v.at(1) << endl << endl;

	// �� ����
	cout << v[5] << endl;
	v[5] = 500;
	cout << v[5] << endl << endl;

	// �ݺ���(iterator)
	vector<long long>::iterator iter;
	for (iter = v.begin(); iter != v.end(); iter++)
		cout << *iter << endl;
}