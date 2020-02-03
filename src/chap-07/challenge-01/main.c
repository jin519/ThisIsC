#include <stdio.h>

int total(int kor, int eng, int mat); // 세 과목의 점수를 넘겨받아 총점 반환
double average(int tot); // 총점을 넘겨받아 평균 반환
void print_title(void); // 점수를 제외한 나머지 부분 출력

int main() 
{
	int kor, eng, mat;

	printf("# 세 과목의 점수 입력: ");
	scanf_s("%d%d%d", &kor, &eng, &mat);

	print_title();

	const int TOTAL = total(kor, eng, mat);
	const double AVG = average(TOTAL);

	printf("%4d %4d %4d %4d %4.1lf\n", kor, eng, mat, TOTAL, AVG);

	return 0;
}

int total(int kor, int eng, int mat) 
{
	return (kor + eng + mat);
}

double average(int tot) 
{
	return ((double)tot / 3.0);
}

void print_title(void) 
{
	puts("=====< 성적표 >=====\n");

	puts("----------------------------");
	puts("국어 영어 수학 총점 평균");
	puts("----------------------------");
}