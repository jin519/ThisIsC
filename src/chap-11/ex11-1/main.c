// 317p ���� 11-1 ����ó�� ���Ǵ� ����

#include <stdio.h>

int main() 
{
	int ch;

	printf("���� a�� �ƽ�Ű �ڵ尪: %d\n", 'a');
	printf("�ƽ�Ű �ڵ� ���� 97�� ����: %c\n", 97);
	printf("���� ����� ũ��: %llu\n", sizeof('a'));

	ch = 'a';
	ch++;

	printf("���� %c�� �ƽ�Ű �ڵ尪: %d\n", ch, ch);

	return 0;
}