// 327p 연습문제 5번

#include <stdio.h>

int main() 
{
	char space, tab, enter;

	scanf_s("%c%c%c", &space, (unsigned int)sizeof(space), &tab, (unsigned int)sizeof(tab), &enter, (unsigned int)sizeof(enter));

	printf("스페이스 키의 아스키 코드값: %d\n", space);
	printf("탭 키의 아스키 코드값: %d\n", tab);
	printf("엔터 키의 아스키 코드값: %d\n", enter);

	return 0;
}