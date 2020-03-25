// 563p 연습문제 5번

#include <stdio.h>

typedef struct
{
	char name[20];
	double grade;
	int english;
}Profile;

void inputData(Profile* profile) 
{
	puts("이름, 학점, 영어 점수를 입력하세요.");

	for (int i = 0; i < 5; ++i) 
	{
		Profile* current = (profile + i);
		scanf_s("%s%lf%d", current->name, (unsigned int)sizeof(current->name), &(current->grade), &(current->english)); 
	}
}

void elite(Profile* profile) 
{
	for (int i = 0; i < 5; ++i)
	{
		Profile* current = (profile + i);

		if ((current->grade >= 4.0) && (current->english >= 900))
			printf("[엘.리.트] %s %.1lf %d\n", current->name, current->grade, current->english);
	}
}

int main()
{
	Profile newStaff[5];

	inputData(newStaff);
	elite(newStaff);

	return 0;
}