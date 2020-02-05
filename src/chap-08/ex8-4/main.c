#include <stdio.h>

int main()
{
	int score[5];
	int i;
	int tot = 0;
	double avg;
	int cnt = (int)(sizeof(score) / sizeof(score[0]));

	for (i = 0; i < cnt; ++i)
	{
		scanf_s("%d", &score[i]);
		printf("%d ", score[i]);

		tot += score[i];
	}

	avg = ((double)tot / 5.0);

	printf("ЦђБе: %.1lf\n", avg);

	return 0;
}