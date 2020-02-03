#include <stdio.h>

int get_pos(void);

int main() 
{
	int res;

	res = get_pos();

	printf("반환값: %d\n", res);

	return 0;
}

int get_pos(void) 
{
	int pos;

	printf("양수 입력: ");
	scanf_s("%d", &pos);

	return pos;
}