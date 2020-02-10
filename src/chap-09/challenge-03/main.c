#include <stdio.h>
#include <stdbool.h>

void rotate(int* pa, int* pb, int* pc);

int main() 
{
	int a = 1, b = 2, c = 3;
	char ch;

	while(true)
	{
		printf("%d:%d:%d", a, b, c);
		
		scanf_s("%c", &ch, (unsigned int)sizeof(ch));

		if (ch != '\n')
			break;

		rotate(&a, &b, &c);
	}

	return 0;
}

void rotate(int* pa, int* pb, int* pc) 
{
	int tmp;

	tmp = *pc;
	*pc = *pa;
	*pa = *pb;
	*pb = tmp;
}