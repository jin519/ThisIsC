// 596p 연습문제 4번

#include <stdio.h>
#include <stdbool.h>

int main()
{
	fputs("복사할 파일명: ", stdout);
	char srcName[20] = { '\0' };
	scanf_s("%s", srcName, (unsigned int)sizeof(srcName));

	FILE* pSrc = NULL;
	fopen_s(&pSrc, srcName, "rt");

	if (pSrc) 
	{
		fputs("복사받을 파일명: ", stdout);
		char destName[20] = { '\0' };
		scanf_s("%s", destName, (unsigned int)sizeof(destName));

		FILE* pDest = NULL;
		fopen_s(&pDest, destName, "wt");

		if (pDest) 
		{
			char buffer[50] = { '\0' };

			while (fgets(buffer, sizeof(buffer), pSrc)) 
				fputs(buffer, pDest);

			printf("# %s 파일을 %s 파일로 복사했습니다.\n", srcName, destName);

			fclose(pSrc);
			fclose(pDest);
		}
	}

	return 0;
}