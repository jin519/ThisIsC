// 311p 연습문제 3번

#include <stdio.h>

void modifyDate(int* month, int idx, int date) 
{
	month[idx] = date;
}

int main()
{
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("2월 일수: %d\n", month[1]);

	modifyDate(month, 1, 29);

	printf("변경된 2월 일수: %d\n", month[1]);

	return 0;
}