// 591p ���� 18-7 a+ ���� ������ ������ Ȯ���ϸ� ���

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	FILE* pStream = NULL;
	char str[20] = { '\0' };

	fopen_s(&pStream, "a.txt", "a+"); 

	if (!pStream) 
	{
		puts("������ ������ ���߽��ϴ�.");
		return 1;
	}
	else 
	{
		while (true) 
		{
			fputs("���� �̸�: ", stdout);
			scanf_s("%s", str, (unsigned int)sizeof(str));

			if (!strcmp(str, "end"))
				break;
			else if (!strcmp(str, "list"))
			{
				fseek(pStream, 0, SEEK_SET);

				while (true)
				{
					fgets(str, sizeof(str), pStream);

					if (feof(pStream))
						break;

					printf("%s", str);
				}
			}
			else
				fprintf(pStream, "%s\n", str);
		}

		fclose(pStream);
	}

	return 0;
}