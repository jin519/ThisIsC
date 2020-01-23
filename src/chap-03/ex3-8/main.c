#include <stdio.h>
#include <string.h>

int main(void) 
{
	char fruit[20] = "strawberry"; // strawberry 초기화
	printf("%s\n", fruit); // strawberry 출력

	strcpy_s(fruit, 20, "banana"); // fruit에 banana 복사
	printf("%s\n", fruit);

	return 0;
}