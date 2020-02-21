// 335p ���� 11-7 getchar �Լ��� ����� ���ڿ� �Է�

#include <stdio.h>

void myGets(char* str, int size) 
{
	char ch;
	int i = 0;

	ch = getchar();

	while ((ch != '\n') && (i < (size - 1))) 
	{
		str[i++] = ch;
		ch = getchar();
	}

	str[i] = '\0';
}

int main()
{
	char str[7];

	myGets(str, sizeof(str));

	printf("�Է��� ���ڿ�: %s\n", str);

	return 0;
}