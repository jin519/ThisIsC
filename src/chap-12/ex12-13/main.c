// 372p 예제 12-13 strcmp, strncmp 함수를 사용한 문자열 비교

#include <stdio.h>
#include <string.h>

int main()
{
	char str1[80] = "pear";
	char str2[80] = "peach";

	printf("사전에 나중에 나오는 과일 이름: ");

	if (strcmp(str1, str2) > 0)
		printf("%s\n", str1);
	else
		printf("%s\n", str2);

	printf("앞에서 3개의 문자를 비교하면 ");

	if (strncmp(str1, str2, 3) == 0)
		printf("같다.\n");
	else 
		printf("다르다.\n");

	return 0;
}