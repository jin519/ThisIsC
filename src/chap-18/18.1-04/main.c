// 596p �������� 4��

#include <stdio.h>
#include <stdbool.h>

int main()
{
	fputs("������ ���ϸ�: ", stdout);
	char srcName[20] = { '\0' };
	scanf_s("%s", srcName, (unsigned int)sizeof(srcName));

	FILE* pSrc = NULL;
	fopen_s(&pSrc, srcName, "rt");

	if (pSrc) 
	{
		fputs("������� ���ϸ�: ", stdout);
		char destName[20] = { '\0' };
		scanf_s("%s", destName, (unsigned int)sizeof(destName));

		FILE* pDest = NULL;
		fopen_s(&pDest, destName, "wt");

		if (pDest) 
		{
			char buffer[50] = { '\0' };

			while (fgets(buffer, sizeof(buffer), pSrc)) 
				fputs(buffer, pDest);

			printf("# %s ������ %s ���Ϸ� �����߽��ϴ�.\n", srcName, destName);

			fclose(pSrc);
			fclose(pDest);
		}
	}

	return 0;
}