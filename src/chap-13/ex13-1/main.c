// 383p ���� 13-1 �� �Լ����� ���� �̸��� ���� ������ ����� ���

#include <stdio.h>

void assign() 
{
	auto int a;

	a = 10;

	printf("assign �Լ� a: %d\n", a);
}

int main() 
{
	auto int a = 0;

	assign();

	printf("main �Լ� a: %d\n", a);

	return 0;
}