// 366p ���� 12-10 strncpy �Լ��� ����� ���ڿ� ����

#include <stdio.h>
#include <string.h>

int main()
{
	char str[20] = "mango tree";

	strncpy_s(str, sizeof(str), "apple", 5);
	printf("%s\n", str);

	return 0;
}