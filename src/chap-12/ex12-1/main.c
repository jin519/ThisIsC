// 345p ���� 12-1 ���ڿ� ����� �ּҶ� ����

#include <stdio.h>

int main() 
{
	printf("�ּҰ�: %p\n", "mango");
	printf("ù��° ����: %c\n", *"mango");
	printf("�ι�° ����: %c\n", *("mango" + 1));
	printf("����° ����: %c\n", *("mango" + 2));

	return 0;
}