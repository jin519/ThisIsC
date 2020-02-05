#include <stdio.h>

int main() 
{
	int arr[10] = { 1, 2 };
	const int ARR_SIZE = (int)(sizeof(arr) / sizeof(arr[0]));

	for (int i = 0; i < ARR_SIZE; ++i) 
	{
		if (i >= 2)
			arr[i] = (arr[i - 1] + arr[i - 2]);

		printf("%d ", arr[i]);
	}

	return 0;
}