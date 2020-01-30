#include <stdio.h>

int main(void) 
{
	int a = 10;

	if (a >= 0) // a가 0보다 크거나 같으면 a에 1 대입
		a = 1;
	else // a가 0보다 작으면 a에 -1 대입
		a = -1;

	printf("a: %d\n", a);

	return 0;
}