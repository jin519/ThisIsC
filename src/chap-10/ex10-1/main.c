// ���� 10-1 �迭���� �ּ����� Ȯ��

#include <stdio.h>

int main()
{
	int arr[] = { 10, 20, 30, 40, 50 };

	printf("�迭�� ��ü�� ��: %p\n", arr);
	printf("ù ��° �迭 ����� �ּ�: %p\n", &arr[0]);
	printf("�迭���� ����Ű�� ����� ��: %d\n", *arr);
	printf("ù ��° �迭 ����� ��: %d\n", arr[0]);

	return 0;
}