// 324p 예제 11-4 getchar와 putchar 함수 사용

#include <stdio.h>

int main() 
{
	int ch;

	ch = getchar();

	printf("입력한 문자: ");
	putchar(ch);
	putchar('\n');

	return 0;
}