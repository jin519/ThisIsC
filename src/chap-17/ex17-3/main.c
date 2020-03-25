// 527p 예제 17-3 다른 구조체를 멤버로 갖는 구조체 사용

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Profile
{
	int age;
	double height;
};

struct Student 
{
	struct Profile profile;
	int id;
	double grade;
};

int main()
{
	struct Student student;

	student.profile.age = 17;
	student.profile.height = 164.5;
	student.id = 315;
	student.grade = 4.3;

	printf("나이: %d\n", student.profile.age);
	printf("키: %.1lf\n", student.profile.height);
	printf("학번: %d\n", student.id);
	printf("학점: %.1lf\n", student.grade);

	return 0;
}