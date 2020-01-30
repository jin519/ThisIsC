#include <stdio.h>

int main(void) 
{
	const int AGE = 25;
	const int BUST = 95;
	char size;

	if (AGE < 20)
	{
		if (BUST < 85)
			size = 'S';
		else if (BUST < 95)
			size = 'M';
		else
			size = 'L';
	}
	else 
	{
		if (BUST < 90)
			size = 'S';
		else if (BUST < 100)
			size = 'M';
		else
			size = 'L';
	}

	printf("사이즈는 %c입니다\n", size);

	return 0;
}