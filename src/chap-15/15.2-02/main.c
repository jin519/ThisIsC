// 477p �������� 2��

#include <stdio.h>

int main() 
{
	int arr[] = { 10, 20, 30, 40, 50 };
	void* vp = arr;

	printf("����° �迭 ����� ��: %d\n", ((int*)vp)[2]);
}