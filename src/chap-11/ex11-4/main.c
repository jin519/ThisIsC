// 324p ���� 11-4 getchar�� putchar �Լ� ���

#include <stdio.h>

int main() 
{
	int ch;

	ch = getchar();

	printf("�Է��� ����: ");
	putchar(ch);
	putchar('\n');

	return 0;
}