// 356p 예제 12-7 문자열을 출력하는 puts와 fputs 함수

#include <stdio.h>

int main()
{
	char str[] = "apple juice";
	const char* ps = "banana";

	puts(str);
	fputs(ps, stdout);
	puts("milk");

	return 0;
}