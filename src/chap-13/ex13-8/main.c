// 402p ���� 13-8 �ּҸ� ��ȯ�Ͽ� �� ������ �� ���

#include <stdio.h>

int* sum(int a, int b) 
{
	static int res;

	res = a + b;

	return &res;
}

int main()
{
	int* p;

	p = sum(10, 20);
	
	printf("�� ������ ��: %d\n", *p);

	return 0;
}