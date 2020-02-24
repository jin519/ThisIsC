// 376p 연습문제 4번

#include <stdio.h>
#include <string.h>

int main() 
{
	char str1[80], str2[80];
	const char* pLen;
	const char* pCmp;

	printf("두 단어 입력: ");
	scanf_s("%s %s", str1, (unsigned int)sizeof(str1), str2, (unsigned int)sizeof(str2));

	if (strlen(str1) < strlen(str2))
		pLen = str2;
	else
		pLen = str1;

	printf("길이가 긴 단어: %s\n", pLen);

	if (strcmp(str1, str2) == -1)
		pCmp = str1;
	else
		pCmp = str2;

	printf("사전에 먼저 나오는 단어: %s\n", pCmp);

	return 0;
}