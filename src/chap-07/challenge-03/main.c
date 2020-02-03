#include <stdio.h>

int prime_check(int n); // n�� �Ҽ��� 1 ��ȯ, �Ҽ��� �ƴϸ� 0 ��ȯ

int main() 
{
	int n;
	int cnt = 0;

	printf("# ��� �Է�: ");
	scanf_s("%d", &n);

	for (int i = 2; i < n; ++i) 
	{
		if (prime_check(i))
		{
			++cnt;

			printf("%2d ", i);

			if (cnt % 5 == 0)
				puts("");
		}
	}

	return 0;
}

int prime_check(int n) 
{
	for (int i = 2; i < n; ++i) 
	{
		if (n % i == 0)
			return 0;
	}

	return 1;
}