// 607p 예제 18-10 버퍼를 공유하므로 발생하는 문제

#include <stdio.h>

int main()
{
	FILE* pStream = NULL;
	fopen_s(&pStream, "a.txt", "rt"); 

	if (pStream) 
	{
		int age;
		char name[20] = { '\0' };

		fscanf_s(pStream, "%d", &age);
		fgets(name, sizeof(name), pStream);

		printf("나이: %d, 이름: %s\n", age, name);
		
		fclose(pStream);
	}

	return 0;
}