#include <stdio.h>

void print_char(char ch, int cnt);

int main() 
{
	print_char('@', 5);

	return 0;
}

void print_char(char ch, int cnt)
{
	int i;

	for (i = 0; i < cnt; ++i)
		printf("%c", ch);
}