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

	fputs("�ְ� ��°� ���� ����� �Է��ϼ���: ", stdout);
	scanf_s("%f%f", pMax, pMin);

	const float DIFF = (*pMax - *pMin);

	printf("�ϱ����� %.1f�� �Դϴ�.\n", DIFF);

	free(pMax);
	free(pMin);

	return 0;
}