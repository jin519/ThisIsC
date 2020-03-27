// 573p 예제 18-1 파일을 열고 닫는 프로그램

#include <stdio.h>

int main() 
{
	FILE* stream = NULL;
	errno_t err;

	err = fopen_s(&stream, "a.txt", "r");

	if (err)
	{
		puts("파일이 열리지 않았습니다.");
		return 1;
	}

	puts("파일이 열렸습니다.");
	
	if (stream) 
		fclose(stream);

	return 0;
}