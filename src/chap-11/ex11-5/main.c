// 330p ���� 11-5 ���۸� ����ϴ� �����Է�

#include <stdio.h>

int main() 
{
	char ch;
	int i;

	for (i = 0; i < 3; ++i)
	{
		scanf_s("%c", &ch, (unsigned int)sizeof(ch));
		printf("%c", ch);
	}

	return 0;
}