// 556p ���� 17-13 typedef�� ����� �ڷ��� ������

#include <stdio.h>

struct Student 
{
	int num;
	double grade;
};

typedef struct Student Student;

void printData(Student* ps) 
{
	printf("�й�: %d\n", ps->num);
	printf("����: %.1lf\n", ps->grade);
}

int main()
{
	Student s1 = { 345, 4.2 };
	printData(&s1);

	return 0;
}