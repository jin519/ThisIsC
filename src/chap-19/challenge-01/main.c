// 662p 도전 실전 예제 1번

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

int x, y;
char op; 
int result; 

#define INPUT() \
{ \
	printf("수식 입력(종료 Ctrl + Z): "); \
	scanf_s("%d %c %d", &x, &op, (unsigned int)sizeof(op), &y); \
} \

#define CALCULATE(_x, _op, _y) \
{ \
	if (_op == '+') \
		result = (_x + _y); \
	if (_op == '-') \
		result = (_x - _y); \
	if (_op == '*') \
		result = (_x * _y); \
	if (_op == '/') \
		result = (_x / _y); \
} \

int main() 
{
	while (true) 
	{
		INPUT();
		CALCULATE(x, op, y);
		printf("%d %c %d = %d\n", x, op, y, result);
	}

	return 0; 
}