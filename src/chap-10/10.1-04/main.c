// 299p �������� 4��

#include <stdio.h>

int main() 
{
	float arr[] = { 1.2f, 3.5f, 7.4f, 0.5f, 10.f };
	const int ARR_SIZE = (int)(sizeof(arr) / sizeof(arr[0]));
	float* pArr = arr;
	float total = 0.f;

	printf("�迭 ����� ��: ");
	
	for (int i = 0; i < ARR_SIZE; ++i)
	{
		const float VAL = *(pArr + i);
		
		total += VAL;
		
		printf("%.1f ", VAL);
	}

	printf("\n");

	const float AVG = ((float)total / (float)ARR_SIZE);
	
	printf("���: %.2f\n", AVG);

	return 0;
}