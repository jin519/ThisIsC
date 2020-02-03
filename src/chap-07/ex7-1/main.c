#include <stdio.h>

int add(int x, int y);

int main() 
{
	int a = 10, b = 20;
	int res;

	res = add(a, b);

	printf("result: %d\n", res);

	return 0;
}

int add(int x, int y) 
{
	int temp;

	temp = x + y;

	return temp;
}