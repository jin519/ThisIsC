// 547p ���� 17-9 �Լ����� -> �����ڸ� �̿��Ͽ� ����ü �迭�� �� ���

#include <stdio.h>

struct Address
{
	char name[20];
	int age;
	char tel[20];
	char addr[80];
};

void printList(struct Address* address) 
{
	for (int i = 0; i < 5; ++i)
	{
		struct Address* LIST = (address + i);
		printf("%s %d %s %s\n", LIST->name, LIST->age, LIST->tel, LIST->addr);
	}
}

int main()
{
	struct Address list[5] =
	{
		{ "ȫ�浿", 23, "111-1111", "�︪�� ����" },
		{ "�̼���", 35, "222-2222", "���� ��õ��" },
		{ "�庸��", 19, "333-3333", "�ϵ� û����" },
		{ "������", 15, "444-4444", "�泲 õ��" },
		{ "���߱�", 45, "555-5555", "Ȳ�ص� ����" }
	};

	printList(list);

	return 0;
}