#include <stdio.h>

func(int* mod, int* rem) 
{
	int dividend;
	const int DIVIDER = 4;

	printf("��� �Է�: ");
	scanf_s("%d", &dividend);

	*mod = (dividend / DIVIDER);
	*rem = (dividend % DIVIDER);
}

int main() 
{
	int mod, rem;

	func(&mod, &rem);

	printf("��: %d, ������: %d\n", mod, rem);

	return 0;
}