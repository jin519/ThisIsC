// 563p �������� 5��

#include <stdio.h>

typedef struct
{
	char name[20];
	double grade;
	int english;
}Profile;

void inputData(Profile* profile) 
{
	puts("�̸�, ����, ���� ������ �Է��ϼ���.");

	for (int i = 0; i < 5; ++i) 
	{
		Profile* current = (profile + i);
		scanf_s("%s%lf%d", current->name, (unsigned int)sizeof(current->name), &(current->grade), &(current->english)); 
	}
}

void elite(Profile* profile) 
{
	for (int i = 0; i < 5; ++i)
	{
		Profile* current = (profile + i);

		if ((current->grade >= 4.0) && (current->english >= 900))
			printf("[��.��.Ʈ] %s %.1lf %d\n", current->name, current->grade, current->english);
	}
}

int main()
{
	Profile newStaff[5];

	inputData(newStaff);
	elite(newStaff);

	return 0;
}