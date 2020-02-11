// 예제 10-4 포인터를 이용한 배열의 입출력

#include <stdio.h>

int main()
{
	int arr[3] = { 10, 20, 30 };
	int* pa = arr;

	printf("배열의 값: ");

	for (int i = 0; i < 3; ++i) 
	{
		printf("%d ", *pa);
		pa++;
	}

	return 0;
}