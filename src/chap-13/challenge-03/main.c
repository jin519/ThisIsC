// 409p 도전 실전 예제 3번

#include <stdio.h>
#include <stdbool.h>

char* myToken(char* ps)
{
	static int sentIdx;
	static char token[50];
	int tokenIdx = 0;

	if (!ps[sentIdx])
		return NULL;

	while ((ps[sentIdx] != ' ') && ps[sentIdx])
		token[tokenIdx++] = ps[sentIdx++];

	token[tokenIdx] = '\0';

	if (ps[sentIdx])
		sentIdx++;

	return token;
}

int main()
{
	char str[80];
	char* p;

	printf("문장 입력: ");
	gets_s(str, sizeof(str));

	while ((p = myToken(str)) != NULL)
		printf("%s\n", p);

	return 0;
}