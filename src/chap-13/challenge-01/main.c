// 408p ���� ���� ���� 1��

#include <stdio.h>

int a, b;

void inputData(int* pa, int* pb) 
{
	fputs("�� ���� �Է�: ", stdout);

	scanf_s("%d", pa);
	scanf_s("%d", pb);
}

void swapData() 
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void printData(int a, int b) 
{
	printf("�� ���� ���: %d, %d\n", a, b);
}

int main() 
{
	inputData(&a, &b);
	swapData();
	printData(a, b);

	return 0;
}