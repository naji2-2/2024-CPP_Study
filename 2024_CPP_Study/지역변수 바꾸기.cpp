#include <iostream>

using namespace std;

void Swap(int a, int b);

void main(void)
{
	int a = 10, b = 20;
	printf("�ٲٱ� �� a:%d b:%d \n", a, b);
	Swap(a, b);
	printf("�ٲٱ� �� a:%d b:%d \n", a, b);
}

void Swap(int a, int b)
{
	// a�� b�� ���� �����̱� ������
	// Swap �� ������ ���� �ٲ�
	int temp;
	temp = a;
	a = b;
	b = temp;
	printf("Swap �� a:%d b:%d \n", a, b);
}