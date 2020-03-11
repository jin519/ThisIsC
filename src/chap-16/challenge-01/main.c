// 517p 도전 실전 예제 1번

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

#define OFFSET 3

bool mallocDonors(char*** pName, int** pDonation) 
{
	*pName = malloc(sizeof(char*) * OFFSET);

	if (!*pName)
		return false;

	*pDonation = malloc(sizeof(int) * OFFSET);

	if (!*pDonation)
		return false;

	return true;
}

bool inputName(char** pName, const size_t index) 
{
	char tmp[50];

	fputs("이름: ", stdout);
	gets_s(tmp, sizeof(tmp));

	if (!strcmp(tmp, "end"))
		return false;

	const size_t SIZE = (strlen(tmp) + 1);

	pName[index] = malloc(sizeof(char) * SIZE);

	if (!pName[index])
		return false;

	strcpy_s(pName[index], SIZE, tmp);

	return true;
}

void inputDonation(int* pDonation, const size_t index) 
{
	fputs("기부금: ", stdout);
	scanf_s("%d", (pDonation + index));
}

bool reallocDonors(char*** pName, int** pDonation, const size_t index, const size_t offset) 
{
	char** pTmp1 = *pName;
	*pName = realloc(*pName, sizeof(char*) * (index + offset));

	if (!*pName)
		return false;

	int* pTmp2 = *pDonation;
	*pDonation = realloc(*pDonation, sizeof(int) * (index + offset));

	if (!*pDonation)
		return false;

	return true;
}

void printDonors(const char* const* const pName, const int* const pDonation, const size_t index) 
{
	for (int i = 0; i < index; ++i)
		printf("%d. %s %d\n", i + 1, pName[i], pDonation[i]);
}

int calcAvg(const int* const pDonation, const size_t index) 
{
	int total = 0;

	for (size_t i = 0; i < index; ++i)
		total += pDonation[i];

	return (int)((float)total / (float)index);
}

int main() 
{
	char** pName = NULL;
	int* pDonation = NULL;

	if (!mallocDonors(&pName, &pDonation))
		exit(1);

	size_t index = 0;
	int total = 0;

	do  
	{
		if (!inputName(pName, index))
			break;

		inputDonation(pDonation, index);

		while (getchar() != '\n');

		++index;

		if (!(index % OFFSET))
			if (!reallocDonors(&pName, &pDonation, index, OFFSET))
				break;
	}
	while (true);

	printDonors(pName, pDonation, index);
	printf("평균 기부액: %d\n", calcAvg(pDonation, index));

	return 0;
}