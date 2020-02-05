#include <stdio.h>

int main() 
{
	int A[3] = { 1, 2, 3 };
	int B[10];
	const int B_SIZE = (int)(sizeof(B) / sizeof(B[0]));

	for (int i = 0; i < B_SIZE; ++i)
	{
		B[i] = A[i % 3];
		printf("%d ", B[i]);
	}

	return 0;
}