// 529p ���� 17-4 �ְ� ������ �л� ������ ���

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
		s1 = { 315, "ȫ�浿", 2.4 }, 
		s2 = { 316, "�̼���", 3.7 }, 
		s3 = { 317, "�������", 4.4 };

	struct Student max = s1;

	if (s2.grade > max.grade)
		max = s2;

	if (s3.grade > max.grade)
		max = s3;

	printf("�й�: %d\n", max.id);
	printf("�̸�: %s\n", max.name);
	printf("����: %.1lf\n", max.grade);

	return 0;
}