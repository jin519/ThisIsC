// 442p 도전 실전 예제 2번

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main()
{
	char words[10][21];
	int cnt = 0;

	do 
	{
		char input[21] = { '\0' };

		fputs("단어 입력 (종료는 end 입력): ", stdout);
		scanf_s("%s", input, (unsigned int)sizeof(input));

		if (!strcmp(input, "end"))
			break;

		strcpy_s(words[cnt++], sizeof(words[0]), input);
	} 
	while (cnt < 10);

	printf("# 총 %d개의 단어가 입력되었습니다!\n\n", cnt);

	while (true) 
	{
		char target[21] = { '\0' };
		bool flag = false;

		fputs("검색 단어 (종료는 end 입력): ", stdout);
		scanf_s("%s", target, (unsigned int)sizeof(target));

		if (!strcmp(target, "end"))
			break;

		for (int i = 0; i < cnt; ++i)
		{
			if (!strcmp(words[i], target)) 
			{
				flag = true;
				printf("# %d번째 같은 단어가 있습니다!\n\n", (i + 1));
			}
		}

		if (!flag)
			printf("# 없는 단어입니다.\n\n");
	}

	return 0;
}