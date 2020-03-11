// 517p 도전 실전 예제 2번

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool* createPrimeArr(const int size) 
{
	return calloc(size, sizeof(bool));
}

void checkNonPrime(bool** pPrimeArr, const int size) 
{
	bool* pArr = *pPrimeArr;

	for (int i = 2; i < size; ++i) 
	{
		if (pArr[i])
			continue;

		for (int j = (2 * i); j < size; j += i)
			pArr[j] = true;
	}
}

void printPrime(const bool* const pPrimeArr, const int size) 
{
	int cnt = 1;

	for (int i = 2; i < size; ++i) 
	{
		if (pPrimeArr[i])
			printf("%2c ", 'X');
		else
			printf("%2d ", i);

		if ((cnt++ % 5) == 0)
			puts("");
	}
}

int main()
{
	int num;

	fputs("> 양수 입력: ", stdout);
	scanf_s("%d", &num);

	bool* pPrimeArr = createPrimeArr(num);

	if (!pPrimeArr)
		exit(1);

	checkNonPrime(&pPrimeArr, num);
	printPrime(pPrimeArr, num);

	return 0;
}