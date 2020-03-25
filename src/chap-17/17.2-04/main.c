// 562p 연습문제 4번

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
		printf("[실.행.결.과 %d]\n", i);
		
		puts("1. 숫자 4자리");
		puts("2. 전화번호");
		
		fputs("원하는 비밀번호 입력 방식: ", stdout);
		int type;
		scanf_s("%d", &type);

		fputs("비밀번호 입력: ", stdout);

		switch (type)
		{
		case NUMBER:
			scanf_s("%d", &password.num);
			printf("입력한 비밀번호: %d\n", password.num);
			break;
		case PHONE_NUMBER:
			scanf_s(" %s", password.phone, (unsigned int)sizeof(password.phone));
			printf("입력한 비밀번호: %s\n", password.phone);
		}
		
	} while (++i);

	return 0;
}