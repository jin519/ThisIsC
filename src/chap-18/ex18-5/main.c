// 587p ���� 18-5 stdin�� stdout�� ����� ���� �����

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int ch;

	while (true) 
	{
		ch = fgetc(stdin);

		if (ch == EOF)
			break;

		fputc(ch, stdout);
	}

	return 0;
}