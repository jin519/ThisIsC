// 659p 연습문제 5번

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

	printf("평균: %.1lf, 학점: %c\n", avg, grd);

	return 0;
}