// 585p 예제 18-4 표준 입출력 스트림을 사용한 문자열 입력

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int ch;

	while (true) 
	{
		ch = getchar();

		if (ch == EOF)
			break;

		putchar(ch);
	}

	return 0;
}