// 607p ���� 18-10 ���۸� �����ϹǷ� �߻��ϴ� ����

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

		printf("����: %d, �̸�: %s\n", age, name);
		
		fclose(pStream);
	}

	return 0;
}