// 353p ���� 12-5 fgets �Լ��� ���ڿ� �Է� ���

#include <stdio.h>

int main()
{
	char str[80];

	printf("������ ���Ե� ���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("�Է��� ���ڿ��� %s�Դϴ�.\n", str);

	return 0;
}