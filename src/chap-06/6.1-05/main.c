#include <stdio.h>

int main() 
{
	int num = 0;
	int sum = 0;

	do 
	{
		sum += num;

		printf("양수 입력: ");
		scanf_s("%d", &num);
	} while (num > 0);

	printf("누적된 값: %d\n", sum);

	return 0;
}