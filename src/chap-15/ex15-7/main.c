// 470p ���� 15-7 �Լ� �����͸� ����� �Լ� ȣ��

#include <stdio.h>

int sum(int a, int b) 
{
	return (a + b);
}

int main() 
{
	int (*fp)(int, int) = sum;
	int res;

	res = fp(10, 20);

	printf("result: %d\n", res);

	return 0;
}