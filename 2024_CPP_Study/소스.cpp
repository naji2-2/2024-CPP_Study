#include <stdio.h>

using namespace std;

int main(void)
{
	int i = 1;
	char c = 2;
	double d = 3.0f;

	//int* pi = &i;
	//char* pc = &c;
	//double* pd = &d;

	printf("%d %d %f \n", i, c, d);
	printf("%d %d %f \n", *(&i+1), *(&c+1), *(&d+1));

}