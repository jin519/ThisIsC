#include <stdio.h>

int main(void) 
{
	int a = 10, b = 3;

	if (a > b)
		printf("���: %d\n", (a / b));
	else
		printf("���: %d\n", (a % b));

	return 0;
}