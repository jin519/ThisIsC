#include <stdio.h>

void fruit(int n);

int main() 
{
	fruit(1);

	return 0;
}

void fruit(int n) 
{
	printf("apple\n");

	if (n == 3)
		return;

	fruit(n + 1);

	printf("jam\n");
}