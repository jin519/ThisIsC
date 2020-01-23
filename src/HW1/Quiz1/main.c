/*
	C������ ��/������ ǥ���ϱ� ���� �ּ� 1byte �̻���
	�޸� ������ ����Ͽ��� �Ѵ�. (char)

	�׷��� ��/������ ���� 1�� 0���θ� ǥ���Ǵ� ������ �ڷ��̱� ������
	8bits �� 7bits�� ����Ǵ�, ��ȿ������ �޸� ������� �� �� �ִ�.

	�� ���������� �̸� �����ϱ� ���� Custom �ڷᱸ���� �˰����� �����غ���.
*/

#include <stdio.h>
typedef unsigned int BoolList;

/*
	���� 1.
	unsigned int�� 32���� bit�� ������ bool list �ڷᱸ���̴�.
	unsigned int�� ������ �Է¹޾� �� ��° bit�� true���� ����ϴ� �Լ��� �ۼ��Ͻÿ�.
*/
void printBool(const BoolList boolList)
{
	for (unsigned int n = 0; n < 32; ++n)
	{
		unsigned int FLAGGED_BITS = (1 << n);
		
		if (FLAGGED_BITS & boolList)
			printf("%2u��° bit�� true�Դϴ�.\n", (n + 1));
	}
}

int main()
{
	// (�����ʿ�������) 2, 6, 7, 9, 11, 14��° bit�� true��.
	const BoolList BOOL_LIST = 0b0010'0101'0110'0010U;
	printBool(BOOL_LIST);

	return 0;
}