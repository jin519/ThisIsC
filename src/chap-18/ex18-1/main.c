// 573p ���� 18-1 ������ ���� �ݴ� ���α׷�

#include <stdio.h>

int main() 
{
	FILE* stream = NULL;
	errno_t err;

	err = fopen_s(&stream, "a.txt", "r");

	if (err)
	{
		puts("������ ������ �ʾҽ��ϴ�.");
		return 1;
	}

	puts("������ ���Ƚ��ϴ�.");
	
	if (stream) 
		fclose(stream);

	return 0;
}