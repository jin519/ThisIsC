// 335p 예제 11-7 getchar 함수를 사용한 문자열 입력

#include <stdio.h>

void myGets(char* str, int size) 
{
	char ch;
	int i = 0;

	ch = getchar();

	while ((ch != '\n') && (i < (size - 1))) 
	{
		str[i++] = ch;
		ch = getchar();
	}

	str[i] = '\0';
}

int main()
{
	char str[7];

	myGets(str, sizeof(str));

	printf("입력한 문자열: %s\n", str);

	return 0;
}