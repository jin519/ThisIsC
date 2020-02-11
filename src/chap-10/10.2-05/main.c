// 311p 연습문제 5번

#include <stdio.h>

void swap(double* x, double* y)
{
	double tmp = *x;
	*x = *y;
	*y = tmp;
}

void reverse(double* arr, int size) 
{
	const int IDX_END = (size - 1);
	double* pStart = arr;
	double* pEnd = (arr + IDX_END);

	while (pStart < pEnd) 
	{
		swap(pStart, pEnd);
		++pStart;
		--pEnd;
	}
}

void prtArr(double* arr, int size) 
{
	for (int i = 0; i < size; ++i)
		printf("%.1lf ", arr[i]);

	printf("\n");
}

int main() 
{
	double arr[] = { 1.5, 20.1, 16.4, 2.3, 3.5 };
	const int ARR_SIZE = (int)(sizeof(arr) / sizeof(arr[0]));

	printf("배열 요소의 값: ");
	prtArr(arr, ARR_SIZE);

	reverse(arr, ARR_SIZE);

	printf("호출 후 바뀐 배열 요소의 값: ");
	prtArr(arr, ARR_SIZE);

	return 0;
}