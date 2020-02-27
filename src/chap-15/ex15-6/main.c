// 459p 예제 15-6 2차원 배열의 값을 출력하는 함수

#include <stdio.h>

void printArr(int(*pArr)[4]) 
{
	for (int i = 0; i < 3; ++i)
	{
		for (int j = 0; j < 4; ++j)
			printf("%5d", pArr[i][j]);

		printf("\n");
	}
}

int main()
{
	int arr[3][4] =
	{
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 }
	};

	printArr(arr);

	return 0;
}