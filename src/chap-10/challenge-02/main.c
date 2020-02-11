// 313p 도전 실전 예제 2번

#include <stdio.h>

int checkSame(int* lottoNums, int* myNums) 
{
	int retVal = 0;

	for (int i = 0; i < 6; ++i) 
		for (int j = 0; j < 6; ++j)
		{
			if (myNums[j] == -1)
				continue;

			if (lottoNums[i] == myNums[j])
			{
				++retVal;
				myNums[j] = -1;
			}
		}

	return retVal;
}

int main() 
{
	int lottoNums[] = { 4, 10, 25, 30, 41, 45 };
	int myNums[] = { 1, 4, 7, 22, 41, 43 };

	printf("일치하는 번호의 개수: %d\n", checkSame(lottoNums, myNums));

	return 0;
}