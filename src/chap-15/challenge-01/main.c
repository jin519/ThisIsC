// 481p ���� ���� ���� 1��

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool checkDuplication(const char(*pName)[20], const char* pInput, int cnt)
{
	for (int i = 0; i < cnt; ++i) 
	{
		if (!strcmp(pName[i], pInput))
		{
			puts("# �̸��� �̹� ��ϵǾ����ϴ�!");
			return true;
		}
	}

	return false;
}

int inputName(char(*pName)[20]) 
{
	int cnt = 0;
	char input[20] = { '\0' };

	do 
	{
		fputs("�̸�: ", stdout);
		scanf_s("%s", input, (unsigned int)sizeof(input));
		
		if (!strcmp(input, "end"))
			break;

		if (!checkDuplication(pName, input, cnt))
			strcpy_s(pName[cnt++], sizeof(*pName), input);
	} 
	while (cnt < 10);

	return cnt;
}

void printName(const char(*pName)[20], int cnt) 
{
	printf("# �� %d���� �ԷµǾ����ϴ�.\n", cnt);

	for (int i = 0; i < cnt; ++i)
		printf("%s\n", pName[i]);
}

int main() 
{
	char name[10][20];
	int cnt;

	cnt = inputName(name);
	printName(name, cnt);

	return 0;
}