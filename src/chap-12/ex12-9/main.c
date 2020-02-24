// 364p 예제 12-9 strcpy와 기능이 같은 함수의 구현

#include <stdio.h>
#include <string.h>

char* myStrcpy(char* dest, const char* src) 
{
	char* retVal = dest;

	while (*src != '\0') 
		*dest++ = *src++;
	
	*dest = '\0';

	return retVal;
}

int main()
{
	char str[80] = "strawberry";

	printf("바뀌기 전 문자열: %s\n", str);
	myStrcpy(str, "apple");
	printf("바꾼 후 문자열: %s\n", str);
	printf("다른 문자열 대입: %s\n", myStrcpy(str, "kiwi"));

	return 0;
}