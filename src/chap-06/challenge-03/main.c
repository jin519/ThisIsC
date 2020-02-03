#include <stdio.h>
#include <stdbool.h>

int days[] = { 0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };

// ���� ���θ� Ȯ���Ѵ�.
bool isLeapYear(const int year) 
{
	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return true;

	return false;
}

// 1�� 1�� 1�Ϻ��� �Է� �⵵ �Է� �� 1�ϱ��� �� �ϼ��� ��ȯ�Ѵ�.
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

// �޷��� ����Ѵ�.
void printCalendar(const int year, const int month) 
{
	printf("%d�� %d��\n", year, month);
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

		printf("> ��, ���� �Է��ϼ���(����� 0): ");

		scanf_s("%d", &inputYear);

		if (inputYear == 0)
			break;
	
		scanf_s("%d", &inputMonth);
		
		printCalendar(inputYear, inputMonth);

		puts("\n");
	}

	return 0;
}