// 326p �������� 2��

#include <stdio.h>

int main() 
{
	int input;

	printf("���� �Է�: ");
	input = getchar();

	if (input != -1) 
	{
		char ch = input;
		printf("%c������ �ƽ�Ű �ڵ尪: %d\n", ch, ch);
	}

	return 0;
}