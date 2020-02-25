// 409p ���� ���� ���� 3��

#include <stdio.h>
#include <stdbool.h>

char* myToken(char* ps)
{
	static int sentIdx;
	static char token[50] = { '\0' };
	int tokenIdx = 0;

	if (ps[sentIdx] == '\0')
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

	printf("���� �Է�: ");
	gets_s(str, sizeof(str));

	while ((p = myToken(str)) != NULL)
		printf("%s\n", p);

	return 0;
}