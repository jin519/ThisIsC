#include <stdio.h>

int prime_check(int n); // n이 소수면 1 반환, 소수가 아니면 0 반환

int main() 
{
	int n;
	int cnt = 0;

	printf("# 양수 입력: ");
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