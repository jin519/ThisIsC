// 554p ���� 17-12 �������� ����� ���α׷�

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

	printf("���� ���� Ȱ�� => %s\n", pc);

	return 0;
}