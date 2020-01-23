#include <stdio.h>

int main(void) 
{
	const int KOR = 70, ENG = 80, MATH = 90;
	const int TOTAL = (KOR + ENG + MATH);

	printf("국어: %d, 영어: %d, 수학: %d\n", KOR, ENG, MATH);
	printf("총점: %d", TOTAL);

	return 0;
}