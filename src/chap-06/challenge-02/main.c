#include <stdio.h>
#include <stdbool.h>

int main() 
{
	int num = 0;
	int count = 0;

	printf("2 이상의 정수를 입력하세요: ");
	scanf_s("%d", &num);

	for (int i = 2; i <= num; ++i) 
	{
		bool isPrime = true;

		for (int j = 2; j < i; ++j) 
		{
			if (i % j == 0)
			{
				isPrime = false;
				break;
			}
		}

		if (isPrime)
		{
			++count;
			printf("%2d ", i);

			if (count % 5 == 0)
				printf("\n");
		}
	}

	return 0;
}