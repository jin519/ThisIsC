// 456p ���� 15-4 �ּҷ� ���̴� �迭�� �迭�� �ּ� ��

#include <stdio.h>

int main()
{
	int arr[5];

	printf("arr�� ��: %p\n", arr);
	printf("arr�� �ּ�: %p\n", &arr);

	printf("arr + 1: %p\n", (arr + 1));
	printf("&arr + 1: %p\n", (&arr + 1));

	return 0;
}