// 408p ���� ���� ���� 2��

#include <stdio.h>
#include <stdbool.h>

int hour;
int minute;

// ���� �ð��� ���� �����ϴ� �Լ�
void set(int h, int m) 
{
	fputs("���� �ð��� �� �Է� (24�ð�): ", stdout);
	scanf_s("%d%d", &h, &m);

	hour = h;
	minute = m;
}

// �ð��� ���� ȭ�鿡 ����ϴ� �Լ�
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

// �� �� ȣ��� ������ 1�о� �ð� ����
void move() 
{
	++minute;
}

int main()
{
	for (int i = 1; ; ++i) 
	{
		printf("[��.��.��.�� %d]\n", i);

		set(hour, minute);

		fputs("������ �ð�: ", stdout);
		show();

		fputs("��� �ð� �Է�(��): ", stdout);
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

		fputs("���� �ð�: ", stdout);
		show();
	}

	return 0;
}