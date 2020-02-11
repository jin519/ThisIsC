// 예제 10-7 크기가 다른 배열을 출력하는 함수

#include <stdio.h>

void printArr(int* pArr, int size);

int main()
{
	int arr1[] = { 10, 20, 30, 40, 50 };
	int arr2[] = { 10, 20, 30, 40, 50, 60, 70 };

	printArr(arr1, 5);
	printf("\n");
	printArr(arr2, 7);

	return 0;
}

void printArr(int* pArr, int size)
{
	for (int i = 0; i < size; ++i)
		printf("%d ", pArr[i]);
}