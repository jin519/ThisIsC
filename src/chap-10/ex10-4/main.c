// ���� 10-4 �����͸� �̿��� �迭�� �����

#include <stdio.h>

int main()
{
	int arr[3] = { 10, 20, 30 };
	int* pa = arr;

	printf("�迭�� ��: ");

	for (int i = 0; i < 3; ++i) 
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}