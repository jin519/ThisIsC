#include <stdio.h>

void swap();

int main() 
{
	int a = 10, b = 20;

	swap();

	printf("a: %d, b: %d\n", a, b);
}

void swap() 
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}