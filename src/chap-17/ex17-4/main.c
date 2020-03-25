// 529p 예제 17-4 최고 학점의 학생 데이터 출력

#include <stdio.h>

struct Student 
{
	int id;
	char name[20];
	double grade;
};

int main() 
{
	struct Student 
		s1 = { 315, "홍길동", 2.4 }, 
		s2 = { 316, "이순신", 3.7 }, 
		s3 = { 317, "세종대왕", 4.4 };

	struct Student max = s1;

	if (s2.grade > max.grade)
		max = s2;

	if (s3.grade > max.grade)
		max = s3;

	printf("학번: %d\n", max.id);
	printf("이름: %s\n", max.name);
	printf("학점: %.1lf\n", max.grade);

	return 0;
}