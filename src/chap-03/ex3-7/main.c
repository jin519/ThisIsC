#include <stdio.h>

int main(void) 
{
	char fruit[20] = "strawberry"; // char 배열 선언과 초기화

	printf("딸기: %s\n", fruit); // 배열명으로 strawberry 출력
	printf("딸기쨈: %s %s\n", fruit, "jam"); // 문자열은 %s로 출력
	printf("좋아하는 과일: %s\n", fruit);

	return 0;
}