#include <stdio.h>

int main() 
{
	char str[80] = "applejam";

	printf("���� ���ڿ�: %s\n", str);
	printf("���ڿ� �Է�: ");
	scanf_s("%s", str, (unsigned int)sizeof(str));
	printf("�Է� �� ���ڿ�: %s\n", str);

	return 0;
}