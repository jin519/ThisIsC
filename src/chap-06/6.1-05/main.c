#include <stdio.h>

int main() 
{
	int num = 0;
	int sum = 0;

	do 
	{
		sum += num;

		printf("��� �Է�: ");
		scanf_s("%d", &num);
	} while (num > 0);

	printf("������ ��: %d\n", sum);

	return 0;
}