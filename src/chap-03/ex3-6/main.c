#include <stdio.h>

int main(void) 
{
	float ft = 1.234567890123456789; // ��ȿ���ڰ� ���� ������ �ʱ�ȭ
	double db = 1.234567890123456789;

	printf("float�� ������ ��: %.20f\n", ft);
	printf("double�� ������ ��: %.20lf\n", db);

	return 0;
}