// 376p 연습문제 5번

#include <stdio.h>
#include <string.h>

int main()
{
	char str[16];

	for (int i = 1; ; ++i) 
	{
		printf("[실.행.결.과 %d]\n", i);
		
		fputs("단어 입력: ", stdout);
		scanf_s("%s", str, (unsigned int)sizeof(str));

		printf("입력한 단어: %s, ", str);

		size_t size = strlen(str);

		if (size > 5) 
		{
			while (--size, (size >= 5))
				str[size] = '*';
		}

		printf("생략한 단어: %s\n", str);
	}

	return 0;
}