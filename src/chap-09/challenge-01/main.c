#include <stdio.h>

func(int* mod, int* rem) 
{
	int dividend;
	const int DIVIDER = 4;

	printf("양수 입력: ");
	scanf_s("%d", &dividend);

	*mod = (dividend / DIVIDER);
	*rem = (dividend % DIVIDER);
}

int main() 
{
	int mod, rem;

	func(&mod, &rem);

	printf("몫: %d, 나머지: %d\n", mod, rem);

	return 0;
}