#include <stdio.h>

int main() 
{
	char ch;
	int in;
	double db;

	char* pc = &ch;
	int* pi = &in;
	double* pd = &db;

	printf("char�� ������ �ּ� ũ��: %llu\n", sizeof(&ch));
	printf("int�� ������ �ּ� ũ��: %llu\n", sizeof(&in));
	printf("double�� ������ �ּ� ũ��: %llu\n", sizeof(&db));

	printf("char* �������� ũ��: %llu\n", sizeof(pc));
	printf("int* �������� ũ��: %llu\n", sizeof(pi));
	printf("double* �������� ũ��: %llu\n", sizeof(pd));

	printf("char* �����Ͱ� ����Ű�� ������ ũ��: %llu\n", sizeof(*pc));
	printf("int* �����Ͱ� ����Ű�� ������ ũ��: %llu\n", sizeof(*pi));
	printf("double* �����Ͱ� ����Ű�� ������ ũ��: %llu\n", sizeof(*pd));

	return 0;
}