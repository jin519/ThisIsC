#include <stdio.h>

void swap(double* pa, double* pb);
void lineUp(double* maxP, double* midP, double* minP);

int main() 
{
	double max, mid, min;

	printf("�Ǽ��� �� �� �Է�: ");
	scanf_s("%lf%lf%lf", &max, &mid, &min);
	
	lineUp(&max, &mid, &min);

	printf("���ĵ� �� ���: %.1lf, %.1lf, %.1lf\n", max, mid, min);

	return 0;
}

void swap(double* pa, double* pb) 
{
	double tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void lineUp(double* maxP, double* midP, double* minP) 
{
	if (*maxP < *midP) 
		swap(maxP, midP);
	if (*maxP < *minP)
		swap(maxP, minP);
	if (*midP < *minP)
		swap(midP, minP);
}
