// 472p 예제 15-8 함수 포인터로 원하는 함수를 호출하는 프로그램

#include <stdio.h>

void func(int (*fp)(int, int)) 
{
	int a, b;
	int res;

	fputs("두 정수값을 입력하세요: ", stdout);
	scanf_s("%d%d", &a, &b);

	res = fp(a, b);

	printf("결과값은: %d\n", res);
}

int sum(int a, int b) 
{
	return (a + b);
}

int mul(int a, int b) 
{
	return (a * b);
}

int max(int a, int b) 
{
	return ((a > b) ? a : b);
}

int main()
{
	int sel;

	puts("1. 두 정수의 합");
	puts("2. 두 정수의 곱");
	puts("3. 두 정수 중에서 큰 값 계산");
	
	fputs("원하는 작업을 선택하세요: ", stdout);
	scanf_s("%d", &sel);

	switch (sel)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
	}

	return 0;
}