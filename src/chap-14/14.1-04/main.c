// 428p �������� 4��

#include <stdio.h>
#include <string.h>

#define SIZE 5

int main()
{
	char fruits[SIZE][20];
	int maxIdx = 0;

	printf("%d���� ���� �̸� �Է�: ", SIZE);

	for (int i = 0; i < SIZE; ++i) 
	{
		scanf_s("%s", fruits[i], (unsigned int)sizeof(fruits[0]));

		if (strlen(fruits[maxIdx]) < strlen(fruits[i]))
			maxIdx = i;
	}

	printf("���̰� ���� �� ���� �̸��� %s�Դϴ�.\n", fruits[maxIdx]);

	return 0;
}