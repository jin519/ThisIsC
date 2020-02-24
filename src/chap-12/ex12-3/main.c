// 348p 예제 12-3 scanf 함수를 사용한 문자열 입력

#include <stdio.h>

int main()
{
	char str[80];

	printf("문자열 입력: ");
	
	scanf_s("%s", str, (unsigned int)sizeof(str));
	printf("첫번째 단어: %s\n", str);
	
	scanf_s("%s", str, (unsigned int)sizeof(str));
	printf("버퍼에 남아있는 두번째 단어: %s\n", str);

	return 0;
}