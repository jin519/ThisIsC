// 587p 예제 18-5 stdin과 stdout을 사용한 문자 입출력

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int ch;

	while (true) 
	{
		ch = fgetc(stdin);

		if (ch == EOF)
			break;

		fputc(ch, stdout);
	}

	return 0;
}