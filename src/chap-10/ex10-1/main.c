// 예제 10-1 배열명이 주소인지 확인

#include <stdio.h>

int main()
{
	int arr[] = { 10, 20, 30, 40, 50 };

	printf("배열명 자체의 값: %p\n", arr);
	printf("첫 번째 배열 요소의 주소: %p\n", &arr[0]);
	printf("배열명이 가리키는 요소의 값: %d\n", *arr);
	printf("첫 번째 배열 요소의 값: %d\n", arr[0]);

	return 0;
}