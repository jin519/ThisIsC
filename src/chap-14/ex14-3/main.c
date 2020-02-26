// 421p 예제 14-3 여러 개의 동물 이름을 입출력하는 프로그램

#include <stdio.h>

int main()
{
	char animal[5][10];
	size_t count = (sizeof(animal) / sizeof(animal[0]));

	for (size_t i = 0; i < count; ++i)
		scanf_s("%s", animal[i], (unsigned int)sizeof(animal[0]));

	for (size_t i = 0; i < count; ++i)
		printf("%s ", animal[i]);

	return 0;
}