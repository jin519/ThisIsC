// 435p ���� 14-7 ���� ���� 1���� �迭�� 2���� �迭ó�� ���

#include <stdio.h>

int main()
{
	int arr1[4] = { 1, 2, 3, 4 };
	int arr2[4] = { 11, 12, 13, 14 };
	int arr3[4] = { 21, 22, 23, 24 };

	int* pArr[3] = { arr1, arr2, arr3 };

	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 4; ++j)
			printf("%5d", pArr[i][j]);

		printf("\n");
	}

	return 0;
}