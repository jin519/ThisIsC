#include <stdio.h>

int my_power(const int base, const int index) 
{
	int retVal = 1;

	for (int i = 0; i < index; ++i)
		retVal *= base;

	return retVal;
}

int main() 
{
	printf("%d\n", my_power(2, 10));

	return 0;
}