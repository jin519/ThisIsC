// 649p ���� 19-9 ���� ������ extern�� static�� ����� ���α׷�

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
	printf("�Է��� ����� ����: %d\n", cnt);
	printf("��ü �հ� ���: %d, %.1lf\n", tot, avg);
}