// 439p �������� 4��

#include <stdio.h>
#include <stdbool.h>

int main() 
{
	const char* pStr[] = { "����", "����", "��" };
	const char* pAns = NULL;
	int num;

	while (true) 
	{
		fputs("���� �Է�: ", stdout);
		scanf_s("%d", &num);

		if (num == -1)
			break;

		switch (num % 3) 
		{
		case 0:
			pAns = pStr[2];
			break;
		case 1:
			pAns = pStr[0];
			break;
		case 2:
			pAns = pStr[1];
		}

		printf("%s\n", pAns);
	}

	return 0;
}