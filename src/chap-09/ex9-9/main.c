#include <stdio.h>

void swap(int x, int y);

int main()
{
	int a = 10, b = 20;

	swap(a, b);

	printf("a: %d, b: %d\n", a, b);
}

void swap(int x, int y)
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;
}