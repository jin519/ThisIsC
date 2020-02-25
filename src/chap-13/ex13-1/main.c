// 383p 예제 13-1 두 함수에서 같은 이름의 지역 변수를 사용한 경우

#include <stdio.h>

void assign() 
{
	auto int a;

	a = 10;

	printf("assign 함수 a: %d\n", a);
}

int main() 
{
	auto int a = 0;

	assign();

	printf("main 함수 a: %d\n", a);

	return 0;
}