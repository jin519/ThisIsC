// 518p ���� ���� ���� 3��

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_INDEX 100

bool checkEnd(const char* const pInput) 
{
	if (!strcmp(pInput, "end"))
		return true;

	return false;
}

bool checkDuplication(const char** pWords, const char* const pInput) 
{
	while (*pWords)
	{
		if (!strcmp(*pWords++, pInput))
			return true;
	}

	return false; 
}

bool checkChain(const char** pWord, const int index, const char* pFirst)
{
	const char* pLast = pWord[index - 1];

	if (!index || (pLast[strlen(pLast) - 1] == pFirst[0]))
		return true;

	return false;
}

void printWords(const char* const* const pWord, const int index) 
{
	for (int i = 0; i < index; ++i)
		printf("%s ", pWord[i]);
}

int main()
{
	char* pWords[MAX_INDEX] = { NULL };
	int index = 0;
	
	do 
	{
		char input[50] = { '\0' };

		fputs("�ܾ� �Է�: ", stdout);
		scanf_s(" %s", input, (unsigned int)sizeof(input));

		if (checkEnd(input))
			break;

		if (checkDuplication(pWords, input)) 
		{
			puts("# �̹� �����ϴ� �ܾ��Դϴ�!");
			continue;
		}

		if (!checkChain(pWords, index, input)) 
		{
			puts("# �ܾ� �ձⰡ �Ұ����մϴ�!");
			continue;
		}

		const size_t SIZE = (sizeof(char) * (strlen(input) + 1));

		pWords[index] = malloc(SIZE);
		char* pTmp = pWords[index++];

		if (!pTmp)
			break;

		strcpy_s(pTmp, SIZE, input);
	} 
	while (index < 100);

	printWords(pWords, index);

	return 0;
}