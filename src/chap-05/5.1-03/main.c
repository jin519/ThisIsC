#include <stdio.h>

int main(void) 
{
	double height = 179.5, weight = 75.0;

	if (height >= 187.5 && weight < 80.0)
		printf("ok\n");
	else
		printf("cancel\n");

	return 0;
}