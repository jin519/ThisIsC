// 582p ���� 18-3 ���ڿ��� �� ���ھ� ���Ϸ� ����ϱ�

#include <stdio.h>

int main()
{
	FILE* pStream = NULL;
	
	fopen_s(&pStream, "a.txt", "w");

	if (pStream)
	{
		const char STR[] = "banana";
		int i = 0;
		
		while (STR[i]) 
		{
			fputc(STR[i], pStream);
			i++;
		}

		fputc('\n', pStream); 
		fclose(pStream);
	}
	else
		puts("������ ������ ���߽��ϴ�."); 

	return 0;
}