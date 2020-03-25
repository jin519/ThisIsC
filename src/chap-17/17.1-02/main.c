// 537p 연습문제 2번

#include <stdio.h>

struct Cracker 
{
	int price;
	int calories;
};

int main()
{
	struct Cracker cracker;

	fputs("바사삭의 가격과 열량을 입력하세요: ", stdout);
	scanf_s("%d%d", &cracker.price, &cracker.calories);

	printf("바사삭의 가격: %d원\n", cracker.price);
	printf("바사삭의 열량: %dkal\n", cracker.calories);

	return 0;
}