// 326p 연습문제 2번

#include <stdio.h>

int main() 
{
	int input;

	printf("문자 입력: ");
	input = getchar();

	if (input != -1) 
	{
		char ch = input;
		printf("%c문자의 아스키 코드값: %d\n", ch, ch);
	}

	return 0;
}