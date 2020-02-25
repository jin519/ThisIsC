// 390p 예제 13-4 auto 지역 변수와 static 지역 변수의 비교

#include <stdio.h>

void autoFunc() 
{
	auto int a = 0;

	a++;

	printf("%d\n", a);
}

void staticFunc() 
{
	static int a;

	a++;

	printf("%d\n", a);
}

int main()
{
	int i;

	puts("auto 지역 변수를 사용한 함수...");

	for (int i = 0; i < 3; ++i)
		autoFunc();

	puts("static 지역 변수를 사용한 함수...");

	for (int i = 0; i < 3; ++i)
		staticFunc();

	return 0;
}