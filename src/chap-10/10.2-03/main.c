// 311p �������� 3��

#include <stdio.h>

void modifyDate(int* month, int idx, int date) 
{
	month[idx] = date;
}

int main()
{
	int month[] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

	printf("2�� �ϼ�: %d\n", month[1]);

	modifyDate(month, 1, 29);

	printf("����� 2�� �ϼ�: %d\n", month[1]);

	return 0;
}