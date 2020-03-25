// 558p ���� 17-14 ��ǰ ��÷�� ��� ���� ���α׷�

#include <stdio.h>

typedef union 
{
	int ea;
	double kg;
	double liter;
}Unit;

typedef struct 
{
	char name[20];
	enum { EGG = 1, MILK, MEAT } kind;
	Unit amount;
}Gift;

void printList(Gift gift) 
{
	printf("�̸�: %s, ���� ǰ��: ", gift.name);

	switch (gift.kind)
	{
	case EGG:
		printf("��� %d��\n", gift.amount.ea);
		break;
	case MILK:
		printf("���� %.1lf����\n", gift.amount.liter);
		break;
	case MEAT:
		printf("��� %.1lfkg\n", gift.amount.kg);
	}
}

int main() 
{
	Gift list[5] = { 0 };

	for (int i = 0; i < 5; ++i) 
	{
		Gift* pList = (list + i);

		printf("�̸� �Է�: ");
		scanf_s("%s", pList->name, (unsigned int)sizeof(pList->name));

		printf("ǰ�� ����(1. ��� 2. ���� 3. ���): ");
		scanf_s("%d", &(pList->kind));

		switch (pList->kind)
		{
		case EGG:
			pList->amount.ea = 30;
			break;
		case MILK:
			pList->amount.liter = 4.5;
			break;
		case MEAT:
			pList->amount.kg = 0.6;
		}
	}

	printf("# �� ��° ��ǰ ��÷��...\n");
	printList(list[2]);

	return 0;
}