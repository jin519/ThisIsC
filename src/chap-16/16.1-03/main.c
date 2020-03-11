#include <stdio.h>
#include <stdlib.h>

int main() 
{
	float* pMax = (float*)malloc(sizeof(float));

	if (!pMax)
		exit(1);

	float* pMin = (float*)malloc(sizeof(float));

	if (!pMin)
		exit(1);

	fputs("최고 기온과 최저 기온을 입력하세요: ", stdout);
	scanf_s("%f%f", pMax, pMin);

	const float DIFF = (*pMax - *pMin);

	printf("일교차는 %.1f도 입니다.\n", DIFF);

	free(pMax);
	free(pMin);

	return 0;
}