// 342p ���� ���� ���� 1��

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

	printf("���� �� �ܾ��� ����: %d\n", maxLength);

	return 0;
}