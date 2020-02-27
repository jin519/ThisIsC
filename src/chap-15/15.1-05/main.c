// 465p 연습문제 5번

#include <stdio.h>

void inputStr(char(*pStrArr)[80]) 
{
	puts("다섯 개의 문장을 입력하세요.");

	for (int i = 0; i < 5; ++i)
		gets_s(pStrArr[i], 80);
}

void printStr(char(*pStrArr)[80]) 
{
	puts("입력된 문장은...");

	for (int i = 0; i < 5; ++i)
		printf("%s\n", pStrArr[i]);
}

int main()
{
	char strArr[5][80];

	inputStr(strArr);
	printStr(strArr);

	return 0;
}