// 470p 예제 15-7 함수 포인터를 사용한 함수 호출

#include <stdio.h>

int sum(int a, int b) 
{
	return (a + b);
}

int main() 
{
	int (*fp)(int, int) = sum;
	int res;

	res = fp(10, 20);

	printf("result: %d\n", res);

	return 0;
}