// 314p ���� ���� ���� 3��

#include <stdio.h>
#include <stdbool.h>

void inputNums(int* pArr, int size);
bool checkRange(int num);
bool checkDuplicates(int* pArr, int idx, int num);
void printNums(int* pArr, int size);

int main() 
{
	int lottoNums[6] = { 0 };
	const int SIZE = (int)(sizeof(lottoNums) / sizeof(lottoNums[0]));

	inputNums(lottoNums, SIZE);
	printNums(lottoNums, SIZE);

	return 0;
}

void inputNums(int* pArr, int size) 
{
	int cnt = 0;

	while (cnt < size) 
	{
		printf("��ȣ �Է�: ");
		
		int inputNum;
		scanf_s("%d", &inputNum);

		if (!checkRange(inputNum))
			continue;

		if (!checkDuplicates(pArr, cnt, inputNum))
			pArr[cnt++] = inputNum;
	}
}

bool checkRange(int num) 
{
	if (num >= 1 && num <= 45)
		return true;

	puts("1 ~ 45 ���� ���ڸ� �Է��ϼ���!");

	return false;
}

bool checkDuplicates(int* pArr, int idx, int num) 
{
	for (int i = 0; i <= idx; ++i) 
		if (pArr[i] == num)
		{
			puts("���� ��ȣ�� �ֽ��ϴ�!");

			return true;
		}

	return false;
}

void printNums(int* pArr, int size)
{
	printf("�ζ� ��ȣ: ");

	for (int i = 0; i < size; ++i)
		printf("%d ", pArr[i]);
}