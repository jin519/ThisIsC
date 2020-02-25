// 402p 예제 13-8 주소를 반환하여 두 정수의 합 계산

#include <stdio.h>

int* sum(int a, int b) 
{
	static int res;

	res = a + b;

	return &res;
}

int main()
{
	int* p;

	p = sum(10, 20);
	
	printf("두 정수의 합: %d\n", *p);

	return 0;
}