// 421p ���� 14-3 ���� ���� ���� �̸��� ������ϴ� ���α׷�

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