// 340p �������� 4��

#include <stdio.h>

int main() 
{
	int num, ch;

	printf("���� �����ϴ� ���ڴ�? "); 
	scanf_s("%d", &num);

	while (getchar() != '\n');

	printf("���� �����ϴ� ���ĺ���? ");
	ch = getchar();

	printf("%d, %c\n", num, ch);

	return 0;
}