#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

void printStr(char** pStr) 
{
	while (*pStr) 
		printf("%s\n", *pStr++);
}

int main(int argc, char** argv) 
{
	char tmp[80]; // ���ڿ� �Է��� ���� �ӽ� char �迭
	char** str = NULL; // ������ �迭�� ����� ���� �Ҵ� ���� ����
	int max = 0; // �ִ� �Է� ���ڿ� ���� ����
	int i = 0;

	max = atoi(argv[1]); // �ι�° ����� �μ��� ������ ��ȯ

	str = (char**)malloc((max + 1) * sizeof(char*)); // ������ �迭�� ���� �Ҵ�

	while (true) 
	{
		printf("���ڿ��� �Է��ϼ���: ");
		gets_s(tmp, sizeof(tmp));

		if (!tmp[0]) // ���͸� �Է��ϸ� �ݺ� ����
			break;

		const size_t SIZE = (strlen(tmp) + 1);

		str[i] = (char*)malloc(SIZE * sizeof(char));

		strcpy_s(str[i], SIZE, tmp);

		i++;

		if (i == max) 
		{
			puts("���ڿ� �Է��� �ִ밪�� ��� ä�����ϴ�");
			break;
		}
	}

	str[i] = NULL; // �Է��� ���� �� �������ͷ� ����
	printStr(str); // �Էµ� ���ڿ� ���

	i = 0; 

	while (str[i]) 
	{
		free(str[i]);
		i++;
	}

	free(str);

	return 0;
}