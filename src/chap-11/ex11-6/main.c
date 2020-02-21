// 332p 예제 11-6 입력 문자의 아스키 코드값을 출력하는 프로그램

#include <stdio.h>
#include <stdbool.h>

int main() 
{
	int res;
	char ch;

	while (true) 
	{
		res = scanf_s("%c", &ch, (unsigned int)sizeof(ch));

		if (res == EOF)
			break;

		printf("%d ", ch);
	}

	return 0;
}