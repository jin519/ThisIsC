// 342p 도전 실전 예제 1번

#include <stdio.h>

int main() 
{
	int input;
	int maxLength = 0;
	int length = 0;

	while ((input = getchar()) != EOF) 
	{
		if (input == '\n')
		{
			if (maxLength < length)
				maxLength = length;

			length = 0;
		}
		else
			length++;
	}

	printf("가장 긴 단어의 길이: %d\n", maxLength);

	return 0;
}