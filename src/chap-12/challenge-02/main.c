// 379p ���� ���� ���� 2��

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char str[100] = "";

	while (true) 
	{
		char input[20];

		fputs("�ܾ� �Է�: ", stdout);
		scanf_s("%s", input, (unsigned int)sizeof(input));

		if (strcmp(input, "end") == 0)
			break;
		
		const size_t SIZE = strlen(str);

		str[SIZE] = ' ';
		str[SIZE + 1] = '\0';
		strcat_s(str, sizeof(str), input);

		printf("��������� ���ڿ�: %s\n", str);
	}

	return 0;
}