#include <stdio.h>

void inputData(int* pa, int* pb)
{
	printf("두 정수 입력: ");
	scanf_s("%d%d", pa, pb);
}

double average(int a, int b)
{
	int sum = (a + b);
	return ((double)sum / 2.0);
}