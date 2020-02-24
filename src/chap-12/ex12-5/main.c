// 353p 예제 12-5 fgets 함수의 문자열 입력 방법

#include <stdio.h>

int main()
{
	char str[80];

	printf("공백이 포함된 문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("입력한 문자열은 %s입니다.\n", str);

	return 0;
}