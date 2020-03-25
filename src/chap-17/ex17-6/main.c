// 533p 예제 17-6 비트 필드 구조체를 사용한 자식 수 계산

#include <stdio.h>

struct Children 
{
	unsigned int son : 2;
	unsigned int daughter : 2; 
	unsigned int pet : 3;
};

int main() 
{
	struct Children children = { 1, 2, 3 };
	int sum;

	printf("struct Children의 크기: %llu바이트\n", sizeof(children));
	
	sum = (children.son + children.daughter + children.pet);
	printf("자식 수: %d\n", sum);

	return 0;
}