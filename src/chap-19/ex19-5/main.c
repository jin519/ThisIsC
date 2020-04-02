// 633p 예제 19-5 #과 ##을 사용한 매크로 함수

#include <stdio.h>

#define PRINT_EXPR(x) printf(#x " = %d\n", x); 
#define NAME_CAT(x, y) (x ## y)

int main()
{
	int a1, a2;

	NAME_CAT(a, 1) = 10; 
	NAME_CAT(a, 2) = 20;

	PRINT_EXPR(a1 + a2);
	PRINT_EXPR(a2 - a1);

	return 0;
}