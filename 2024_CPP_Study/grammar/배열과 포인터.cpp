#include <stdio.h>

using namespace std;

int main(void)
{
	int arr[4] = { 1, 2, 3, 4 };
	char str[4] = "abc";

	// 주소값 4 바이트 만큼의 차이
	printf("%p %p \n", arr[0], arr[1]);
	// 주소값 1 바이트 만큼의 차이
	printf("%p %p \n", *(arr+0), *(arr+1));

	int i = 1;
	char c = 'b';
	double d = 3.0;

	int* pi = &i;
	char* pc = &c;
	double* pd = &d;

	// 각각 4, 1, 8 차이
	printf("%d %d %d \n", pi, pc, pd);
	printf("%d %d %d \n", pi + 1, pc + 1, pd + 1);

	pi = arr;
	printf("%d %d \n", pi + 1, arr + 1);
	printf("%d %d \n", *(pi + 1), *(arr + 1));
	printf("%d %d \n", pi[1], arr[1]);

	return 0;

}