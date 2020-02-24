// 380p 도전 실전 예제 3번

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int countWord(const char* strTargetSentence, const char* strWord) 
{
	const char* tmpPtr = strWord;
	int retVal = 0;

	while (*strTargetSentence)
	{
		if (*strTargetSentence == *tmpPtr) 
		{
			bool flag = true;

			while (true) 
			{
				tmpPtr++;

				if (*tmpPtr == '\0')
					break;

				strTargetSentence++;

				if (*strTargetSentence != *tmpPtr)
				{
					flag = false;
					break;
				}
			}

			if (flag) 
				retVal++;

			tmpPtr = strWord;
		}

		strTargetSentence++;
	}

	return retVal;
}

int main()
{
	char sentence[100];

	printf("문장 입력: ");
	gets_s(sentence, sizeof(sentence));

	while (true) 
	{
		printf("검색할 문자열 입력 (종료는 end): ");

		char input[100];
		gets_s(input, sizeof(input));

		if (strcmp(input, "end") == 0)
			break;

		printf("검색 결과: %d개\n", countWord(sentence, input));
	}

	return 0;
}