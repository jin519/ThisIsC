// 433p 예제 14-6 포인터 배열로 여러 개의 문자열 출력

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