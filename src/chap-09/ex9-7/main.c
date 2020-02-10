#include <stdio.h>

void swap(int* pa, int* pb);

int main() 
{
	int a = 10, b = 20;

	swap(&a, &b);

	printf("a: %d, b: %d\n", a, b);

	return 0;
}

void swap(int* pa, int* pb) 
{
	int tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}