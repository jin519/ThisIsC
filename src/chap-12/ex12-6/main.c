// 354p ���� 12-6 ���๮�ڷ� ���� gets �Լ��� �Է��� ���ϴ� ���

#include <stdio.h>

int main()
{
	int age;
	char name[20];

	printf("���� �Է�: ");
	scanf_s("%d", &age);

	printf("�̸� �Է�: ");
	gets_s(name, sizeof(name));

	printf("����: %d, �̸�: %s\n", age, name);
		
	return 0;
}