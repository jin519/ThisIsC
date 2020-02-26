// 423p 예제 14-4 2차원 char 배열에 동물 이름을 초기화하는 방법

#include <stdio.h>

int main()
{
	char animal1[5][10] = 
	{ 
		{'c', 'a', 't', '\0' },
		{'h', 'o', 'r', 's', 'e', '\0' },
		{'d', 'o', 'g', '\0' },
		{'t', 'i', 'g', 'e', 'r', '\0' },
		{'e', 'l', 'e', 'p', 'h', 'a', 'n', 't', '\0' },
	};

	char animal2[][10] = { "cat", "horse", "dog", "tiger", "elephant" };

	for (int i = 0; i < 5; ++i)
		printf("%s ", animal1[i]);

	printf("\n");

	for (int i = 0; i < 5; ++i)
		printf("%s ", animal2[i]);

	return 0;
}