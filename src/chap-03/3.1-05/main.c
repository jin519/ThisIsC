#include <stdio.h>

int main(void) 
{
	const char NAME[20] = "����";
	int age = 29;
	float height = 160.f;
	const char BLOOD_TYPE = 'B';

	age += 10;
	height -= 0.5f;

	printf("10�� ���� ������...\n");
	printf("�̸�: %s\n", NAME);
	printf("����: %d\n", age);
	printf("Ű: %.1lfcm\n", height);
	printf("������: %c��\n", BLOOD_TYPE);

	return 0;
}