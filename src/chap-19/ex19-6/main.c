// 634p ���� 19-6 #if, #ifdef, #else, #endif�� ����� ���Ǻ� ������

#include <stdio.h>
#define VER 7
#define BIT 16

int main()
{
	int max;

#if VER >= 6
	printf("���� %d�Դϴ�.\n", VER);
#endif

#ifdef BIT16
	max = 32767;
#else
	max = 2147483647;
#endif

	printf("int�� ������ �ִ밪: %d\n", max); 

	return 0;
}