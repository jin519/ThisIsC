// 439p 연습문제 5번

#include <stdio.h>
#include <stdbool.h>

int main()
{
	double arr1[] = { 1.5, 2.3, 7.7, 4.9 };
	double arr2[] = { 3.4, 5.2, 4.0, 9.1 };
	double arr3[] = { 0.3, 7.2, 8.4, 6.6 };

	double* pArr[] = { arr1, arr2, arr3 };
	const size_t ROW = (sizeof(pArr) / sizeof(pArr[0]));
	const size_t COL = (sizeof(arr1) / sizeof(arr1[0]));

	size_t maxIdx = 0;
	double maxAvg = 0.0;

	for (size_t i = 0; i < ROW; ++i) 
	{
		double sum = 0.0;

		for (size_t j = 0; j < COL; ++j) 
			sum += pArr[i][j];

		const double AVG = (sum / (double)COL);

		if (maxAvg < AVG)
		{
			maxIdx = i;
			maxAvg = AVG;
		}
	}

	const char* pStr[] = { "첫", "두", "세" };

	printf("%s번째 배열: ", pStr[maxIdx]);

	for (size_t i = 0; i < COL; ++i)
		printf("%.1lf ", pArr[maxIdx][i]);

	puts("");
	printf("평균: %.1lf\n", maxAvg);

	return 0;
}