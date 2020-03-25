// 531p 예제 17-5 구조체를 반환하여 두 변수의 값 교환

#include <stdio.h>

struct Vision 
{
	double left;
	double right;
};

struct Vision exchange(struct Vision vision) 
{
	double tmp;

	tmp = vision.left;
	vision.left = vision.right;
	vision.right = tmp;
}

int main() 
{
	struct Vision vision;

	fputs("시력 입력: ", stdout);
	scanf_s("%lf%lf", &vision.left, &vision.right);

	vision = exchange(vision);
	printf("바뀐 시력: %.1lf %.1lf\n", vision.left, vision.right);

	return 0;
}