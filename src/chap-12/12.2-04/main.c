// 376p �������� 4��

#include <stdio.h>
#include <string.h>

int main() 
{
	char str1[80], str2[80];
	const char* pLen;
	const char* pCmp;

	printf("�� �ܾ� �Է�: ");
	scanf_s("%s %s", str1, (unsigned int)sizeof(str1), str2, (unsigned int)sizeof(str2));

	if (strlen(str1) < strlen(str2))
		pLen = str2;
	else
		pLen = str1;

	printf("���̰� �� �ܾ�: %s\n", pLen);

	if (strcmp(str1, str2) == -1)
		pCmp = str1;
	else
		pCmp = str2;

	printf("������ ���� ������ �ܾ�: %s\n", pCmp);

	return 0;
}