// 417p ���� 14-2 2���� �迭�� �پ��� �ʱ�ȭ ���

#include <stdio.h>

int main()
{
	int num1[3][4] = { { 1, 2, 3, 4 }, { 5, 6, 7, 8 }, { 9, 10, 11, 12 } };
	int num2[3][4] = { { 1 }, { 5, 6 }, { 9, 10, 11 } };
	int num3[][4] = { { 1 }, { 2, 3 }, { 4, 5, 6 } };
	int num4[3][4] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12 };
	int num5[3][4] = { 1, 2, 3, 4, 5, 6 };
	int num6[][4] = { 1, 2, 3, 4, 5, 6 };

	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 4; ++j)
			printf("%5d", num1[i][j]);

		printf("\n");
	}

	return 0;
}