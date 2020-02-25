// 400p 예제 13-7 포인터를 써서 변수의 값에 10을 더하는 경우

#include <stdio.h>

void addTen(int* p) 
{
	*p += 10;
}

int main()
{
	int a = 10;

	addTen(&a);

	printf("a: %d\n", a);

	return 0;
}