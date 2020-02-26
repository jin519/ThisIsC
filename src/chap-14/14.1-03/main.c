// 428p 연습문제 3번

#include <stdio.h>

#define ROW 4
#define COL 5

int main() 
{
	int arr[ROW][COL];
	int num = 0;

	for (int i = 0; i < ROW; ++i)
	{
		for (int j = 0; j < COL; ++j)
		{
			arr[i][j] = ++num;

			printf("%2d ", arr[i][j]);
		}

		printf("\n");
	}

	return 0;
}