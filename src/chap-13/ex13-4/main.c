// 390p ���� 13-4 auto ���� ������ static ���� ������ ��

#include <stdio.h>

void autoFunc() 
{
	auto int a = 0;

	a++;

	printf("%d\n", a);
}

void staticFunc() 
{
	static int a;

	a++;

	printf("%d\n", a);
}

int main()
{
	int i;

	puts("auto ���� ������ ����� �Լ�...");

	for (int i = 0; i < 3; ++i)
		autoFunc();

	puts("static ���� ������ ����� �Լ�...");

	for (int i = 0; i < 3; ++i)
		staticFunc();

	return 0;
}