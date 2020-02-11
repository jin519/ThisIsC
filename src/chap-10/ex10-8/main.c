// ���� 10-8 �迭�� ���� �Է��ϴ� �Լ�

#include <stdio.h>

void inputArr(double* pArr, int size);
double findMax(double* pArr, int size);

int main() 
{
	double arr[5];
	double max;
	int size = (int)(sizeof(arr) / sizeof(arr[0]));

	inputArr(arr, size);

	max = findMax(arr, size);

	printf("�迭�� �ִ밪: %.1lf\n", max);

	return 0;
}

void inputArr(double* pArr, int size) 
{
	printf("%d���� �Ǽ��� �Է�: ", size);

	for (int i = 0; i < size; ++i)
		scanf_s("%lf", (pArr + i));
}

double findMax(double* pArr, int size) 
{
	double max = pArr[0];

	for (int i = 1; i < size; ++i)
		if (pArr[i] > max)
			max = pArr[i];

	return max;
}