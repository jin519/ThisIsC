// 342p ���� ���� ���� 2��

#include <stdio.h>

int main() 
{
	int input;
	const int CASE_OFFSET = ('a' - 'A');

	while ((input = getchar()) != '\n') 
	{
		if ((input >= 'a') && (input <= 'z'))
			input -= CASE_OFFSET;
		else if ((input >= 'A') && (input <= 'Z'))
			input += CASE_OFFSET;

		printf("%c", input);
	}

	return 0;
}