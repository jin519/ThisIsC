#include <stdio.h>

int disp_menu() 
{
	puts("1. 볶음짬뽕");
	puts("2. 콩나물국밥");
	puts("3. 바지락칼국수\n");

	int retVal;

	printf("# 메뉴를 선택하세요: ");
	scanf_s("%d", &retVal);

	return retVal;
}

int main() 
{
	int sel;

	sel = disp_menu();

	printf("선택된 메뉴는 %d번 입니다.\n", sel);

	return 0;
}