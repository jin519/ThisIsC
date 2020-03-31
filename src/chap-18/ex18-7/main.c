// 591p 예제 18-7 a+ 모드로 파일의 내용을 확인하며 출력

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
		puts("파일을 만들지 못했습니다.");
		return 1;
	}
	else 
	{
		while (true) 
		{
			fputs("과일 이름: ", stdout);
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