// 525p ���� 17-2 �迭�� �����͸� ����� ���� ����ü ���

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

	strcpy_s(profile.name, sizeof(profile.name), "������");
	profile.age = 17;
	profile.height = 164.5;

	const size_t INTRO_SIZE = (sizeof(char) * 80);

	profile.pIntro = malloc(INTRO_SIZE);

	if (!profile.pIntro)
		exit(1);

	printf("�ڱ� �Ұ�: ");
	gets_s(profile.pIntro, INTRO_SIZE);

	printf("�̸�: %s\n", profile.name);
	printf("����: %d\n", profile.age);
	printf("Ű: %.1lf\n", profile.height);
	printf("�ڱ� �Ұ�: %s\n", profile.pIntro);

	free(profile.pIntro);

	return 0;
}