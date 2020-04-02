// 645p 예제 19-8 두 정수의 평균을 구하는 프로그램

#include <stdio.h>

void inputData(int* pa, int* pb);
double average(int a, int b);

int main()
{
	int a, b;
	double avg;

	inputData(&a, &b);
	avg = average(a, b);

	printf("%d와 %d의 평균: %.1lf\n", a, b, avg);

	return 0;
}