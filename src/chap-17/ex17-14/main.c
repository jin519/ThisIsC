// 558p 예제 17-14 경품 당첨자 목록 관리 프로그램

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
	printf("이름: %s, 선택 품목: ", gift.name);

	switch (gift.kind)
	{
	case EGG:
		printf("계란 %d개\n", gift.amount.ea);
		break;
	case MILK:
		printf("우유 %.1lf리터\n", gift.amount.liter);
		break;
	case MEAT:
		printf("고기 %.1lfkg\n", gift.amount.kg);
	}
}

int main() 
{
	Gift list[5] = { 0 };

	for (int i = 0; i < 5; ++i) 
	{
		Gift* pList = (list + i);

		printf("이름 입력: ");
		scanf_s("%s", pList->name, (unsigned int)sizeof(pList->name));

		printf("품목 선택(1. 계란 2. 우유 3. 고기): ");
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

	printf("# 세 번째 경품 당첨자...\n");
	printList(list[2]);

	return 0;
}