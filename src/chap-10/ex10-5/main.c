// 예제 10-5 포인터의 뺄셈과 관계 연산

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

	printf("앞에 있는 배열 요소의 값 출력: ");

	if (pa < pb)
		printf("%d\n", *pa);
	else
		printf("%d\n", *pb);

	return 0;
}