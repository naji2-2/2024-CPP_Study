#include <stdio.h>

int main(void)
{
	char str[30] = "develop Jisu";
	char str2[30];

	// str에 있는 내용을 str2에 복사

	// 나의 풀이
	//for (int i = 0; i < 30; i++) {
	//	str2[i] = str[i];
	//}

	//for (int i = 0; i < 30; i++) {
	//	printf("%c", str2);
	//}

	// 선생님 풀이
	// \0을 만날 때까지
	int i = 0;
	for (; str[i] != '\0'; i++) {
		str2[i] = str[i];
	}
	str2[i] = str[i];		// 널문자('\0')	복사

	printf("%s", str2);

}