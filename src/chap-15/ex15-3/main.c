// 454p ���� 15-3 ������ �迭�� ���� ����ϴ� �Լ� 

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