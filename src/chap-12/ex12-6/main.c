// 354p 예제 12-6 개행문자로 인해 gets 함수가 입력을 못하는 경우

#include <stdio.h>

int main()
{
	int age;
	char name[20];

	printf("나이 입력: ");
	scanf_s("%d", &age);

	printf("이름 입력: ");
	gets_s(name, sizeof(name));

	printf("나이: %d, 이름: %s\n", age, name);
		
	return 0;
}