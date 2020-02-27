// 482p 도전 실전 예제 3번

#include <stdio.h>
#include <string.h>

// 2차원 배열과 포인터 배열 연결
void initIntro(char(*intro)[80], char** pIntro)
{
	for (int i = 0; i < 10; ++i)
		pIntro[i] = intro[i];
}

// 인사말 입력
int inputIntro(char(*intro)[80]) 
{
	char input[80] = { '\0' };
	int cnt = 0;

	do 
	{
		fputs("인사말 입력: ", stdout);
		gets_s(input, sizeof(input));

		if (!strcmp(input, "end"))
			break;

		strcpy_s(intro[cnt++], sizeof(*intro), input);
	} 
	while (cnt < 10);

	return cnt;
}

// 인사말 정렬
void sortIntro(char** pIntro, int cnt)
{
	for (int i = 1; i < cnt; ++i) 
	{ 
		for (int j = 0; j < (cnt - i); ++j) 
		{
			if (strcmp(pIntro[j], pIntro[j + 1]) > 0)
			{
				char* pTmp = pIntro[j];
				pIntro[j] = pIntro[j + 1];
				pIntro[j + 1] = pTmp;
			}
		}
	}
}

// 인사말 출력
void printIntro(int mode, void* vp, int cnt) 
{
	puts("");

	if (mode == 1) 
	{
		puts("# 사전순으로 출력...");

		for (int i = 0; i < cnt; ++i)
			printf("%s\n", ((char**)vp)[i]);

	}

	if (mode == 0) 
	{
		puts("# 입력순으로 출력...");

		for (int i = 0; i < cnt; ++i)
			printf("%s\n", ((char(*)[80])vp)[i]);
	}
}

int main() 
{
	char intro[10][80];
	char* pIntro[10];
	int cnt;

	initIntro(intro, pIntro);
	
	cnt = inputIntro(intro);

	sortIntro(pIntro, cnt);

	printIntro(1, pIntro, cnt);
	printIntro(0, intro, cnt);

	return 0;
}