#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) 
{
	const int COUNT = atoi(argv[2]);

	if (!COUNT)
	{
		puts("���α׷� ���� �����Դϴ�.");
		exit(1);
	}

	for (int i = 0; i < COUNT; ++i)
		printf("%s\n", argv[1]);

	return 0;
}