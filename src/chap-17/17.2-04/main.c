// 562p �������� 4��

#include <stdio.h>

enum { NUMBER = 1, PHONE_NUMBER } Type;

typedef union 
{
	int num;
	char phone[20];
}Password;


int main()
{
	int i = 1;
	Password password; 

	do 
	{
		printf("[��.��.��.�� %d]\n", i);
		
		puts("1. ���� 4�ڸ�");
		puts("2. ��ȭ��ȣ");
		
		fputs("���ϴ� ��й�ȣ �Է� ���: ", stdout);
		int type;
		scanf_s("%d", &type);

		fputs("��й�ȣ �Է�: ", stdout);

		switch (type)
		{
		case NUMBER:
			scanf_s("%d", &password.num);
			printf("�Է��� ��й�ȣ: %d\n", password.num);
			break;
		case PHONE_NUMBER:
			scanf_s(" %s", password.phone, (unsigned int)sizeof(password.phone));
			printf("�Է��� ��й�ȣ: %s\n", password.phone);
		}
		
	} while (++i);

	return 0;
}