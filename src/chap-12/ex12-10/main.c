// 366p 예제 12-10 strncpy 함수를 사용한 문자열 복사

#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "mango tree";

	strncpy_s(str, sizeof(str), "apple", 5);
	printf("%s\n", str);

	return 0;
}