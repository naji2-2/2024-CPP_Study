﻿#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[30] = "develop Jisu";
	char str2[30];

	// str에 있는 내용을 str2에 복사
	strcpy(str2, str);
	printf("%s", str2);

}