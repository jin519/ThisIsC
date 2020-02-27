// 478p 연습문제 5번

#include <stdio.h>

void exchange(double* pa, double* pb) 
{
	double tmp;

	tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

void func(void (*fp)(double*, double*), double a, double b) 
{
	printf("a: %.1lf, b: %.1lf\n", a, b);

	fp(&a, &b);

	printf("a: %.1lf, b: %.1lf\n", a, b);
}

int main()
{
	double a = 10.0, b = 20.0;

	func(exchange, a, b);

	return 0;
}