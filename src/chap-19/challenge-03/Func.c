#include "Func.h"
#include <stdio.h>

void inputData(Friend* const friends) 
{
	for (int i = 0; i < BEST_CNT; ++i) 
	{
		Friend* pFriend = (friends + i);

		printf("���� �Է�(m/f): ");
		scanf_s("%c", &pFriend->gender, (unsigned int)sizeof(pFriend->gender));

		printf("���� �Է�: ");
		scanf_s("%d", &pFriend->age);

		printf("�̸� �Է�: ");
		scanf_s("%s", pFriend->name, (unsigned int)sizeof(pFriend->name));

		printf("��ȭ��ȣ �Է�: ");
		scanf_s("%s", pFriend->tel, (unsigned int)sizeof(pFriend->tel)); 
		while (getchar() != '\n');
	}
}

Friend getOldestFriend(const Friend* const friends) 
{
	Friend* pOldest = friends;

	for (int i = 1; i < BEST_CNT; ++i) 
	{
		if (pOldest->age < friends[i].age)
			pOldest = (friends + i); 
	}

	return *pOldest; 
}

void printData(const Friend* const pFriend) 
{
	puts("���̰� ���� ���� ģ��: ");

	char* gender = NULL;

	if (pFriend->gender == 'm')
		gender = "��";
	else if (pFriend->gender == 'f')
		gender = "��";

	printf("����: %s, ����: %d��, �̸�: %s, ��ȭ��ȣ: %s\n", gender, pFriend->age, pFriend->name, pFriend->tel);
}