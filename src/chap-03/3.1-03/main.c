#include <stdio.h>

int main(void) 
{
	const int KOR = 70, ENG = 80, MATH = 90;
	const int TOTAL = (KOR + ENG + MATH);

	printf("����: %d, ����: %d, ����: %d\n", KOR, ENG, MATH);
	printf("����: %d", TOTAL);

	return 0;
}