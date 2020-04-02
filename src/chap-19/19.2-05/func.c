#include <stdio.h>
#include "func.h"

void inputScore(int* kor, int* eng, int* math)
{
	printf("세 과목의 점수를 입력하세요: ");
	scanf_s("%d%d%d", kor, eng, math);
}

int total(int kor, int eng, int math)
{
	return (kor + eng + math);
}

double grade(int total)
{
	double retVal = ((double)total / 3.0);

	if (retVal >= 90.0)
		grd = 'A';
	else if (retVal >= 80.0)
		grd = 'B';
	else if (retVal >= 70.0)
		grd = 'C';
	else
		grd = 'F';

	return retVal;
}