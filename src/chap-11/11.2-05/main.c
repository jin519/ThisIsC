// 340p 연습문제 5번

#include <stdio.h>

int main()
{
	int input;
	int cnt = 0;

	while ((input = getchar()) != EOF)
	{
		if (input == '\n')
			cnt++;
	}

	printf("엔터 키를 누른 횟수: %d\n", cnt);

	return 0;
}