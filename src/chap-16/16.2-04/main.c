#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define ROW 3
#define COL 4

int** create(const int row, const int col) 
{
	int** const retVal = malloc(sizeof(int*) * row);

	if (!retVal)
		return NULL;

	for (int i = 0; i < row; ++i)
	{
		retVal[i] = malloc(sizeof(int) * col);

		if (!retVal[i])
			return NULL;
	}

	return retVal;
}

void add(int(*mat1)[COL], int(*mat2)[COL], int** pResult, const int row, const int col) 
{
	for (int i = 0; i < row; ++i)
		for (int j = 0; j < col; ++j)
			pResult[i][j] = (mat1[i][j] + mat2[i][j]);
}

void show(int** pMatrix, const int row, const int col)
{
	for (int i = 0; i < row; ++i)
	{
		for (int j = 0; j < col; ++j)
			printf("%d ", pMatrix[i][j]);

		puts("");
	}
}

void delete(int** pMatrix, const int row, const int col) 
{
	for (int i = 0; i < row; ++i)
		free(pMatrix[i]);

	free(pMatrix);
}

int main() 
{
	int matrix1[ROW][COL] =
	{
		{ 1, 2, 3, 4 },
		{ 5, 6, 7, 8 },
		{ 9, 10, 11, 12 }
	};

	int matrix2[ROW][COL] =
	{
		{ 12, 11, 10, 9 },
		{ 8, 7, 6, 5 },
		{ 4, 3, 2, 1 }
	};

	int** pMatrix = create(ROW, COL);

	if (!pMatrix)
		exit(1);
	
	add(matrix1, matrix2, pMatrix, ROW, COL);
	show(pMatrix, ROW, COL);
	delete(pMatrix, ROW, COL);

	pMatrix = NULL;

	return 0;
}