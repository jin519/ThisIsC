// 451p ���� 15-2 2�� �����͸� ����� ������ ��ȯ

#include <stdio.h>

void swapPtr(char** pa, char** pb) 
{
	char* tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swapPtr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}