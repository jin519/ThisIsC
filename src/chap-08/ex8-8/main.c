#include <stdio.h>

int main() 
{
	char str[80];

	printf("���ڿ� �Է�: ");
	gets_s(str, sizeof(str));
	
	puts("�Էµ� ���ڿ�: ");
	puts(str);

	return 0;
}