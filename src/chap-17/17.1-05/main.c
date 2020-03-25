// 538p �������� 5��

#include <stdio.h>

struct Student 
{
	int num;
	char name[20];
	int score[5];
	double avg;
};

struct Student printAvg(struct Student student) 
{
	int sum = 0;
	const size_t SIZE = (sizeof(student.score) / sizeof(student.score[0]));

	printf("�й�: %d\n", student.num);
	printf("�̸�: %s\n", student.name);
	fputs("����: ", stdout);

	for (size_t i = 0; i < SIZE; ++i)
	{
		const int SCORE = student.score[i];
		printf("%d ", SCORE);
		sum += SCORE;
	}

	puts("");
	student.avg = ((double)sum / (double)SIZE);

	return student;
}

int main()
{
	struct Student student = { 315, "ȫ�浿", 82, 93, 74, 90, 65, 0.0 };

	student = printAvg(student);
	printf("���: %.1lf\n", student.avg);

	return 0;
}