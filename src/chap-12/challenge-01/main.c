// 379p 도전 실전 예제 1번

#include <stdio.h>
#include <string.h>

void swap(const char** p1, const char** p2)
{
	const char* pTmp = NULL;

	pTmp = *p1;
	*p1 = *p2;
	*p2 = pTmp;
}

int main() 
{
	char str1[50], str2[50], str3[50];

	fputs("세 단어 입력: ", stdout);
	scanf_s("%s %s %s", str1, (unsigned int)sizeof(str1), str2, (unsigned int)sizeof(str2), str3, (unsigned int)sizeof(str3));

	const char* pFirst = str1;
	const char* pSecond = str2;
	const char* pEnd = str3;

	if (strcmp(pFirst, pSecond) > 0)
		swap(&pFirst, &pSecond);

	if (strcmp(pSecond, pEnd) > 0)
		swap(&pSecond, &pEnd);

	if (strcmp(pFirst, pEnd) > 0)
		swap(&pFirst, &pEnd);

	printf("%s, %s, %s\n", pFirst, pSecond, pEnd);

	return 0;
}