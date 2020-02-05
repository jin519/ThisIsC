#include <stdio.h>
#include <stdbool.h>

bool hasElement(int arr[], const size_t maxIdx, const int element) 
{
	for (size_t i = 0; i < maxIdx; ++i)
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

		printf("로또번호 입력: ");
		scanf_s("%d", &element);

		if (hasElement(arr, i + 1, element)) 
			puts("같은 번호가 있습니다!");
		else
		{
			arr[i] = element;
			++i;
		}
	}

	printf("입력된 로또 번호: ");

	for (i = 0; i < ARR_SIZE; ++i)
		printf("%d ", arr[i]);

	return 0;
}