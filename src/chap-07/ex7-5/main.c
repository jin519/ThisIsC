#include <stdio.h>

void fruit(void);

int main() 
{
	fruit();

	return 0;
}

void fruit(void) 
{
	puts("apple");
	fruit();
}