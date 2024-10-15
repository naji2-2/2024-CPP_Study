#include <iostream>
#include <vector>

using namespace std;

void main(void)
{

	// 전통적인 for문
	vector<int> v = { 445, 14, 27, 456, 23 };

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}

	// 범위기반 for문
	for (int value : v)
	{
		cout << value << endl;
	}

}