// 442p ���� ���� ���� 2��

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

		fputs("�ܾ� �Է� (����� end �Է�): ", stdout);
		scanf_s("%s", input, (unsigned int)sizeof(input));

		if (!strcmp(input, "end"))
			break;

		strcpy_s(words[cnt++], sizeof(words[0]), input);
	} 
	while (cnt < 10);

	printf("# �� %d���� �ܾ �ԷµǾ����ϴ�!\n\n", cnt);

	while (true) 
	{
		char target[21] = { '\0' };
		bool flag = false;

		fputs("�˻� �ܾ� (����� end �Է�): ", stdout);
		scanf_s("%s", target, (unsigned int)sizeof(target));

		if (!strcmp(target, "end"))
			break;

		for (int i = 0; i < cnt; ++i)
		{
			if (!strcmp(words[i], target)) 
			{
				flag = true;
				printf("# %d��° ���� �ܾ �ֽ��ϴ�!\n\n", (i + 1));
			}
		}

		if (!flag)
			printf("# ���� �ܾ��Դϴ�.\n\n");
	}

	return 0;
}