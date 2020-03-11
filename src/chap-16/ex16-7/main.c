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
	char tmp[80]; // 문자열 입력을 위한 임시 char 배열
	char** str = NULL; // 포인터 배열로 사용할 동적 할당 영역 연결
	int max = 0; // 최대 입력 문자열 수를 저장
	int i = 0;

	max = atoi(argv[1]); // 두번째 명령행 인수를 정수로 반환

	str = (char**)malloc((max + 1) * sizeof(char*)); // 포인터 배열의 동적 할당

	while (true) 
	{
		printf("문자열을 입력하세요: ");
		gets_s(tmp, sizeof(tmp));

		if (!tmp[0]) // 엔터만 입력하면 반복 종료
			break;

		const size_t SIZE = (strlen(tmp) + 1);

		str[i] = (char*)malloc(SIZE * sizeof(char));

		strcpy_s(str[i], SIZE, tmp);

		i++;

		if (i == max) 
		{
			puts("문자열 입력이 최대값을 모두 채웠습니다");
			break;
		}
	}

	str[i] = NULL; // 입력이 끝난 후 널포인터로 마감
	printStr(str); // 입력된 문자열 출력

	i = 0; 

	while (str[i]) 
	{
		free(str[i]);
		i++;
	}

	free(str);

	return 0;
}