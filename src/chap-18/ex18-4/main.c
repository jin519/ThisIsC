// 585p ���� 18-4 ǥ�� ����� ��Ʈ���� ����� ���ڿ� �Է�

#include <stdio.h>
#include <stdbool.h>

int main()
{
	int ch;

	while (true) 
	{
		ch = getchar();

		if (ch == EOF)
			break;

		putchar(ch);
	}

	return 0;
}