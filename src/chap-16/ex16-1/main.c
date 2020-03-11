#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));

	if (pi == NULL) 
	{
		puts("#으로 메모리가 부족합니다.");
		exit(1);
	}

	pd = (double*)malloc(sizeof(double));

	if (pd == NULL) 
	{
		puts("#으로 메모리가 부족합니다.");
		exit(1);
	}

	*pi = 10;
	*pd = 3.4;

	printf("정수형으로 사용: %d\n", *pi);
	printf("실수형으로 사용: %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;
}