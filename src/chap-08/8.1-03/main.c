#include <stdio.h>

int main() 
{
	double arr[5] = { 1.0, 2.1, 3.2, 4.3, 5.4 };
	const int ARR_SIZE = (int)(sizeof(arr) / sizeof(arr[0]));

	for (int i = ARR_SIZE - 1; i >= 0; --i)
		printf("%.1lf ", arr[i]);
		 
	return 0;
}