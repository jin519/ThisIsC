#include <stdio.h>
#include <string.h>

int main(void) 
{
	char fruit[20] = "strawberry"; // strawberry �ʱ�ȭ
	printf("%s\n", fruit); // strawberry ���

	strcpy_s(fruit, 20, "banana"); // fruit�� banana ����
	printf("%s\n", fruit);

	return 0;
}