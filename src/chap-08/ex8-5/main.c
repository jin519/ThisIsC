#include <stdio.h>

int main() 
{
	char str[80] = "applejam";

	printf("최초 문자열: %s\n", str);
	printf("문자열 입력: ");
	scanf_s("%s", str, (unsigned int)sizeof(str));
	printf("입력 후 문자열: %s\n", str);

	return 0;
}