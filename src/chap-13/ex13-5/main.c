// 392p ���� 13-5 �������� ������ �ݺ����� ����� ��

#include <stdio.h>

int main()
{
	register int i;
	auto int sum = 0;

	for (i = 1; i <= 10000; ++i)
		sum += i;

	printf("%d\n", sum);

	return 0;
}