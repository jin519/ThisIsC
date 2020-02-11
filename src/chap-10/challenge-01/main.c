// 313p 도전 실전 예제 1번

#include <stdio.h>

void printGraph(int* pScore, int size) 
{
	for (int i = 0; i < size; ++i) 
	{
		const int CURRENT_SCORE = pScore[i];
		const int STAR_SIZE = (CURRENT_SCORE / 5);

		printf("(%3d)", CURRENT_SCORE);

		for (int j = 0; j < STAR_SIZE; ++j)
			printf("*");

		printf("\n");
	}
}

int main() 
{
	int score[] = { 72, 88, 95, 64, 100 };
	const int SCORE_SIZE = (int)(sizeof(score) / sizeof(score[0]));

	printGraph(score, SCORE_SIZE);

	return 0;
}