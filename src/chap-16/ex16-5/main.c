#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void printStr(const char* const* ps) 
{
	while (*ps != NULL) 
		printf("%s\n", *ps++);
}

int main() 
{
	char tmp[80];
	char* str[21] = { NULL };
	int i = 0;

	while (i < 20) 
	{
		printf("문자열을 입력하세요: ");

		gets_s(tmp, sizeof(tmp));

		if (!strcmp(tmp, "end"))
			break;

		const size_t MEM_SIZE = (strlen(tmp) + 1);

		str[i] = (char*)malloc(MEM_SIZE);

		if (!str[i])
		{
			puts("메모리가 부족합니다.");
			exit(1);
		}

		strcpy_s(str[i], (sizeof(char) * MEM_SIZE), tmp);

		i++;
	}

	printStr(str);

	for (i = 0; str[i] != NULL; ++i)
		free(str[i]);

	return 0;
}