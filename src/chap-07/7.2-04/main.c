#include <stdio.h>

int disp_menu() 
{
	puts("1. ����«��");
	puts("2. �ᳪ������");
	puts("3. ������Į����\n");

	int retVal;

	printf("# �޴��� �����ϼ���: ");
	scanf_s("%d", &retVal);

	return retVal;
}

int main() 
{
	int sel;

	sel = disp_menu();

	printf("���õ� �޴��� %d�� �Դϴ�.\n", sel);

	return 0;
}