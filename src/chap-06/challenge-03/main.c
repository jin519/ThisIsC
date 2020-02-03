#include <stdio.h>
#include <stdbool.h>

int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// 윤년 여부를 확인한다.
bool isLeapYear(const int year) 
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return true;

	return false;
}

// 1년 1월 1일부터 입력 년도 입력 월 1일까지 총 일수를 반환한다.
int getTotalDays(const int year, const int month) 
{
	int retVal = 0;

	for (int i = 1; i < year; ++i)
	{
		if (isLeapYear(i))
			retVal += 366;
		else
			retVal += 365;
	}

	days[2] = isLeapYear(year) ? 29 : 28;

	for (int i = 1; i < month; ++i)
		retVal += days[i];

	retVal += 1;

	return retVal;
}

// 달력을 출력한다.
void printCalendar(const int year, const int month) 
{
	printf("%d년 %d월\n", year, month);
	puts("SUN  MON  TUE  WED  THU  FRI  SAT");

	const int TOTAL_DAYS = getTotalDays(year, month);
	const int START_POS = (TOTAL_DAYS % 7);

	for (int i = 0; i < START_POS; ++i)
		printf("     ");

	for (int i = 1; i <= days[month]; ++i)
	{
		printf("%3d  ", i);

		if (((i + START_POS) % 7) == 0)
			puts("");
	}
}

int main() 
{
	while (true) 
	{
		int inputYear, inputMonth;

		printf("> 년, 월을 입력하세요(종료는 0): ");

		scanf_s("%d", &inputYear);

		if (inputYear == 0)
			break;
	
		scanf_s("%d", &inputMonth);
		
		printCalendar(inputYear, inputMonth);

		puts("\n");
	}

	return 0;
}