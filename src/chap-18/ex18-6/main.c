// 588p ���� 18-6 ������ ���¿� ���� ��尡 �ٸ� ���

#include <stdio.h>
#include <stdbool.h>

int main()
{
	FILE* pStream = NULL;
	int arr[] = { 13, 10, 13, 13, 10, 26, 13, 10, 13, 10 };

	fopen_s(&pStream, "a.txt", "wb");

	if (pStream) 
	{
		for (int i = 0; i < 10; ++i)
		{
			fputc(arr[i], pStream);
		}

		fclose(pStream); 
	}

	fopen_s(&pStream, "a.txt", "rt");

	if (pStream) 
	{
		while (true)
		{
			int res = fgetc(pStream);

			if (res == EOF)
				break;

			printf("%4d", res);
		}

		fclose(pStream);
	}

	return 0;
}