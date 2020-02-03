#include <stdio.h>

int rec_func(int n); // 1부터 n까지의 합을 반환하는 함수

int main() 
{
	printf("%d\n", rec_func(10));

	return 0;
}

int rec_func(int n) 
{
	if (n <= 0)
		return 0;

	return (n + rec_func(n - 1));
}