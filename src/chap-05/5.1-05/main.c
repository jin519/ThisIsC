#include <stdio.h>

int main(void) 
{
	const int TOTAL = 259;
	const float AVG = ((float)TOTAL / 3.f);
	char grade;

	if (AVG >= 90.f)
		grade = 'A';
	else if (AVG >= 80.f)
		grade = 'B';
	else if (AVG >= 70.f)
		grade = 'C';
	else
		grade = 'F';

	printf("Æò±Õ: %.1f ÇÐÁ¡: %c\n", AVG, grade);

	return 0;
}