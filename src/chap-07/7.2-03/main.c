#include <stdio.h>

void sum(const int n) 
{
	int res = 0;

	for (int i = 1; i <= n; ++i)
		res += i;

	printf("1���� %d������ ���� %d�Դϴ�\n", n, res);
}

int main() 
{
	sum(10);
	sum(100);

	return 0;
}