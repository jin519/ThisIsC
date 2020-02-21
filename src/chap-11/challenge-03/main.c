// 342p 도전 실전 예제 3번

#include <stdio.h>
#include <stdbool.h>

int main() 
{
	char numArr[11] = { '\0' };
	int input, index = 0;
	const int MAX_INDEX = (int)(sizeof(numArr) / sizeof(numArr[0]));

	while (((input = getchar()) != '\n') && index < MAX_INDEX)
		numArr[index++] = (char)input;

	int total = 0;
	int ratio = 1;

	do 
	{
		--index;

		if (index < 0)
			break;

		const int NUM = ((int)numArr[index] - '0');

		total += (NUM * ratio);
		ratio *= 10;
	
	} while (true);

	printf("%d\n", (total + 10));

	return 0;
}