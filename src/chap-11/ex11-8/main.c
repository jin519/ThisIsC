// 337p ���� 11-8 fflush �Լ��� �ʿ��� ���

#include <stdio.h>

int main() 
{
	int num, grade;

	printf("�й� �Է�: ");
	scanf_s("%d", &num);
	fflush(stdin);

	printf("���� �Է�: ");
	grade = getchar();

	printf("�й�: %d, ����: %c", num, grade);

	return 0;
}