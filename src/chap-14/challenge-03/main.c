// 443p ���� ���� ���� 3��

#include <stdio.h>
#include <math.h>

#define ROW 4
#define COL 7

void calcAvg(int (*salesArr)[COL]) 
{
	const int MAX_COL = (COL - 1);

	for (int i = 0; i < ROW; ++i)
	{
		int total = 0;

		for (int j = 0; j < MAX_COL; ++j)
			total += salesArr[i][j];

		salesArr[i][MAX_COL] = (int)round((double)total / (double)MAX_COL);
	}
}

void printSales(int (*salesArr)[COL], char (*namesArr)[50])
{
	for (int i = 0; i < ROW; ++i)
	{
		printf("%s ", namesArr[i]);

		for (int j = 0; j < COL; ++j)
			printf("%3d ", salesArr[i][j]);

		printf("\n");
	}
}

void sortSales(const int** pSales, const char** pNames) 
{
	const int MAX_COL = (COL - 1);

	for (int i = 1; i < ROW; ++i) 
	{
		const int* pSalesTmp = pSales[i];
		const char* pNamesTmp = pNames[i];

		for (int j = (i - 1); j >= 0; --j) 
		{
			if (pSalesTmp[MAX_COL] > pSales[j][MAX_COL])
			{
				pSales[j + 1] = pSales[j];
				pSales[j] = pSalesTmp;

				pNames[j + 1] = pNames[j];
				pNames[j] = pNamesTmp;
			}
		}
	}
}

void printSortedSales(const int* const* const pSales, const char* const* const pNames)
{
	for (int i = 0; i < ROW; ++i)
	{
		printf("%s ", pNames[i]);

		for (int j = 0; j < COL; ++j)
			printf("%3d ", pSales[i][j]);

		printf("\n");
	}
}

int main() 
{
	int sales[ROW][COL] =
	{
		{ 70, 45, 100, 92, 150, 81 }, 
		{ 88, 92, 77, 30, 52, 55 }, 
		{ 50, 90, 88, 75, 77, 49 }, 
		{ 120, 92, 80, 150, 130, 105 }
	};

	char names[ROW][50] = { "������", "������", "����", "�븲��" };

	const char* pNames[ROW] = { names[0], names[1], names[2], names[3] };
	const int* pSales[ROW] = { sales[0], sales[1], sales[2], sales[3] };

	calcAvg(sales);

	puts("������ ���...");
	sortSales(pSales, pNames);
	printSortedSales(pSales, pNames);

	puts("\n������ ���...");
	printSales(sales, names);

	return 0;
}