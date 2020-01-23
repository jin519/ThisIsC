#include <stdio.h>

int main(void) 
{
	int income = 0; // 소득액 초기화
	double tax; // 세금
	const double TAX_RATE = 0.12; // 세율 초기화

	income = 456; // 소득액 저장
	tax = income * TAX_RATE; // 세금 계산

	printf("세금은 %.1lf입니다.\n", tax);

	return 0;
}