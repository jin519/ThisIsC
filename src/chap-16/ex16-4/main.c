#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() 
{
	char tmp[80];
	char* str[3];

	for (int i = 0; i < 3; ++i) 
	{
		printf("문자열을 입력하세요: ");
		gets_s(tmp, sizeof(tmp));

		const size_t SIZE = (strlen(tmp) + 1);

		str[i] = (char*)calloc(SIZE, sizeof(char));

		if (!str[i])
			exit(1);

		strcpy_s(str[i], SIZE, tmp);

		printf("%s\n", str[i]);
		free(str[i]);
	}

	return 0;
}