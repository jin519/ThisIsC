// 579p 예제 18-2 파일의 내용을 화면에 출력하기

#include <stdio.h>

int main()
{
	FILE* pStream = NULL;
	errno_t err;

	err = fopen_s(&pStream, "a.txt", "r");

	if (err) 
	{
		puts("파일이 열리지 않았습니다.");
		return 1;
	}

	if (pStream) 
	{
		int ch;

		while ((ch = fgetc(pStream)) != EOF) 
			putchar(ch);

		fclose(pStream);
	}

	return 0;
}