#include <stdio.h>

int main(void) 
{
	unsigned int a;

	a = 4294967295;
	printf("%d\n", a);

	a = -1;
	printf("%u\n", a);

	return 0;
}	