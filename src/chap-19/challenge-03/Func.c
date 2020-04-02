#include "Func.h"
#include <stdio.h>

void inputData(Friend* const friends) 
{
	for (int i = 0; i < BEST_CNT; ++i) 
	{
		Friend* pFriend = (friends + i);

		printf("성별 입력(m/f): ");
		scanf_s("%c", &pFriend->gender, (unsigned int)sizeof(pFriend->gender));

		printf("나이 입력: ");
		scanf_s("%d", &pFriend->age);

		printf("이름 입력: ");
		scanf_s("%s", pFriend->name, (unsigned int)sizeof(pFriend->name));

		printf("전화번호 입력: ");
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
	puts("나이가 가장 많은 친구: ");

	char* gender = NULL;

	if (pFriend->gender == 'm')
		gender = "남";
	else if (pFriend->gender == 'f')
		gender = "여";

	printf("성별: %s, 나이: %d세, 이름: %s, 전화번호: %s\n", gender, pFriend->age, pFriend->name, pFriend->tel);
}