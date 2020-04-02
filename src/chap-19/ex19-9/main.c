// 649p 예제 19-9 전역 변수에 extern과 static을 사용한 프로그램

#include <stdio.h>

int inputData();
double average();
void printData(double avg);

int cnt = 0; 
static int tot = 0; 

int main()
{
	double avg; 

	tot = inputData();
	avg = average(); 
	printData(avg);

	return 0;
}

void printData(double avg) 
{
	printf("입력한 양수의 개수: %d\n", cnt);
	printf("전체 합과 평균: %d, %.1lf\n", tot, avg);
}