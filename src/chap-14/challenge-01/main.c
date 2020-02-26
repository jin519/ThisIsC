// 442p 도전 실전 예제 1번

#include <stdio.h>

#define ROW 5
#define COL 6

int main() 
{
	int arr[ROW][COL] = { 0 };
	int val = 1;
	const int MAX_ROW_IDX = (ROW - 1);
	const int MAX_COL_IDX = (COL - 1);

	for (int i = 0; i < ROW; ++i) 
	{
		for (int j = 0; j < COL; ++j) 
		{
			if (i == MAX_ROW_IDX)
			{
				int colSum = 0;

				for (int k = 0; k < MAX_ROW_IDX; ++k)
					colSum += arr[k][j];

				arr[i][j] = colSum;
			}
			else if (j == MAX_COL_IDX) 
			{
				int rowSum = 0;

				for (int k = 0; k < MAX_COL_IDX; ++k)
					rowSum += arr[i][k];

				arr[i][j] = rowSum;
			}
			else
				arr[i][j] = val++;
		}
	}

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
			printf("%3d ", arr[i][j]);

		puts("");
	}

	return 0;
}