// 618p 도전 실전 예제 2번

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define MAX_DICT 10
#define MAX_WORD 21

FILE* const openFile(const char* fileName, const char* mode) 
{
	FILE* pStream = NULL;
	fopen_s(&pStream, fileName, mode);

	if (!pStream)
	{
		fprintf(stderr, "%s 파일을 열 수 없습니다.\n", fileName);
		exit(1);
	}

	return pStream;
}

int readDict(FILE* pDictStream, char (*dict)[MAX_WORD])
{
	int cnt = 0;

	while (fscanf_s(pDictStream, "%s", dict[cnt++], (unsigned int)sizeof(dict[0])) != EOF);

	return cnt;
}

bool checkDuplication(char(*dict)[MAX_WORD], const int dictSize, const char* word) 
{
	for (int i = 0; i < dictSize; ++i)
		if (!strcmp(dict[i], word))
			return true;

	return false;
}

int main() 
{
	FILE* pDictStream = openFile("a.txt", "rt");
	
	char dict[MAX_DICT][MAX_WORD] = { '\0' };
	const int DICT_SIZE = readDict(pDictStream, dict);

	FILE* pInputStream = openFile("b.txt", "rt");
	char word[MAX_WORD] = { '\0' };

	FILE* pOutputStream = openFile("c.txt", "wt");

	while (fscanf_s(pInputStream, "%s", word, (unsigned int)sizeof(word)) != EOF) 
	{
		if (!checkDuplication(dict, DICT_SIZE, word))
			fprintf(pOutputStream, "%s\n", word);
	}

	_fcloseall();

	return 0;
}