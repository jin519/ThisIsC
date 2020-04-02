// 628p 예제 19-3 매크로 함수를 사용한 프로그램

#include <stdio.h>

#define SUM(a, b) ((a) + (b))
#define MUL(a, b) ((a) * (b))

int main()
{
	int a = 10, b = 20; 
	int x = 30, y = 40;
	int res;

	printf("a + b = %d\n", SUM(a, b)); 
	printf("x + y = %d\n", SUM(x, y));

	res = (30 / MUL(2, 5)); 

	printf("res = %d\n", res); 

	return 0;
}