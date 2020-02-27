// 464p 연습문제 4번

#include <stdio.h>

int countNum(int(*pArr1)[4], int(*pArr2)[4], int(*pSameNum)[2]) 
{
	int retVal = 0;

	for (int i = 0; i < 3; ++i) 
	{
		for (int j = 0; j < 4; ++j) 
		{
			if (pArr1[i][j] == pArr2[i][j])
			{
				pSameNum[retVal][0] = i;
				pSameNum[retVal++][1] = j;
			}
		}
	}

	return retVal;
}

int main() 
{
	int arr1[3][4] = 
	{
		{ 15, 3, 9, 11 }, 
		{ 23, 7, 10, 12 }, 
		{ 0, 17, 55, 24 }
	};

	int arr2[3][4] =
	{
		{ 13, 8, 9, 15 }, 
		{ 23, 0, 10, 11 }, 
		{ 29, 17, 43, 3 }
	};

	int sameNum[12][2];
	int i, cnt;

	cnt = countNum(arr1, arr2, sameNum);

	printf("일치하는 번호의 수: %d\n", cnt);
	printf("배열에서의 위치(행, 열)...\n");

	for (i = 0; i < cnt; ++i)
		printf("(%d, %d)\n", sameNum[i][0], sameNum[i][1]);

	return 0;
}