#include <stdio.h>
#include <stdbool.h>

int main() 
{
	int i = 1;
	int operand1, operand2;
	int result = 0;
	char operator;

	do
	{
		printf("[실.행.결.과 %d]\n", i++);

		printf("사칙 연산 입력(정수): ");
		scanf_s("%d%c%d", &operand1, &operator, (unsigned int)sizeof(operator), &operand2);

		switch (operator)
		{
		case '+':
			result = (operand1 + operand2);
			break;

		case '-':
			result = (operand1 - operand2);
			break;

		case '*':
			result = (operand1 * operand2);
			break;

		case '/':
			result = (operand1 / operand2);
			break;

		default:
			printf("잘못된 연산자입니다. +, -, *, /를 지원합니다.\n");
		}

		printf("%d%c%d=%d\n\n", operand1, operator, operand2, result);

	} while (true);

	return 0;
}