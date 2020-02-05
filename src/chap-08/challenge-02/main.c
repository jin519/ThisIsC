#include <stdio.h>
#include <stdbool.h>

int main() 
{
	char str[100];

	printf("문장 입력: ");
	gets_s(str, sizeof(str));

	const int CASE_OFFSET = ('a' - 'A');
	size_t i = 0;
	int upperCaseSize = 0;

	while (true) 
	{
		const char CURRENT_CASE = str[i];

		if (!CURRENT_CASE)
			break;

		if ((CURRENT_CASE >= 'A') && (CURRENT_CASE <= 'Z'))
		{
			str[i] += CASE_OFFSET;
			++upperCaseSize;
		}

		++i;
	}

	printf("바뀐 문장: %s\n", str);
	printf("바뀐 문자 수: %d\n", upperCaseSize);

	return 0;
}