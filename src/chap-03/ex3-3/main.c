#include <stdio.h>

int main(void) 
{
	char ch1 = 'A'; // ���ڷ� �ʱ�ȭ
	char ch2 = 65; // ���� 'A'�� �ƽ�Ű �ڵ� ������ �ʱ�ȭ

	printf("���� %c�� �ƽ�Ű �ڵ� ��: %d\n", ch1, ch1);
	printf("�ƽ�Ű �ڵ� ���� %d�� ����: %c\n", ch2, ch2);

	return 0;
}