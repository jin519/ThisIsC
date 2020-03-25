// 543p 예제 17-7 구조체 포인터의 사용

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

	printf("국어: %d\n", ps->kor);
	printf("영어: %d\n", ps->eng);
	printf("수학: %d\n", ps->mat);

	return 0;
}