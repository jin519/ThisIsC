// 537p �������� 2��

#include <stdio.h>

struct Cracker 
{
	int price;
	int calories;
};

int main()
{
	struct Cracker cracker;

	fputs("�ٻ���� ���ݰ� ������ �Է��ϼ���: ", stdout);
	scanf_s("%d%d", &cracker.price, &cracker.calories);

	printf("�ٻ���� ����: %d��\n", cracker.price);
	printf("�ٻ���� ����: %dkal\n", cracker.calories);

	return 0;
}