// 645p ���� 19-8 �� ������ ����� ���ϴ� ���α׷�

#include <stdio.h>

void inputData(int* pa, int* pb);
double average(int a, int b);

int main()
{
	int a, b;
	double avg;

	inputData(&a, &b);
	avg = average(a, b);

	printf("%d�� %d�� ���: %.1lf\n", a, b, avg);

	return 0;
}