#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_LENGTH 30

int main() 
{
	char* pMemo = NULL;
	size_t length = 0;

	for (size_t i = 0; ; ++i) 
	{
		char input[MAX_LENGTH];

		fputs("메모 입력: ", stdout);
		gets_s(input, sizeof(input));

		if (!strcmp("end", input))
			break;

		length += (strlen(input) + 1);

		char* pTmp = pMemo;
		const size_t BYTE_SIZE = (sizeof(char) * length);

		pMemo = realloc(pMemo, BYTE_SIZE);

		if (!pMemo)
		{
			puts("메모리 재할당 실패!");
			exit(1);
		}

		if (!i) 
			*pMemo = '\0';

		strcat_s(pMemo, BYTE_SIZE, input);
	}

	printf("%s\n", pMemo);

	free(pMemo);

	return 0;
}