#include <stdio.h>

int main(void) 
{
	int income = 0; // �ҵ�� �ʱ�ȭ
	double tax; // ����
	const double TAX_RATE = 0.12; // ���� �ʱ�ȭ

	income = 456; // �ҵ�� ����
	tax = income * TAX_RATE; // ���� ���

	printf("������ %.1lf�Դϴ�.\n", tax);

	return 0;
}