#include <stdio.h>

int rec_func(int n); // 1���� n������ ���� ��ȯ�ϴ� �Լ�

int main() 
{
	printf("%d\n", rec_func(10));

	return 0;
}

int rec_func(int n) 
{
	if (n <= 0)
		return 0;

	return (n + rec_func(n - 1));
}