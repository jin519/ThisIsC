// 527p ���� 17-3 �ٸ� ����ü�� ����� ���� ����ü ���

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

	printf("����: %d\n", student.profile.age);
	printf("Ű: %.1lf\n", student.profile.height);
	printf("�й�: %d\n", student.id);
	printf("����: %.1lf\n", student.grade);

	return 0;
}