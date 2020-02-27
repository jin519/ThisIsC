// 477p 연습문제 2번

#include <stdio.h>

int main() 
{
	int arr[] = { 10, 20, 30, 40, 50 };
	void* vp = arr;

	printf("세번째 배열 요소의 값: %d\n", ((int*)vp)[2]);
}