#include <stdio.h>

using namespace std;

int main(void)
{
	int arr[4] = { 1, 2, 3, 4 };
	char str[4] = "abc";

	// 주소값 4 바이트 만큼의 차이
	printf("%p %p \n", &arr[0], &arr[1]);
	// 주소값 1 바이트 만큼의 차이
	printf("%p %p \n", &str[0], &str[1]);

	return 0;

}