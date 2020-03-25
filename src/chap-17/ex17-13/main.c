// 556p 예제 17-13 typedef를 사용한 자료형 재정의

#include <stdio.h>

struct Student 
{
	int num;
	double grade;
};

typedef struct Student Student;

void printData(Student* ps) 
{
	printf("학번: %d\n", ps->num);
	printf("학점: %.1lf\n", ps->grade);
}

int main()
{
	Student s1 = { 345, 4.2 };
	printData(&s1);

	return 0;
}