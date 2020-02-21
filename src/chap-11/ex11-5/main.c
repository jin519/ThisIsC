// 330p 예제 11-5 버퍼를 사용하는 문자입력

#include <stdio.h>

int main() 
{
	char ch;
	int i;

	for (i = 0; i < 3; ++i)
	{
		scanf_s("%c", &ch, (unsigned int)sizeof(ch));
		printf("%c", ch);
	}

	return 0;
}