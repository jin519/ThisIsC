// 376p �������� 5��

#include <stdio.h>
#include <string.h>

int main()
{
	char str[16];

	for (int i = 1; ; ++i) 
	{
		printf("[��.��.��.�� %d]\n", i);
		
		fputs("�ܾ� �Է�: ", stdout);
		scanf_s("%s", str, (unsigned int)sizeof(str));

		printf("�Է��� �ܾ�: %s, ", str);

		size_t size = strlen(str);

		if (size > 5) 
		{
			while (--size, (size >= 5))
				str[size] = '*';
		}

		printf("������ �ܾ�: %s\n", str);
	}

	return 0;
}