#include <stdio.h>

int main() 
{
	const int ANSWER = 19;
	int input = 0;
	int count = 0;

	do 
	{
		printf("���� �Է�(1���� 30����): ");
		scanf_s("%d", &input);
		
		++count;

		if (ANSWER > input)
			printf("%d���� Ů�ϴ�!\n", input);
		else if (ANSWER < input)
			printf("%d���� �۽��ϴ�!\n", input);
		else
			printf("�����Դϴ�!\n");

	} while (ANSWER != input);

	printf("�õ��� Ƚ���� %dȸ �Դϴ�.\n", count);

	return 0;
}