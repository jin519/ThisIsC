// 641p �������� 5��

#include <stdio.h>

#define CHECK_CNT
#define LEVEL 2

int main()
{
	int cnt = 0;

	fputs("����� ����: ", stdout);
	scanf_s("%d", &cnt); 

#ifdef CHECK_CNT
	printf("�Է��� ����: %d\n", cnt); 
#endif

	int sum = 0; 
	float avg = 0.f;

	for (int i = 1; i <= cnt; ++i) 
	{
		int num = 0; 

		fputs("��� �Է�: ", stdout);
		scanf_s("%d", &num);

		sum += num; 

		printf("����� ����: %d, ������ ��: %d\n", i, sum);

#if (LEVEL == 2)
		avg = ((float)sum / (float)i);
		printf("���� �Է� �� ���: %.1lf\n", avg);
#endif
	}

	printf("��ü �Է� ���� ���: %.1f\n", avg);

	return 0;
}