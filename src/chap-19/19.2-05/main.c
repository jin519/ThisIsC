// 659p �������� 5��

#include <stdio.h>
#include "func.h"

char grd; 

int main() 
{
	int kor, eng, math, tot; 
	double avg; 
	
	inputScore(&kor, &eng, &math);
	tot = total(kor, eng, math);
	avg = grade(tot);

	printf("���: %.1lf, ����: %c\n", avg, grd);

	return 0;
}