// 560p 연습문제 1번

#include <stdio.h>

struct Marriage 
{
	char name[20];
	int age;
	char sex;
	double height;
};

int main() 
{
	struct Marriage m1 = { "원진", 29, 'f', 160.0 };
	struct Marriage* mp = &m1;

	printf("이름: %s\n", mp->name);
	printf("나이: %d\n", mp->age);
	printf("성별: %c\n", mp->sex);
	printf("키: %.1lf\n", mp->height);

	return 0;
}