// 356p ���� 12-7 ���ڿ��� ����ϴ� puts�� fputs �Լ�

#include <stdio.h>

int main()
{
	char str[] = "apple juice";
	const char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}