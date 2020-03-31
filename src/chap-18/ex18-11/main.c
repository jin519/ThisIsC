// 610p 예제 18-11 fprintf와 fwrite 함수의 차이

#include <stdio.h>

int main() 
{
	int num = 10;

	FILE* pFile1 = NULL;
	fopen_s(&pFile1, "a.txt", "wt");
	
	if (pFile1)
	{
		fprintf(pFile1, "%d", num);
		fclose(pFile1);
	}

	FILE* pFile2 = NULL;
	fopen_s(&pFile2, "b.txt", "wb");

	if (pFile2)
	{
		fwrite(&num, sizeof(num), 1, pFile2);
		fclose(pFile2);
	}

	fopen_s(&pFile2, "b.txt", "rb");

	if (pFile2) 
	{
		int res = 0;
		
		fread(&res, sizeof(res), 1, pFile2);
		printf("%d", res);
	
		fclose(pFile2);
	}

	return 0;
}