#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* pi;
	int i, sum = 0;

	pi = (int*)malloc(5 * sizeof(int));

	if (!pi) 
	{
		puts("메모리가 부족합니다.");
		exit(1);
	}

	fputs("다섯 명의 나이를 입력하세요: ", stdout);

	for (i = 0; i < 5; ++i) 
	{
		scanf_s("%d", (pi + i));
		sum += pi[i];
	}

	printf("다섯 명의 평균 나이: %.1lf\n", ((double)sum / 5.0));

	free(pi);

	return 0;
}