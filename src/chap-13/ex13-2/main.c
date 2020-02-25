// 385p 예제 13-2 블록 안에 지역 변수를 사용하여 두 변수를 교환하는 프로그램

#include <stdio.h>

int main()
{
	int a = 10, b = 20;

	printf("교환 전 a와 b의 값: %d, %d\n", a, b);

	{
		int tmp;

		tmp = a;
		a = b;
		b = tmp;
	}

	printf("교환 후 a와 b의 값: %d, %d\n", a, b);

	return 0;
}