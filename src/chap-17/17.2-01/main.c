// 560p �������� 1��

#include <stdio.h>

struct Marriage 
{
	char name[20];
	int age;
	char sex;
	double height;
};

int main() 
{
	struct Marriage m1 = { "����", 29, 'f', 160.0 };
	struct Marriage* mp = &m1;

	printf("�̸�: %s\n", mp->name);
	printf("����: %d\n", mp->age);
	printf("����: %c\n", mp->sex);
	printf("Ű: %.1lf\n", mp->height);

	return 0;
}