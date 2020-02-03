#include <stdio.h>

double centi_to_meter(int value) 
{
	return ((double)value / 100.0);
}

int main() 
{
	printf("%.2lfm\n", centi_to_meter(185));

	return 0;
}