#include <stdio.h>

int get_pos(void);

int main() 
{
	int res;

	res = get_pos();

	printf("��ȯ��: %d\n", res);

	return 0;
}

int get_pos(void) 
{
	int pos;

	printf("��� �Է�: ");
	scanf_s("%d", &pos);

	return pos;
}