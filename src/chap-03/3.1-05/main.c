#include <stdio.h>

int main(void) 
{
	const char NAME[20] = "원진";
	int age = 29;
	float height = 160.f;
	const char BLOOD_TYPE = 'B';

	age += 10;
	height -= 0.5f;

	printf("10년 후의 프로필...\n");
	printf("이름: %s\n", NAME);
	printf("나이: %d\n", age);
	printf("키: %.1lfcm\n", height);
	printf("혈액형: %c형\n", BLOOD_TYPE);

	return 0;
}