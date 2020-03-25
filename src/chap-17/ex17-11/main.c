// 552p 예제 17-11 공용체를 사용한 학번과 학점 데이터 처리

#include <stdio.h>

union Student 
{
	int num;
	double grade;
};

int main() 
{
	union Student s1 = { 315 };

	printf("학번: %d\n", s1.num);
	
	s1.grade = 4.4;
	printf("학점: %.1lf\n", s1.grade);

	printf("학번: %d\n", s1.num);

	return 0;
}