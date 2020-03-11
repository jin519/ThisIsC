#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main() 
{
	int* pi = NULL;
	size_t size = 5;

	pi = (int*)calloc(size, sizeof(int));

	if (!pi)
		exit(1);

	const int* pTmp = pi;
	int count = 0;

	while (true) 
	{
		int num;

		fputs("양수를 입력하세요 => ", stdout);
		scanf_s("%d", &num);

		if (num <= 0)
			break;

		if (count == size)                     
		{
			size += 5;
			pi = (int*)realloc(pi, sizeof(int) * size);
		}

		pi[count++] = num;
	}

	for (int i = 0; i < count; ++i)
		printf("%5d", pi[i]);

	free(pi);    

	return 0;
}