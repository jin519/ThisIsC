// 예제 10-6 배열의 값을 출력하는 함수

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