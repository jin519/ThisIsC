// 332p ���� 11-6 �Է� ������ �ƽ�Ű �ڵ尪�� ����ϴ� ���α׷�

#include <stdio.h>
#include <stdbool.h>

int main() 
{
	int res;
	char ch;

	while (true) 
	{
		res = scanf_s("%c", &ch, (unsigned int)sizeof(ch));

		if (res == EOF)
			break;

		printf("%d ", ch);
	}

	return 0;
}