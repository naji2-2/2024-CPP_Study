#include <iostream>

using namespace std;

void Swap(int a, int b);

void main(void)
{
	int a = 10, b = 20;
	printf("바꾸기 전 a:%d b:%d \n", a, b);
	Swap(a, b);
	printf("바꾸기 후 a:%d b:%d \n", a, b);
}

void Swap(int a, int b)
{
	// a와 b는 지역 변수이기 때문에
	// Swap 안 에서만 값이 바뀜
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("Swap 안 a:%d b:%d \n", a, b);
}