// 531p ���� 17-5 ����ü�� ��ȯ�Ͽ� �� ������ �� ��ȯ

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

	fputs("�÷� �Է�: ", stdout);
	scanf_s("%lf%lf", &vision.left, &vision.right);

	vision = exchange(vision);
	printf("�ٲ� �÷�: %.1lf %.1lf\n", vision.left, vision.right);

	return 0;
}