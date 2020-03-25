// 568p ���� ���� ���� 3��

#include <stdio.h>

#define COUNT 5

typedef struct Student 
{
	int id; 
	char name[20];
	int kor;
	int eng;
	int math;
	int total;
	double average;
	char grade;
}Student;

void inputData(Student* students);
int getTotal(int kor, int eng, int math);
double calcAverage(int total, int size);
char getGrade(double avg);
void sortData(Student* students);
void printData(Student* students);

int main() 
{
	Student students[COUNT] = { 0 };

	inputData(students);

	puts("\n# ���� �� ������...");
	printData(students);

	sortData(students);

	puts("\n# ���� �� ������...");
	printData(students);

	return 0; 
}

void inputData(Student* students)
{
	for (int i = 0; i < COUNT; ++i)
	{
		Student* pStudent = (students + i);

		fputs("�й�: ", stdout);
		scanf_s("%d", &(pStudent->id));
		fputs("�̸�: ", stdout);
		scanf_s(" %s", pStudent->name, (unsigned int)sizeof(pStudent->name));
		fputs("����, ����, ���� ����: ", stdout);
		scanf_s("%d%d%d", &(pStudent->kor), &(pStudent->eng), &(pStudent->math));

		pStudent->total = getTotal(pStudent->kor, pStudent->eng, pStudent->math);
		pStudent->average = calcAverage(pStudent->total, 3);
		pStudent->grade = getGrade(pStudent->average);
	}
}

int getTotal(int kor, int eng, int math)
{
	return (kor + eng + math);
}

double calcAverage(int total, int size)
{
	return ((double)total / (double)size);
}

char getGrade(double avg)
{
	if (avg >= 90.0)
		return 'A';
	if (avg >= 80.0)
		return 'B';
	if (avg >= 70.0)
		return 'C';

	return 'F';
}

void sortData(Student* students) 
{
	for (int i = 0; i < (COUNT - 1); ++i) 
	{
		for (int j = (i + 1); j < COUNT; ++j)
		{
			if (students[i].average < students[j].average)
			{
				Student tmp = students[j];
				students[j] = students[i];
				students[i] = tmp;
			}
		}
	}
}

void printData(Student* students) 
{
	for (int i = 0; i < COUNT; ++i)
	{
		Student* pStudent = (students + i);
		printf("%d %s %d %d %d %d %.1lf %c\n",
			pStudent->id,
			pStudent->name,
			pStudent->kor, pStudent->eng, pStudent->math,
			pStudent->total,
			pStudent->average,
			pStudent->grade);
	}
}