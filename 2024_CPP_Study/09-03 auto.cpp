#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main(void)
{

	vector<string> v = { "���", "�ڵ�", "ü��", "����" };

	for (auto str : v)
	{
		cout << str << endl;
	}

}