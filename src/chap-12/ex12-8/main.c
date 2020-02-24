// 362p 예제 12-8 strcpy 함수의 사용법

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	const char* ps1 = "banana";
	char* ps2 = str2;

	printf("최초 문자열: %s\n", str1);
	strcpy_s(str1, sizeof(str1), str2);
	printf("바뀐 문자열: %s\n", str1);

	strcpy_s(str1, sizeof(str1), ps1);
	printf("바뀐 문자열: %s\n", str1);

	strcpy_s(str1, sizeof(str1), ps2);
	printf("바뀐 문자열: %s\n", str1);

	strcpy_s(str1, sizeof(str1), "banana");
	printf("바뀐 문자열: %s\n", str1);

	return 0;
}