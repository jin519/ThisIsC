// 454p 예제 15-3 포인터 배열의 값을 출력하는 함수 

#include <stdio.h>

void printStr(char** pps, int size) 
{
	for (int i = 0; i < size; ++i) 
		printf("%s\n", pps[i]);
}

int main()
{
	char* ptrArr[] = { "eagle", "tiger", "lion", "squirrel" };
	const int SIZE = (int)(sizeof(ptrArr) / sizeof(ptrArr[0]));
		
	printStr(ptrArr, SIZE);

	return 0;
}