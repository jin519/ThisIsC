// 385p ���� 13-2 ��� �ȿ� ���� ������ ����Ͽ� �� ������ ��ȯ�ϴ� ���α׷�

#include <stdio.h>

int main()
{
	int a = 10, b = 20;

	printf("��ȯ �� a�� b�� ��: %d, %d\n", a, b);

	{
		int tmp;

		tmp = a;
		a = b;
		b = tmp;
	}

	printf("��ȯ �� a�� b�� ��: %d, %d\n", a, b);

	return 0;
}