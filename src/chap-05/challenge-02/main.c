#include <stdio.h>

int main() 
{
	int rich = 150;
	double grade = 4.1;
	int tuition = 100;

	if (rich >= 100) 
	{
		if (grade >= 4.0)
			tuition = (int)((double)tuition * 0.8);
	}
	else
		tuition = (int)((double)tuition * 0.6);

	printf("���� �б� ������ ��ϱ��� %d�����Դϴ�.\n", tuition);

	return 0;
}