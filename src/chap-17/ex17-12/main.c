// 554p 예제 17-12 열거형을 사용한 프로그램

#include <stdio.h>

enum Season
{
	SPRING, SUMMER, FALL, WINTER
};

int main()
{
	enum Season season;
	char* pc = NULL;

	season = SPRING;

	switch (season) 
	{
	case SPRING:
		pc = "inline";
		break;
	case SUMMER:
		pc = "swimming";
		break;
	case FALL:
		pc = "trip";
		break;
	case WINTER:
		pc = "skiing";
	}

	printf("나의 레저 활동 => %s\n", pc);

	return 0;
}