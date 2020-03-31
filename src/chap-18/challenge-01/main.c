// 618p 도전 실전 예제 1번

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

	printf("입력 파일의 크기: %ld\n", INPUT_STREAM_SIZE);
	printf("출력 파일의 크기: %ld\n", OUTPUT_STREAM_SIZE);

	return 0;
}