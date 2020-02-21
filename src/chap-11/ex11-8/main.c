// 337p 예제 11-8 fflush 함수가 필요한 경우

#include <stdio.h>

int main() 
{
	int num, grade;

	printf("학번 입력: ");
	scanf_s("%d", &num);
	fflush(stdin);

	printf("학점 입력: ");
	grade = getchar();

	printf("학번: %d, 학점: %c", num, grade);

	return 0;
}