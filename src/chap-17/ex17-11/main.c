// 552p ���� 17-11 ����ü�� ����� �й��� ���� ������ ó��

#include <stdio.h>

union Student 
{
	int num;
	double grade;
};

int main() 
{
	union Student s1 = { 315 };

	printf("�й�: %d\n", s1.num);
	
	s1.grade = 4.4;
	printf("����: %.1lf\n", s1.grade);

	printf("�й�: %d\n", s1.num);

	return 0;
}