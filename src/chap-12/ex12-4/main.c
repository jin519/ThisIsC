// 350p 예제 12-4 gets 함수로 한 줄의 문자열 입력

#include <stdio.h>

int main()
{
	char str[80];

	printf("공백이 포함된 문자열 입력: ");
	gets_s(str, sizeof(str));
	printf("입력한 문자열은 %s입니다.\n", str);

	return 0;
}