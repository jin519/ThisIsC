#include <stdio.h>

int main(void) 
{
	int a = 10, b = 3;

	if (a > b)
		printf("결과: %d\n", (a / b));
	else
		printf("결과: %d\n", (a % b));

	return 0;
}