#include <stdio.h>
#include <stdbool.h>

extern int cnt; 
int tot = 0;

int inputData() 
{
	int pos; 

	while (true) 
	{
		printf("��� �Է�: ");
		scanf_s("%d", &pos);

		if (pos < 0)
			break;

		cnt++;
		tot += pos; 
	}

	return tot; 
}