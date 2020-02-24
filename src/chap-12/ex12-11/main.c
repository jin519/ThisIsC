// 368p 예제 12-11 두 문자열 중 길이가 긴 단어 출력

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80], str2[80];
	char* resp;

	printf("2개의 과일 이름 입력: ");
	scanf_s("%s %s", str1, (unsigned int)sizeof(str1), str2, (unsigned int)sizeof(str2));
		
	if (strlen(str1) > strlen(str2))
		resp = str1;
	else
		resp = str2;

	printf("이름이 긴 과일은: %s\n", resp);

	return 0;
}