// 311p 연습문제 2번

#include <stdio.h>

int count31DateMonth(const int* month, const int size) 
{
	int retVal = 0;

	for (int i = 0; i < size; ++i) 
		if (month[i] == 31)
			++retVal;

	return retVal;
}

int main() 
{
	const int MONTH[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	const int SIZE = (int)(sizeof(MONTH) / sizeof(MONTH[0]));

	printf("총 일수가 31일인 달의 개수: %d\n", count31DateMonth(MONTH, SIZE));

	return 0;
}