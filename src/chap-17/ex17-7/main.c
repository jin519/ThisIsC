// 543p ���� 17-7 ����ü �������� ���

#include <stdio.h>

struct Score
{
	int kor;
	int eng;
	int mat;
};

int main()
{
	struct Score yuni = { 90, 80, 70 };
	struct Score* ps = &yuni;

	printf("����: %d\n", ps->kor);
	printf("����: %d\n", ps->eng);
	printf("����: %d\n", ps->mat);

	return 0;
}