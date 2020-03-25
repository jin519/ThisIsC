// 567p ���� ���� ���� 2��

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_COUNT 100

typedef struct 
{
	int id;
	char name[20];
	double weight; 
}Member;

int inputMember(Member** pList);
double averageWeight(Member** pList, int count);
int maxWeight(Member** pList, int count);
void printInfo(Member** pList, int index);
void freeArr(Member** pList, int count);

int main() 
{
	Member* pList[MAX_COUNT] = { NULL };

	const int COUNT = inputMember(pList);
	printf("# �� ȸ�� ��: %d\n", COUNT);

	const double AVG_WEIGHT = averageWeight(pList, COUNT);
	printf("# ��� ü��: %.1lf\n", AVG_WEIGHT);

	puts("# ü���� ���� ���ſ� ȸ����? "); 
	const int INDEX = maxWeight(pList, COUNT);
	printInfo(pList, INDEX);

	freeArr(pList, COUNT);

	return 0; 
}

int inputMember(Member** pList)
{
	int count = 0; 

	do
	{
		fputs("ȸ�� ��ȣ: ", stdout); 
		int id; 
		scanf_s("%d", &id); 

		if (id == -1)
			break;

		Member* pMember = malloc(sizeof(Member));
		
		if (!pMember)
			exit(1);

		pMember->id = id; 

		fputs("�̸� �Է�: ", stdout);
		scanf_s(" %s", pMember->name, (unsigned int)sizeof(pMember->name));

		fputs("ü�� �Է�: ", stdout);
		scanf_s("%lf", &(pMember->weight));

		pList[count] = pMember;
	} 
	while (++count);

	return count; 
}

double averageWeight(Member** pList, int count) 
{
	double sum = 0.0;

	for (int i = 0; i < count; ++i) 
		sum += pList[i]->weight; 

	return (sum / (double)count);
}

int maxWeight(Member** pList, int count) 
{
	int maxIndex = 0; 

	for (int i = 1; i < count; ++i) 
	{
		if (pList[maxIndex]->weight < pList[i]->weight)
			maxIndex = i;
	}

	return maxIndex; 
}

void printInfo(Member** pList, int index) 
{
	Member* pMember = pList[index]; 

	printf("ȸ�� ��ȣ: %d\n", pMember->id);
	printf("�̸�: %s\n", pMember->name);
	printf("ü��: %.1lf\n", pMember->weight);
}

void freeArr(Member** pList, int count) 
{
	for (int i = 0; i < count; ++i)
	{
		free(pList[i]);
		pList[i] = NULL;
	}
}