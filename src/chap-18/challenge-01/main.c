// 618p ���� ���� ���� 1��

#include <stdio.h>

int main() 
{
	FILE* pInputStream = NULL;
	fopen_s(&pInputStream, "a.txt", "rt");

	if (!pInputStream)
		return 1;

	FILE* pOutputStream = NULL;
	fopen_s(&pOutputStream, "b.bin", "wb");

	if (!pOutputStream)
		return 2;

	int num = 0;
	while (fscanf_s(pInputStream, "%d", &num) != EOF)
		fwrite(&num, sizeof(num), 1, pOutputStream);

	const long INPUT_STREAM_SIZE = ftell(pInputStream);
	const long OUTPUT_STREAM_SIZE = ftell(pOutputStream);

	printf("�Է� ������ ũ��: %ld\n", INPUT_STREAM_SIZE);
	printf("��� ������ ũ��: %ld\n", OUTPUT_STREAM_SIZE);

	return 0;
}