#include <stdio.h>

int total(int kor, int eng, int mat); // �� ������ ������ �Ѱܹ޾� ���� ��ȯ
double average(int tot); // ������ �Ѱܹ޾� ��� ��ȯ
void print_title(void); // ������ ������ ������ �κ� ���

int main() 
{
	int kor, eng, mat;

	printf("# �� ������ ���� �Է�: ");
	scanf_s("%d%d%d", &kor, &eng, &mat);

	print_title();

	const int TOTAL = total(kor, eng, mat);
	const double AVG = average(TOTAL);

	printf("%4d %4d %4d %4d %4.1lf\n", kor, eng, mat, TOTAL, AVG);

	return 0;
}

int total(int kor, int eng, int mat) 
{
	return (kor + eng + mat);
}

double average(int tot) 
{
	return ((double)tot / 3.0);
}

void print_title(void) 
{
	puts("=====< ����ǥ >=====\n");

	puts("----------------------------");
	puts("���� ���� ���� ���� ���");
	puts("----------------------------");
}