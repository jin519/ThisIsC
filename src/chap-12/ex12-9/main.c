// 364p ���� 12-9 strcpy�� ����� ���� �Լ��� ����

#include <stdio.h>
#include <string.h>

char* myStrcpy(char* dest, const char* src) 
{
	char* retVal = dest;

	while (*src != '\0') 
		*dest++ = *src++;
	
	*dest = '\0';

	return retVal;
}

int main()
{
	char str[80] = "strawberry";

	printf("�ٲ�� �� ���ڿ�: %s\n", str);
	myStrcpy(str, "apple");
	printf("�ٲ� �� ���ڿ�: %s\n", str);
	printf("�ٸ� ���ڿ� ����: %s\n", myStrcpy(str, "kiwi"));

	return 0;
}