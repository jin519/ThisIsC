// 348p ���� 12-3 scanf �Լ��� ����� ���ڿ� �Է�

#include <stdio.h>

int main()
{
	char str[80];

	printf("���ڿ� �Է�: ");
	
	scanf_s("%s", str, (unsigned int)sizeof(str));
	printf("ù��° �ܾ�: %s\n", str);
	
	scanf_s("%s", str, (unsigned int)sizeof(str));
	printf("���ۿ� �����ִ� �ι�° �ܾ�: %s\n", str);

	return 0;
}