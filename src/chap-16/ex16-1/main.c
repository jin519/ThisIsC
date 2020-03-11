#include <stdio.h>
#include <stdlib.h>

int main() 
{
	int* pi;
	double* pd;

	pi = (int*)malloc(sizeof(int));

	if (pi == NULL) 
	{
		puts("#���� �޸𸮰� �����մϴ�.");
		exit(1);
	}

	pd = (double*)malloc(sizeof(double));

	if (pd == NULL) 
	{
		puts("#���� �޸𸮰� �����մϴ�.");
		exit(1);
	}

	*pi = 10;
	*pd = 3.4;

	printf("���������� ���: %d\n", *pi);
	printf("�Ǽ������� ���: %.1lf\n", *pd);

	free(pi);
	free(pd);

	return 0;
}