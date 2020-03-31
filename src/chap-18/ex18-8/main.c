// 600p 예제 18-8 여러 줄의 문장을 입력하여 한 줄로 출력

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	FILE* pInput = NULL;
	fopen_s(&pInput, "a.txt", "rt");

	if (pInput) 
	{
		char str[80] = { '\0' };

		FILE* pOutput = NULL;
		fopen_s(&pOutput, "b.txt", "wt");

		while (fgets(str, sizeof(str), pInput)) 
		{
			str[strlen(str) - 1] = '\0';

			fputs(str, pOutput);
			fputs(" ", pOutput);
		}

		fclose(pInput);
		fclose(pOutput);
	}

	return 0;
}