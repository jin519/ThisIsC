// 472p ���� 15-8 �Լ� �����ͷ� ���ϴ� �Լ��� ȣ���ϴ� ���α׷�

#include <stdio.h>

void func(int (*fp)(int, int)) 
{
	int a, b;
	int res;

	fputs("�� �������� �Է��ϼ���: ", stdout);
	scanf_s("%d%d", &a, &b);

	res = fp(a, b);

	printf("�������: %d\n", res);
}

int sum(int a, int b) 
{
	return (a + b);
}

int mul(int a, int b) 
{
	return (a * b);
}

int max(int a, int b) 
{
	return ((a > b) ? a : b);
}

int main()
{
	int sel;

	puts("1. �� ������ ��");
	puts("2. �� ������ ��");
	puts("3. �� ���� �߿��� ū �� ���");
	
	fputs("���ϴ� �۾��� �����ϼ���: ", stdout);
	scanf_s("%d", &sel);

	switch (sel)
	{
	case 1:
		func(sum);
		break;
	case 2:
		func(mul);
		break;
	case 3:
		func(max);
	}

	return 0;
}