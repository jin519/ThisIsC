#include <stdio.h>
#include <stdbool.h>

int main() 
{
	char str[100];

	printf("���� �Է�: ");
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

	printf("�ٲ� ����: %s\n", str);
	printf("�ٲ� ���� ��: %d\n", upperCaseSize);

	return 0;
}