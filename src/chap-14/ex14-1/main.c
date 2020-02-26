// 413p 예제 14-1 3명 학생의 네 과목 총점과 평균을 구하는 프로그램

#include <stdio.h>

int main() 
{
	int score[3][4];
	int tot;
	double avg;
	
	for (int i = 0; i < 3; ++i) 
	{
		printf("네 과목의 점수 입력: ");

		for (int j = 0; j < 4; ++j)
			scanf_s("%d", &score[i][j]);

	}

	for (int i = 0; i < 3; ++i) 
	{
		tot = 0;

		for (int j = 0; j < 4; ++j)
			tot += score[i][j];

		avg = ((double)tot / 4.0);

		printf("총점: %d, 평균: %.2lf\n", tot, avg);
	}

	return 0;
}