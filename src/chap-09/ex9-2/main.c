#include <stdio.h>

int main() 
{
	int a;
	int* pa;

	pa = &a;
	*pa = 10;

	printf("�����ͷ� a�� ���: %d\n", *pa);
	printf("���������� a�� ���: %d\n", a);

	return 0;
}