// 482p ���� ���� ���� 3��

#include <stdio.h>
#include <string.h>

// 2���� �迭�� ������ �迭 ����
void initIntro(char(*intro)[80], char** pIntro)
{
	for (int i = 0; i < 10; ++i)
		pIntro[i] = intro[i];
}

// �λ縻 �Է�
int inputIntro(char(*intro)[80]) 
{
	char input[80] = { '\0' };
	int cnt = 0;

	do 
	{
		fputs("�λ縻 �Է�: ", stdout);
		gets_s(input, sizeof(input));

		if (!strcmp(input, "end"))
			break;

		strcpy_s(intro[cnt++], sizeof(*intro), input);
	} 
	while (cnt < 10);

	return cnt;
}

// �λ縻 ����
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

// �λ縻 ���
void printIntro(int mode, void* vp, int cnt) 
{
	puts("");

	if (mode == 1) 
	{
		puts("# ���������� ���...");

		for (int i = 0; i < cnt; ++i)
			printf("%s\n", ((char**)vp)[i]);

	}

	if (mode == 0) 
	{
		puts("# �Է¼����� ���...");

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