// 579p ���� 18-2 ������ ������ ȭ�鿡 ����ϱ�

#include <stdio.h>

int main()
{
	FILE* pStream = NULL;
	errno_t err;

	err = fopen_s(&pStream, "a.txt", "r");

	if (err) 
	{
		puts("������ ������ �ʾҽ��ϴ�.");
		return 1;
	}

	if (pStream) 
	{
		int ch;

		while ((ch = fgetc(pStream)) != EOF) 
			putchar(ch);

		fclose(pStream);
	}

	return 0;
}