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
		printf("[��.��.��.�� %d]\n", i++);

		printf("��Ģ ���� �Է�(����): ");
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
			printf("�߸��� �������Դϴ�. +, -, *, /�� �����մϴ�.\n");
		}

		printf("%d%c%d=%d\n\n", operand1, operator, operand2, result);

	} while (true);

	return 0;
}