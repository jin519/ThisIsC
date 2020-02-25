// 387p 예제 13-3 전역 변수의 사용

#include <stdio.h>

int a;

void assign10() 
{
	a = 10;
}

void assign20() 
{
	int a;

	a = 10;
}

int main()
{
	printf("함수 호출 전 a값: %d\n", a);

	assign10();
	assign20();

	printf("함수 호출 후 a값: %d\n", a);

	return 0;
}