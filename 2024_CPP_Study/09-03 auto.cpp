#include <iostream>
#include <vector>
#include <string>

using namespace std;

void main(void)
{

	vector<string> v = { "사과", "자두", "체리", "포도" };

	for (auto str : v)
	{
		cout << str << endl;
	}

}