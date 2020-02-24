// 370p 예제 12-12 strcat, strncat 함수를 사용한 문자열 붙이기

#include <stdio.h>
#include <string.h>

int main()
{
	char str[80] = "straw";

	strcat_s(str, sizeof(str), "berry");
	printf("%s\n", str);

	strncat_s(str, sizeof(str), "piece", 3);
	printf("%s\n", str);

	return 0;
}