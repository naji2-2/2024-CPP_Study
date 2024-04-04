#include <iostream>

using namespace std;

void call_by_reference(int& val)
{
	// 새로운 지역변수 val을 만들고 값을 넣는다.
	val = 10;
}

int main(void)
{
	int num = 4;
	// num의 값은 바뀐다.
	call_by_reference(num);
	cout << num;
	return 0;
}