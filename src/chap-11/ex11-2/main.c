// 319p ���� 11-2 �빮�ڸ� �ҹ��ڷ� ����

#include <stdio.h>

int main() 
{
	char small, cap = 'G';

	if ((cap >= 'A') && (cap <= 'Z'))
		small = cap + ('a' - 'A');

	printf("�빮��: %c %c", cap, '\n');
	printf("�ҹ���: %c", small);

	return 0;
}