#include <stdio.h>

int main() 
{
	int a = 10, b = 15, tot;
	double avg;
	int* pa, *pb;
	int* pt = &tot;
	double* pg = &avg;

	pa = &a;
	pb = &b;

	*pt = *pa + *pb;
	*pg = *pt / 2.0;

	printf("�� ������ ��: %d, %d\n", *pa, *pb);
	printf("�� ������ ��: %d\n", *pt);
	printf("�� ������ ���: %.1lf\n", *pg);

	return 0;
}