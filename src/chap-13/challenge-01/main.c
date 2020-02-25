// 408p 도전 실전 예제 1번

#include <stdio.h>

int a, b;

void inputData(int* pa, int* pb) 
{
	fputs("두 정수 입력: ", stdout);

	scanf_s("%d", pa);
	scanf_s("%d", pb);
}

void swapData() 
{
	int tmp;

	tmp = a;
	a = b;
	b = tmp;
}

void printData(int a, int b) 
{
	printf("두 정수 출력: %d, %d\n", a, b);
}

int main() 
{
	inputData(&a, &b);
	swapData();
	printData(a, b);

	return 0;
}