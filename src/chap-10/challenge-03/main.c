// 314p 도전 실전 예제 3번

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
		printf("번호 입력: ");
		
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

	puts("1 ~ 45 사이 숫자를 입력하세요!");

	return false;
}

bool checkDuplicates(int* pArr, int idx, int num) 
{
	for (int i = 0; i <= idx; ++i) 
		if (pArr[i] == num)
		{
			puts("같은 번호가 있습니다!");

			return true;
		}

	return false;
}

void printNums(int* pArr, int size)
{
	printf("로또 번호: ");

	for (int i = 0; i < size; ++i)
		printf("%d ", pArr[i]);
}