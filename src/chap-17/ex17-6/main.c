// 533p ���� 17-6 ��Ʈ �ʵ� ����ü�� ����� �ڽ� �� ���

#include <stdio.h>

struct Children 
{
	unsigned int son : 2;
	unsigned int daughter : 2; 
	unsigned int pet : 3;
};

int main() 
{
	struct Children children = { 1, 2, 3 };
	int sum;

	printf("struct Children�� ũ��: %llu����Ʈ\n", sizeof(children));
	
	sum = (children.son + children.daughter + children.pet);
	printf("�ڽ� ��: %d\n", sum);

	return 0;
}