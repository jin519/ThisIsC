#include <stdio.h>

int main(void) 
{
	short sh = 32767; // short���� �ִ밪 �ʱ�ȭ
	int in = 2147483648; // int���� �ּҰ� �ʱ�ȭ
	long ln = 2147483647; // long���� �ִ밪 �ʱ�ȭ
	long long lln = 123451234512345; // ���� ū �� �ʱ�ȭ

	printf("short�� ���� ���: %d\n", sh);
	printf("int�� ���� ���: %d\n", in);
	printf("long�� ���� ���: %ld\n", ln);
	printf("long long�� ���� ���: %lld\n", lln);

	return 0;
}