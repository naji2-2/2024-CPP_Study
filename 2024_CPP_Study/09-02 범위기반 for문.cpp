#include <iostream>
#include <vector>

using namespace std;

void main(void)
{

	// �������� for��
	vector<int> v = { 445, 14, 27, 456, 23 };

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	// ������� for��
	for (int value : v)
	{
		cout << value << endl;
	}

}