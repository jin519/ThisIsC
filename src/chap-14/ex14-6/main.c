// 433p ���� 14-6 ������ �迭�� ���� ���� ���ڿ� ���

#include <stdio.h>

int main() 
{
	char* pArr[5];
	int i;

	pArr[0] = "dog";
	pArr[1] = "elephant";
	pArr[2] = "horse";
	pArr[3] = "tiger";
	pArr[4] = "lion";

	for (i = 0; i < 5; ++i)
		printf("%s\n", pArr[i]);

	return 0;
}