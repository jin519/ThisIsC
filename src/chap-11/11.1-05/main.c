// 327p �������� 5��

#include <stdio.h>

int main() 
{
	char space, tab, enter;

	scanf_s("%c%c%c", &space, (unsigned int)sizeof(space), &tab, (unsigned int)sizeof(tab), &enter, (unsigned int)sizeof(enter));

	printf("�����̽� Ű�� �ƽ�Ű �ڵ尪: %d\n", space);
	printf("�� Ű�� �ƽ�Ű �ڵ尪: %d\n", tab);
	printf("���� Ű�� �ƽ�Ű �ڵ尪: %d\n", enter);

	return 0;
}