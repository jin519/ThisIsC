// 340p �������� 5��

#include <stdio.h>

int main()
{
	int input;
	int cnt = 0;

	while ((input = getchar()) != EOF)
	{
		if (input == '\n')
			cnt++;
	}

	printf("���� Ű�� ���� Ƚ��: %d\n", cnt);

	return 0;
}