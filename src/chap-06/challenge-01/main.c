#include <stdio.h>

int main() 
{
	const int ANSWER = 19;
	int input = 0;
	int count = 0;

	do 
	{
		printf("숫자 입력(1부터 30까지): ");
		scanf_s("%d", &input);
		
		++count;

		if (ANSWER > input)
			printf("%d보다 큽니다!\n", input);
		else if (ANSWER < input)
			printf("%d보다 작습니다!\n", input);
		else
			printf("정답입니다!\n");

	} while (ANSWER != input);

	printf("시도한 횟수는 %d회 입니다.\n", count);

	return 0;
}