﻿#include <stdio.h>

// 배열의 모든 요소를 0으로 바꿔주는 함수
void erase(int* ptr, int length)
{
	for (int i = 0; i < length; i++) {
		ptr[i] = 0;
	}
	
}

int main(void)
{
	int arr[4] = { 10, 20, 30, 40 };
	int length = sizeof(arr) / sizeof(*arr);

	for (int i = 0; i < 4; i++) {
		printf("%d ", arr[i]);
	}

		erase(arr, length);

	for (int i = 0; i < 4; i++) {
		printf("%d ",arr[i]);
	}

	return 0;

}