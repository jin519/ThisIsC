// 428p 연습문제 4번

#include <stdio.h>
#include <string.h>

#define SIZE 5

int main()
{
	char fruits[SIZE][20];
	int maxIdx = 0;

	printf("%d개의 과일 이름 입력: ", SIZE);

	for (int i = 0; i < SIZE; ++i) 
	{
		scanf_s("%s", fruits[i], (unsigned int)sizeof(fruits[0]));

		if (strlen(fruits[maxIdx]) < strlen(fruits[i]))
			maxIdx = i;
	}

	printf("길이가 가장 긴 과일 이름은 %s입니다.\n", fruits[maxIdx]);

	return 0;
}