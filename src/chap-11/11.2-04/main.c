// 340p 연습문제 4번

#include <stdio.h>

int main() 
{
	int num, ch;

	printf("가장 좋아하는 숫자는? "); 
	scanf_s("%d", &num);

	while (getchar() != '\n');

	printf("가장 좋아하는 알파벳은? ");
	ch = getchar();

	printf("%d, %c\n", num, ch);

	return 0;
}