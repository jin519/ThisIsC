// 525p 예제 17-2 배열과 포인터를 멤버로 갖는 구조체 사용

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Profile 
{
	char name[20];
	int age;
	double height;
	char* pIntro;
};

int main() 
{
	struct Profile profile;

	strcpy_s(profile.name, sizeof(profile.name), "서하윤");
	profile.age = 17;
	profile.height = 164.5;

	const size_t INTRO_SIZE = (sizeof(char) * 80);

	profile.pIntro = malloc(INTRO_SIZE);

	if (!profile.pIntro)
		exit(1);

	printf("자기 소개: ");
	gets_s(profile.pIntro, INTRO_SIZE);

	printf("이름: %s\n", profile.name);
	printf("나이: %d\n", profile.age);
	printf("키: %.1lf\n", profile.height);
	printf("자기 소개: %s\n", profile.pIntro);

	free(profile.pIntro);

	return 0;
}