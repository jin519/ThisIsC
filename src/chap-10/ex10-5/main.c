// ���� 10-5 �������� ������ ���� ����

#include <stdio.h>

int main() 
{
	int arr[] = { 10, 20, 30, 40, 50 };
	int* pa = arr;
	int* pb = pa + 3;

	printf("pa: %p\n", pa);
	printf("pb: %p\n", pb);

	pa++;

	printf("pb - pa: %llu\n", pb - pa);

	printf("�տ� �ִ� �迭 ����� �� ���: ");

	if (pa < pb)
		printf("%d\n", *pa);
	else
		printf("%d\n", *pb);

	return 0;
}