// 456p 예제 15-4 주소로 쓰이는 배열과 배열의 주소 비교

#include <stdio.h>

int main()
{
	int arr[5];

	printf("arr의 값: %p\n", arr);
	printf("arr의 주소: %p\n", &arr);

	printf("arr + 1: %p\n", (arr + 1));
	printf("&arr + 1: %p\n", (&arr + 1));

	return 0;
}