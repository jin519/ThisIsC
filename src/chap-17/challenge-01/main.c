// 567p 도전 실전 예제 1번

#include <stdio.h>
#include <stdbool.h>

typedef struct MoneyBox 
{
	int w500;
	int w100;
	int w50;
	int w10;
}MoneyBox;

void init(MoneyBox* moneyBox);
void save(MoneyBox* moneyBox, int unit, int count);
int total(MoneyBox* moneyBox);

int main() 
{
	MoneyBox moneyBox;
	int unit, count;

	init(&moneyBox);

	while (true) 
	{
		fputs("동전의 금액과 개수: ", stdout);
		
		scanf_s("%d", &unit);

		if (unit == -1)
			break;

		scanf_s("%d", &count); 

		save(&moneyBox, unit, count); 
	}

	printf("총 저금액: %d원\n", total(&moneyBox));

	return 0;
}

void init(MoneyBox* moneyBox) 
{
	moneyBox->w500 = 0;
	moneyBox->w100 = 0; 
	moneyBox->w50 = 0;
	moneyBox->w10 = 0; 
}

void save(MoneyBox* moneyBox, int unit, int count) 
{
	switch (unit)
	{
	case 500:
		moneyBox->w500 += count;
		break;
	case 100:
		moneyBox->w100 += count; 
		break;
	case 50:
		moneyBox->w50 += count; 
		break;
	case 10:
		moneyBox->w10 += count;
	}
}
	
int total(MoneyBox* moneyBox) 
{
	int retVal = 0; 

	retVal += (500 * moneyBox->w500);
	retVal += (100 * moneyBox->w100);
	retVal += (50 * moneyBox->w50);
	retVal += (10 * moneyBox->w10);

	return retVal; 
}
