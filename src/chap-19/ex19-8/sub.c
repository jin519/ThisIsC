#include <stdio.h>

void inputData(int* pa, int* pb)
{
	printf("�� ���� �Է�: ");
	scanf_s("%d%d", pa, pb);
}

double average(int a, int b)
{
	int sum = (a + b);
	return ((double)sum / 2.0);
}