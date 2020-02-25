// 408p 도전 실전 예제 2번

#include <stdio.h>
#include <stdbool.h>

int hour;
int minute;

// 최초 시간과 분을 설정하는 함수
void set(int h, int m) 
{
	fputs("최초 시간과 분 입력 (24시간): ", stdout);
	scanf_s("%d%d", &h, &m);

	hour = h;
	minute = m;
}

// 시간과 분을 화면에 출력하는 함수
void show() 
{
	const char* NIGNT = "AM";
	const char* DAY = "PM";
	const char* pDayOrNight = NIGNT;
	int normalizedHour = hour;

	if (hour >= 12) 
	{
		pDayOrNight = DAY;

		if (hour > 12)
			normalizedHour = (hour - 12);
	}

	printf("%02d:%02d(%s)\n", normalizedHour, minute, pDayOrNight);
}

// 한 번 호출될 때마다 1분씩 시간 증가
void move() 
{
	++minute;
}

int main()
{
	for (int i = 1; ; ++i) 
	{
		printf("[실.행.결.과 %d]\n", i);

		set(hour, minute);

		fputs("설정된 시간: ", stdout);
		show();

		fputs("경과 시간 입력(분): ", stdout);
		int elapsedMinutes;
		scanf_s("%d", &elapsedMinutes);

		for (int j = 0; j < elapsedMinutes; ++j)
			move();

		if (minute >= 60) 
		{
			hour += (minute / 60);
			minute %= 60;
		}

		if (hour >= 24)
			hour %= 24;

		fputs("현재 시간: ", stdout);
		show();
	}

	return 0;
}