#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));

	if (!pi) 
	{
		puts("�޸𸮰� �����մϴ�.");
		exit(1);
	}

	fputs("�ټ� ���� ���̸� �Է��ϼ���: ", stdout);

	for (i = 0; i < 5; ++i) 
	{
		scanf_s("%d", (pi + i));
		sum += pi[i];
	}

	printf("�ټ� ���� ��� ����: %.1lf\n", ((double)sum / 5.0));

	free(pi);

	return 0;
}