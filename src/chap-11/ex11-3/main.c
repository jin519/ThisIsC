// 321p ���� 11-3 �����̳� ���� ������ �Է�

#include <stdio.h>

int main() 
{
	char ch1, ch2;

	scanf_s("%c%c", &ch1, (unsigned int)sizeof(ch1), &ch2, (unsigned int)sizeof(ch2));
	printf("[%c%c]", ch1, ch2);

	return 0;
}