#include <stdio.h>
#include <stdbool.h>

bool hasElement(int arr[], const size_t size, const int element) 
{
	for (size_t i = 0; i < size; ++i)
		if (arr[i] == element)
			return true;

	return false;
}

int main() 
{
	int arr[6] = { 0 };
	size_t i = 0;
	const size_t ARR_SIZE = (sizeof(arr) / sizeof(arr[0]));

	while (i < ARR_SIZE) 
	{
		int element;

		printf("�ζǹ�ȣ �Է�: ");
		scanf_s("%d", &element);

		if (hasElement(arr, i + 1, element)) 
			puts("���� ��ȣ�� �ֽ��ϴ�!");
		else
			arr[i++] = element;
	}

	printf("�Էµ� �ζ� ��ȣ: ");

	for (i = 0; i < ARR_SIZE; ++i)
		printf("%d ", arr[i]);

	return 0;
}