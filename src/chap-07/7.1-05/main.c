#include <stdio.h>

int prime_check(const int num) 
{
	for (int i = 2; i < num; ++i) 
	{
		if (num % i == 0)
			return 0;
	}

	return 1;
}

int main() 
{
	const int NUM = 32767;

	if (prime_check(NUM))
		puts("�Ҽ� �Դϴ�.");
	else
		puts("�Ҽ��� �ƴմϴ�.");

	return 0;
}