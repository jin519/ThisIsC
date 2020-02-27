// 451p 예제 15-2 2중 포인터를 사용한 포인터 교환

#include <stdio.h>

void swapPtr(char** pa, char** pb) 
{
	char* tmp = *pa;
	*pa = *pb;
	*pb = tmp;
}

int main()
{
	char* pa = "success";
	char* pb = "failure";

	printf("pa -> %s, pb -> %s\n", pa, pb);
	swapPtr(&pa, &pb);
	printf("pa -> %s, pb -> %s\n", pa, pb);

	return 0;
}