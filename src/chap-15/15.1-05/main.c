// 465p �������� 5��

#include <stdio.h>

void inputStr(char(*pStrArr)[80]) 
{
	puts("�ټ� ���� ������ �Է��ϼ���.");

	for (int i = 0; i < 5; ++i)
		gets_s(pStrArr[i], 80);
}

void printStr(char(*pStrArr)[80]) 
{
	puts("�Էµ� ������...");

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