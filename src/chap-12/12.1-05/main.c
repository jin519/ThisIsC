// 359p �������� 5��

#include <stdio.h>
#include <string.h>

int main() 
{
	char name[20];
	char phone[20];
	char address[50];

	fputs("�̸�: ", stdout);
	fgets(name, sizeof(name), stdin);
	name[strlen(name) - 1] = '\0';

	fputs("��ȭ��ȣ: ", stdout);
	fgets(phone, sizeof(phone), stdin);
	phone[strlen(phone) - 1] = '\0';

	fputs("�ּ�: ", stdout);
	fgets(address, sizeof(address), stdin);
	address[strlen(address) - 1] = '\0';
	
	printf("%s, %s, %s\n", name, phone, address);

	return 0;
}