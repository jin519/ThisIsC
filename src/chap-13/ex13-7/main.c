// 400p ���� 13-7 �����͸� �Ἥ ������ ���� 10�� ���ϴ� ���

#include <stdio.h>

void addTen(int* p) 
{
	*p += 10;
}

int main()
{
	int a = 10;

	addTen(&a);

	printf("a: %d\n", a);

	return 0;
}