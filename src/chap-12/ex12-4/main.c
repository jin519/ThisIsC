// 350p ���� 12-4 gets �Լ��� �� ���� ���ڿ� �Է�

#include <stdio.h>

int main()
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�: ");
	gets_s(str, sizeof(str));
	printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}