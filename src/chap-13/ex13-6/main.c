// 399p ���� 13-6 10�� ���ϱ� ���� ���� �μ��� �ִ� ���

#include <stdio.h>

void addTen(int a) 
{
	a = a + 10;
}

int main()
{
	int a = 10;

	addTen(a);

	printf("a: %d\n", a);

	return 0;
}