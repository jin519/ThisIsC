// 413p ���� 14-1 3�� �л��� �� ���� ������ ����� ���ϴ� ���α׷�

#include <stdio.h>

int main() 
{
	int score[3][4];
	int tot;
	double avg;
	
	for (int i = 0; i < 3; ++i) 
	{
		printf("�� ������ ���� �Է�: ");

		for (int j = 0; j < 4; ++j)
			scanf_s("%d", &score[i][j]);

	}

	for (int i = 0; i < 3; ++i) 
	{
		tot = 0;

		for (int j = 0; j < 4; ++j)
			tot += score[i][j];

		avg = ((double)tot / 4.0);

		printf("����: %d, ���: %.2lf\n", tot, avg);
	}

	return 0;
}