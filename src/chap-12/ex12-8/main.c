// 362p ���� 12-8 strcpy �Լ��� ����

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80] = "strawberry";
	char str2[80] = "apple";
	const char* ps1 = "banana";
	char* ps2 = str2;

	printf("���� ���ڿ�: %s\n", str1);
	strcpy_s(str1, sizeof(str1), str2);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy_s(str1, sizeof(str1), ps1);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy_s(str1, sizeof(str1), ps2);
	printf("�ٲ� ���ڿ�: %s\n", str1);

	strcpy_s(str1, sizeof(str1), "banana");
	printf("�ٲ� ���ڿ�: %s\n", str1);

	return 0;
}