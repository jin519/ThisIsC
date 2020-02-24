// 345p 예제 12-1 문자열 상수가 주소란 증거

#include <stdio.h>

int main() 
{
	printf("주소값: %p\n", "mango");
	printf("첫번째 문자: %c\n", *"mango");
	printf("두번째 문자: %c\n", *("mango" + 1));
	printf("세번째 문자: %c\n", *("mango" + 2));

	return 0;
}