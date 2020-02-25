// 399p 예제 13-6 10을 더하기 위해 값을 인수로 주는 경우

#include <stdio.h>

void addTen(int a) 
{
	a = a + 10;
}

int main()
{
	int a = 10;

	addTen(a);

	printf("a: %d\n", a);

	return 0;
}