// ���� 10-6 �迭�� ���� ����ϴ� �Լ�

#include <stdio.h>

void printArr(int* pArr);

int main() 
{
	int arr[] = { 10, 20, 30, 40, 50 };

	printArr(arr);

	return 0;
}

void printArr(int* pArr) 
{
	for (int i = 0; i < 5; ++i)
		printf("%d ", pArr[i]);
}