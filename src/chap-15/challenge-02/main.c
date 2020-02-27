// 481p ���� ���� ���� 2��

#include <stdio.h>
#include <string.h>

void inputProfiles(int* pAge, double *pHeight) 
{
	fputs("ù ��° ����� ���̿� Ű �Է�: ", stdout);
	scanf_s("%d%lf", pAge, pHeight);

	fputs("�� ��° ����� ���̿� Ű �Է�: ", stdout);
	scanf_s("%d%lf", (pAge + 1), (pHeight + 1));
}

void swap(const char* type, void* a, void* b)
{
	if (!strcmp(type, "int")) 
	{
		int tmp = *(int*)a;
		*(int*)a = *(int*)b;
		*(int*)b = tmp;
	}
	
	if (!strcmp(type, "double")) 
	{
		double tmp = *(double*)a;
		*(double*)a = *(double*)b;
		*(double*)b = tmp;
	}
}

void printProfiles(int* pAge, double* pHeight)
{
	printf("ù��° ����� ���̿� Ű: %d, %.1lf\n", pAge[0], pHeight[0]);
	printf("�ι�° ����� ���̿� Ű: %d, %.1lf\n", pAge[1], pHeight[1]);
}

int main()
{
	int age[2];
	double height[2];

	inputProfiles(age, height);

	swap("int", age, (age + 1));
	swap("double", height, (height + 1));

	printProfiles(age, height);

	return 0;
}