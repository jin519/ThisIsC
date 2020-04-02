// 654p 예제 19-10 헤더 파일의 중복 문제 해결 방법

#include <stdio.h>
#include "Point.h"
#include "Line.h"

int main()
{
	Line a = { { 1, 2 }, { 5, 6 } };
	Point b; 

	b.x = ((a.first.x + a.second.x) / 2);
	b.y = ((a.first.y + a.second.y) / 2);

	printf("선의 가운데 점의 좌표: (%d, %d)\n", b.x, b.y); 

	return 0;
}