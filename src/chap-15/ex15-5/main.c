// 458p ���� 15-5 �迭 �����ͷ� 2���� �迭�� �� ���

#include <stdio.h>

int main()
{
	int arr[3][4] = 
	{
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 }, 
		{ 9, 10, 11, 12 }
	};

	int(*pa)[4] = arr;

	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 4; ++j)
			printf("%5d", pa[i][j]);

		printf("\n");
	}
		 
	return 0;
}