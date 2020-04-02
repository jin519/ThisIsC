// 641p 연습문제 5번

#include <stdio.h>

#define CHECK_CNT
#define LEVEL 2

int main()
{
	int cnt = 0;

	fputs("양수의 개수: ", stdout);
	scanf_s("%d", &cnt); 

#ifdef CHECK_CNT
	printf("입력한 개수: %d\n", cnt); 
#endif

	int sum = 0; 
	float avg = 0.f;

	for (int i = 1; i <= cnt; ++i) 
	{
		int num = 0; 

		fputs("양수 입력: ", stdout);
		scanf_s("%d", &num);

		sum += num; 

		printf("양수의 개수: %d, 누적된 값: %d\n", i, sum);

#if (LEVEL == 2)
		avg = ((float)sum / (float)i);
		printf("현재 입력 값 평균: %.1lf\n", avg);
#endif
	}

	printf("전체 입력 값의 평균: %.1f\n", avg);

	return 0;
}