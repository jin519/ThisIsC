// 633p ���� 19-5 #�� ##�� ����� ��ũ�� �Լ�

#include <stdio.h>

#define PRINT_EXPR(x) printf(#x " = %d\n", x); 
#define NAME_CAT(x, y) (x ## y)

int main()
{
	int a1, a2;

	NAME_CAT(a, 1) = 10; 
	NAME_CAT(a, 2) = 20;

	PRINT_EXPR(a1 + a2);
	PRINT_EXPR(a2 - a1);

	return 0;
}