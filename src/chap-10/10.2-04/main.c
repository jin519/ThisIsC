// 311p 연습문제 4번

#include <stdio.h>

void prtDateAt5Intervals(const int* month, const int size)
{
	for (int i = 0; i < size; ++i) 
	{
		if (i % 5 == 0)
			printf("\n");

		printf("%d ", month[i]);
	}
}

int main()
{
	const int MONTH[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const int SIZE = (int)(sizeof(MONTH) / sizeof(MONTH[0]));

	prtDateAt5Intervals(MONTH, SIZE);

	return 0;
}